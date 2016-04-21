//Delay.cpp
//Zach Hummel
//3/10/16

//Implementation of Delay.h

#include "Delay.h"

//Constructor
Delay::Delay(int lengthInSamples) {
	delayLineL = new float[lengthInSamples];
	delayLineR = new float[lengthInSamples];
	delayLength = lengthInSamples;

	//Flush (zero) delay line and filter buffers.
	flush();
	setFeedback((float) pow(10, .05*-75.0));
	setHPFreq(10);
	setLPFreq(20000);
    setTimeInSamples(0);

	dprl = dprr = 0;
	dpwl = dpwr = dprl + getTimeInSamples();

	requestLPFilterUpdate();
	requestHPFilterUpdate();
}

Delay::Delay() {
	int lengthInSamples = 1024; //Default to 0 samples. Not a lot of delay time.

	delayLineL = new float[lengthInSamples];
	delayLineR = new float[lengthInSamples];
	delayLength = lengthInSamples;

	//Flush (zero) delay line and filter buffers.
	flush();

	setFeedback((float) pow(10, .05*-75.0));
	setHPFreq(10);
	setLPFreq(20000);
    setTimeInSamples(0);

	dprl = dprr = 0;
	dpwl = dpwr = dprl + getTimeInSamples();

	requestLPFilterUpdate();
	requestHPFilterUpdate();
}

//Use Functions
void Delay::processSample(float *leftSample, float *rightSample, double sampleRate) {
	//Update delayLine with new sample.
	delayLineL[dpwl] = *leftSample + getFeedback()*delayLineL[dprl];
	delayLineR[dpwr] = *rightSample + getFeedback()*delayLineR[dprr];

	//Read out one sample.
	*leftSample = delayLineL[dprl];
	*rightSample = delayLineR[dprr];

	//Filter the output.
	LPFilter(leftSample, rightSample, sampleRate);
	HPFilter(leftSample, rightSample, sampleRate);

	//Increment all four pointers.
	dprl = ++dprl % getDelayLength();
	dprr = ++dprr % getDelayLength();
	dpwl = ++dpwl % getDelayLength();
	dpwr = ++dpwr % getDelayLength();
}

void Delay::flush() {
    //Zero delay lines
	for(int i = 0; i < getDelayLength(); ++i) {
		delayLineL[i] = 0.0f;
		delayLineR[i] = 0.0f;
	}

	//Zero filter buffers
	for(int i = 0; i < 2; ++i) {
		lpInputL[i] = lpInputR[i] = lpOutputL[i] = lpOutputR[i] = hpInputL[i] = hpInputR[i] = hpOutputL[i] = hpOutputR[i] = 0.0f;
	}
}

//Apply low-pass filter 
void Delay::LPFilter(float *leftSample, float *rightSample, double sampleRate) {
    //Calculate intermediaries
    float leftInput = *leftSample;
	float rightInput = *rightSample;

	if(LPFilterNeedsUpdate()) {
		float w0 = 2 * PI * getLPFreq() / sampleRate;
		float alpha = sin(w0) / 2 * (.707); //Fixed Q for maximum flat amplitude below f0
		float cosw0 = cos(w0); //Minor optimization
    
		//Calculate coefficients
		lpb[0] = (1 - cosw0)/2;
		lpb[1] = 1 - cosw0;
		lpb[2] = lpb[0];
		lpa[0] = 1 + alpha;
		lpa[1] = -2 * cosw0;
		lpa[2] = 1 - alpha;

		clearLPFilterUpdate();
	}
    
	
	//Apply filtering
	*leftSample = (lpb[0]/lpa[0])*leftInput + (lpb[1]/lpa[0])*lpInputL[0] + (lpb[2]/lpa[0])*lpInputL[1] - (lpa[1]/lpa[0])*lpOutputL[0] - (lpa[2]/lpa[0])*lpOutputL[1];
	*rightSample = (lpb[0]/lpa[0])*rightInput + (lpb[1]/lpa[0])*lpInputR[0] + (lpb[2]/lpa[0])*lpInputR[1] - (lpa[1]/lpa[0])*lpOutputR[0] - (lpa[2]/lpa[0])*lpOutputR[1];

    //Rotate buffers
    lpInputL[1] = lpInputL[0];
    lpInputL[0] = leftInput;
    lpInputR[1] = lpInputR[0];
    lpInputR[0] = rightInput;
    lpOutputL[1] = lpOutputL[0];
    lpOutputL[0] = *leftSample;
    lpOutputR[1] = lpOutputR[0];
    lpOutputR[0] = *rightSample;
}

//Apply high-pass filter
void Delay::HPFilter(float *leftSample, float *rightSample, double sampleRate) {
    //Calculate intermediaries
    float leftInput = *leftSample;
    float rightInput = *rightSample;

	if(HPFilterNeedsUpdate()) {
		float w0 = 2 * PI * getHPFreq() / sampleRate;
		float alpha = sin(w0) / 2 * (.707); //Fixed Q for maximum flat amplitude above f0
		float cosw0 = cos(w0); //Minor optimization
    
		//Calculate coefficients
		hpb[0] = (1 + cosw0)/2;
		hpb[1] = -(1 + cosw0);
		hpb[2] = hpb[0];
		hpa[0] = 1 + alpha;
		hpa[1] = -2 * cosw0;
		hpa[2] = 1 - alpha;

		clearHPFilterUpdate();
	}
	
	//Apply filtering
	*leftSample = (hpb[0]/hpa[0])*leftInput + (hpb[1]/hpa[0])*hpInputL[0] + (hpb[2]/hpa[0])*hpInputL[1] - (hpa[1]/hpa[0])*hpOutputL[0] - (hpa[2]/hpa[0])*hpOutputL[1];
	*rightSample = (hpb[0]/hpa[0])*rightInput + (hpb[1]/hpa[0])*hpInputR[0] + (hpb[2]/hpa[0])*hpInputR[1] - (hpa[1]/hpa[0])*hpOutputR[0] - (hpa[2]/hpa[0])*hpOutputR[1];

    //Rotate buffers
    hpInputL[1] = hpInputL[0];
    hpInputL[0] = leftInput;
    hpInputR[1] = hpInputR[0];
    hpInputR[0] = rightInput;
    hpOutputL[1] = hpOutputL[0];
    hpOutputL[0] = *leftSample;
    hpOutputR[1] = hpOutputR[0];
    hpOutputR[0] = *rightSample;   
}