//Delay.h
//Zach Hummel
//3/10/16

//A basic stereo delay line with adjustable delay time, feedback, and hp/lp filters.
#include <math.h>

#define PI 3.14159265359

class Delay {
public:
	//Constructor
	Delay();
	Delay(int lengthInSamples);

	//Destructor
	~Delay() {}

	//Getters/Setters
	int getTimeInSamples() {
		return time;
	}

	float getFeedback() {
		return feedback;
	}
	
	float getHPFreq() {
	    return hpf;
	}
	
	float getLPFreq() {
	    return lpf;
	}

	int getDelayLength() {
		return delayLength;
	}

	void setTimeInSamples(int samples) {
		time = samples;
		dprl = dpwl - time;
		if(dprl < 0) {
			dprl = getDelayLength() + dprl;
		}
		dprr = dpwr - time;
		if(dprr < 0) {
			dprr = getDelayLength() + dprr;
		}
	}

	void setFeedback(float fb) {
		feedback = fb;
	}
	
	void setHPFreq(float freq) {
	    hpf = freq;
	    requestHPFilterUpdate();
	}
	
	void setLPFreq(float freq) {
	    lpf = freq;
	    requestLPFilterUpdate();
	}

	//Use Functions
	void processSample(float *leftSample, float *rightSample, double sampleRate);
	void flush();
	void LPFilter(float *leftSample, float *rightSample, double sampleRate);
	void HPFilter(float *leftSample, float *rightSample, double sampleRate);

private:
	//Variable declarations
	float *delayLineL, *delayLineR; //The array of samples that makes up the delay line.
	int delayLength;
	int dprl, dprr, dpwl, dpwr; //Delay pointer read, delay pointer write left/right.
	int time; //Delay time in samples.
	float feedback; //feedback gain in linear amplitude (0.0-1.0)
	float hpf, lpf; //High- and low-pass filter frequencies.
	bool LPNeedsUpdate;
	bool HPNeedsUpdate;

	//Filter buffers.
	float lpInputL[2], lpInputR[2], lpOutputL[2], lpOutputR[2], hpInputL[2], hpInputR[2], hpOutputL[2], hpOutputR[2];

	//Filter coefficients.
	 float lpa[3], lpb[3], hpa[3], hpb[3];

	//Private use functions
	bool LPFilterNeedsUpdate() {
		return LPNeedsUpdate;
	}

	bool HPFilterNeedsUpdate() {
		return HPNeedsUpdate;
	}

	void requestLPFilterUpdate() {
		LPNeedsUpdate = true;
	}

	void requestHPFilterUpdate() {
		HPNeedsUpdate = true;
	}

	void clearLPFilterUpdate() {
		LPNeedsUpdate = false;
	}

	void clearHPFilterUpdate() {
		HPNeedsUpdate = false;
	}
};