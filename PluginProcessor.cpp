/*
  ==============================================================================

    This file was auto-generated by the Introjucer!

    It contains the basic framework code for a JUCE plugin processor.

  ==============================================================================
*/

#include "PluginProcessor.h"
#include "PluginEditor.h"


//==============================================================================
ReplicatorAudioProcessor::ReplicatorAudioProcessor()
{
    //Set up the delay lines.
    for(int i = 0; i < NUM_DELAY_LINES; ++i) {
        delayLines[i] = new Delay(DELAY_IN_SAMPLES);
    }
    
    //Initialize user parameters.
    userParams[bypass] = 0.0f;
    userParams[time0] = userParams[time1] = userParams[time2] = userParams[time3] = userParams[time4] = delayLines[0]->getTimeInSamples();
    setParameter(time0, userParams[time0]);
    setParameter(time1, userParams[time1]);
    setParameter(time2, userParams[time2]);
    setParameter(time3, userParams[time3]);
    setParameter(time4, userParams[time4]);
	userParams[fb0] = userParams[fb1] = userParams[fb2] = userParams[fb3] = userParams[fb4] = delayLines[0]->getFeedback();
    setParameter(fb0, userParams[fb0]);
    setParameter(fb1, userParams[fb1]);
    setParameter(fb2, userParams[fb2]);
    setParameter(fb3, userParams[fb3]);
    setParameter(fb4, userParams[fb4]);
	userParams[hpf0] = userParams[hpf1] = userParams[hpf2] = userParams[hpf3] = userParams[hpf4] = delayLines[0]->getHPFreq();
    setParameter(hpf0, userParams[hpf0]);
    setParameter(hpf1, userParams[hpf1]);
    setParameter(hpf2, userParams[hpf2]);
    setParameter(hpf3, userParams[hpf3]);
    setParameter(hpf4, userParams[hpf4]);
	userParams[lpf0] = userParams[lpf1] = userParams[lpf2] = userParams[lpf3] = userParams[lpf4] = delayLines[0]->getLPFreq();
    setParameter(lpf0, userParams[lpf0]);
    setParameter(lpf1, userParams[lpf1]);
    setParameter(lpf2, userParams[lpf2]);
    setParameter(lpf3, userParams[lpf3]);
    setParameter(lpf4, userParams[lpf4]);
    userParams[panDry] = userParams[pan0] = userParams[pan1] = userParams[pan2] = userParams[pan3] = userParams[pan4] = 0.0f;
    userParams[gainDry] = 1.0f;
    userParams[gain0] = userParams[gain1] = userParams[gain2] = userParams[gain3] = userParams[gain4] = 0.0f;
	
	requestUIUpdate();
}

ReplicatorAudioProcessor::~ReplicatorAudioProcessor()
{
}

//==============================================================================
const String ReplicatorAudioProcessor::getName() const
{
    return JucePlugin_Name;
}

int ReplicatorAudioProcessor::getNumParameters()
{
    return totalNumParams;
}

float ReplicatorAudioProcessor::getParameter (int index)
{
    switch(index) {
        case bypass:
            return userParams[bypass];
        case time0:
            userParams[time0] = (float) delayLines[0]->getTimeInSamples();
            return userParams[time0];
        case time1:
            userParams[time1] = (float) delayLines[1]->getTimeInSamples();
            return userParams[time1];
        case time2:
            userParams[time2] = (float) delayLines[2]->getTimeInSamples();
            return userParams[time2];
        case time3:
            userParams[time3] = (float) delayLines[3]->getTimeInSamples();
            return userParams[time3];
        case time4:
            userParams[time4] = (float) delayLines[4]->getTimeInSamples();
            return userParams[time4];
        case fb0:
            userParams[fb0] = delayLines[0]->getFeedback();
            return userParams[fb0];
        case fb1:
            userParams[fb1] = delayLines[1]->getFeedback();
            return userParams[fb1];
        case fb2:
            userParams[fb2] = delayLines[2]->getFeedback();
            return userParams[fb2];
        case fb3:
            userParams[fb3] = delayLines[3]->getFeedback();
            return userParams[fb3];
        case fb4:
            userParams[fb4] = delayLines[4]->getFeedback();
            return userParams[fb4];
        case hpf0:
            userParams[hpf0] = delayLines[0]->getHPFreq();
            return userParams[hpf0];
        case hpf1:
            userParams[hpf1] = delayLines[1]->getHPFreq();
            return userParams[hpf1];
        case hpf2:
            userParams[hpf2] = delayLines[2]->getHPFreq();
            return userParams[hpf2];
        case hpf3:
            userParams[hpf3] = delayLines[3]->getHPFreq();
            return userParams[hpf3];
        case hpf4:
            userParams[hpf4] = delayLines[4]->getHPFreq();
            return userParams[hpf4];
        case lpf0:
            userParams[lpf0] = delayLines[0]->getLPFreq();
            return userParams[lpf0];
        case lpf1:
            userParams[lpf1] = delayLines[1]->getLPFreq();
            return userParams[lpf1];
        case lpf2:
            userParams[lpf2] = delayLines[2]->getLPFreq();
            return userParams[lpf2];
        case lpf3:
            userParams[lpf3] = delayLines[3]->getLPFreq();
            return userParams[lpf3];
        case lpf4:
            userParams[lpf4] = delayLines[4]->getLPFreq();
            return userParams[lpf4];
        case panDry:
            return userParams[panDry];
        case pan0:
            return userParams[pan0];
        case pan1:
            return userParams[pan1];
        case pan2:
            return userParams[pan2];
        case pan3:
            return userParams[pan3];
        case pan4:
            return userParams[pan4];
        case gainDry:
            return userParams[gainDry];
        case gain0:
            return userParams[gain0];
        case gain1:
            return userParams[gain1];
        case gain2:
            return userParams[gain2];
        case gain3:
            return userParams[gain3];
        case gain4:
            return userParams[gain4];
        default:
            return 0.0f;
    }
}

void ReplicatorAudioProcessor::setParameter (int index, float newValue)
{
    switch(index) {
        case bypass:
            if(newValue > 0.0f) {
                userParams[bypass] = 1.0f;
            } else {
                userParams[bypass] = 0.0f;
            }
            break;
        case time0:
            if(newValue > 0.0f) {
                userParams[time0] = newValue;
            } else {
                userParams[time0] = 0.0f;
            }
            delayLines[0]->setTimeInSamples((int) userParams[time0]);
            break;
        case time1:
            if(newValue > 0.0f) {
                userParams[time1] = newValue;
            } else {
                userParams[time1] = 0.0f;
            }
            delayLines[1]->setTimeInSamples((int) userParams[time1]);
            break;
        case time2:
            if(newValue > 0.0f) {
                userParams[time2] = newValue;
            } else {
                userParams[time2] = 0.0f;
            }
            delayLines[2]->setTimeInSamples((int) userParams[time2]);
            break;
        case time3:
            if(newValue > 0.0f) {
                userParams[time3] = newValue;
            } else {
                userParams[time3] = 0.0f;
            }
            delayLines[3]->setTimeInSamples((int) userParams[time3]);
            break;
        case time4:
            if(newValue > 0.0f) {
                userParams[time4] = newValue;
            } else {
                userParams[time4] = 0.0f;
            }
            delayLines[4]->setTimeInSamples((int) userParams[time4]);
            break;
        case fb0:
            userParams[fb0] = newValue;
            delayLines[0]->setFeedback(userParams[fb0]);
            break;
        case fb1:
            userParams[fb1] = newValue;
            delayLines[1]->setFeedback(userParams[fb1]);
            break;
        case fb2:
            userParams[fb2] = newValue;
            delayLines[2]->setFeedback(userParams[fb2]);
            break;
        case fb3:
            userParams[fb3] = newValue;
            delayLines[3]->setFeedback(userParams[fb3]);
            break;
        case fb4:
            userParams[fb4] = newValue;
            delayLines[4]->setFeedback(userParams[fb4]);
            break;
        case hpf0:
            if(newValue > 0.0f) {
                userParams[hpf0] = newValue;
            }
            delayLines[0]->setHPFreq(userParams[hpf0]);
            break;
        case hpf1:
            if(newValue > 0.0f) {
                userParams[hpf1] = newValue;
            }
            delayLines[1]->setHPFreq(userParams[hpf1]);
            break;
        case hpf2:
            if(newValue > 0.0f) {
                userParams[hpf2] = newValue;
            }
            delayLines[2]->setHPFreq(userParams[hpf2]);
            break;
        case hpf3:
            if(newValue > 0.0f) {
                userParams[hpf3] = newValue;
            }
            delayLines[3]->setHPFreq(userParams[hpf3]);
            break;
        case hpf4:
            if(newValue > 0.0f) {
                userParams[hpf4] = newValue;
            }
            delayLines[4]->setHPFreq(userParams[hpf4]);
            break;
        case lpf0:
            if(newValue > 0.0f) {
                userParams[lpf0] = newValue;
            }
            delayLines[0]->setLPFreq(userParams[lpf0]);
            break;
        case lpf1:
            if(newValue > 0.0f) {
                userParams[lpf1] = newValue;
            }
            delayLines[1]->setLPFreq(userParams[lpf1]);
            break;
        case lpf2:
            if(newValue > 0.0f) {
                userParams[lpf2] = newValue;
            }
            delayLines[2]->setLPFreq(userParams[lpf2]);
            break;
        case lpf3:
            if(newValue > 0.0f) {
                userParams[lpf3] = newValue;
            }
            delayLines[3]->setLPFreq(userParams[lpf3]);
            break;
        case lpf4:
            if(newValue > 0.0f) {
                userParams[lpf4] = newValue;
            }
            delayLines[4]->setLPFreq(userParams[lpf4]);
            break;
        case panDry:
            userParams[panDry] = newValue;
            break;
        case pan0:
            userParams[pan0] = newValue;
            break;
        case pan1:
            userParams[pan1] = newValue;
            break;
        case pan2:
            userParams[pan2] = newValue;
            break;
        case pan3:
            userParams[pan3] = newValue;
            break;
        case pan4:
            userParams[pan4] = newValue;
            break;
        case gainDry:
            userParams[gainDry] = newValue;
            break;
        case gain0:
            userParams[gain0] = newValue;
            break;
        case gain1:
            userParams[gain1] = newValue;
            break;
        case gain2:
            userParams[gain2] = newValue;
            break;
        case gain3:
            userParams[gain3] = newValue;
            break;
        case gain4:
            userParams[gain4] = newValue;
            break;
        default:
            return;
    }
    
    requestUIUpdate();
}

const String ReplicatorAudioProcessor::getParameterName (int index)
{
    switch(index) {
        case bypass:
            return "Bypass";
        case time0:
            return "Time 1";
        case time1:
            return "Time 2";
        case time2:
            return "Time 3";
        case time3:
            return "Time 4";
        case time4:
            return "Time 5";
        case fb0:
            return "Feedback 1";
        case fb1:
            return "Feedback 2";
        case fb2:
            return "Feedback 3";
        case fb3:
            return "Feedback 4";
        case fb4:
            return "Feedback 5";
        case hpf0:
            return "HP Freq 1";
        case hpf1:
            return "HP Freq 2";
        case hpf2:
            return "HP Freq 3";
        case hpf3:
            return "HP Freq 4";
        case hpf4:
            return "HP Freq 5";
        case lpf0:
            return "LP Freq 1";
        case lpf1:
            return "LP Freq 2";
        case lpf2:
            return "LP Freq 3";
        case lpf3:
            return "LP Freq 4";
        case lpf4:
            return "LP Freq 5";
        case panDry:
            return "Pan Dry";
        case pan0:
            return "Pan 1";
        case pan1:
            return "Pan 2";
        case pan2:
            return "Pan 3";
        case pan3:
            return "Pan 4";
        case pan4:
            return "Pan 5";
        case gainDry:
            return "Gain Dry";
        case gain0:
            return "Gain 1";
        case gain1:
            return "Gain 2";
        case gain2:
            return "Gain 3";
        case gain3:
            return "Gain 4";
        case gain4:
            return "Gain 5";
        default:
            return String();
    }
}

const String ReplicatorAudioProcessor::getParameterText (int index)
{
    return String();
}

const String ReplicatorAudioProcessor::getInputChannelName (int channelIndex) const
{
    return String (channelIndex + 1);
}

const String ReplicatorAudioProcessor::getOutputChannelName (int channelIndex) const
{
    return String (channelIndex + 1);
}

bool ReplicatorAudioProcessor::isInputChannelStereoPair (int index) const
{
    return true;
}

bool ReplicatorAudioProcessor::isOutputChannelStereoPair (int index) const
{
    return true;
}

bool ReplicatorAudioProcessor::acceptsMidi() const
{
   #if JucePlugin_WantsMidiInput
    return true;
   #else
    return false;
   #endif
}

bool ReplicatorAudioProcessor::producesMidi() const
{
   #if JucePlugin_ProducesMidiOutput
    return true;
   #else
    return false;
   #endif
}

bool ReplicatorAudioProcessor::silenceInProducesSilenceOut() const
{
    return false;
}

double ReplicatorAudioProcessor::getTailLengthSeconds() const
{
    return 0.0;
}

int ReplicatorAudioProcessor::getNumPrograms()
{
    return 1;   // NB: some hosts don't cope very well if you tell them there are 0 programs,
                // so this should be at least 1, even if you're not really implementing programs.
}

int ReplicatorAudioProcessor::getCurrentProgram()
{
    return 0;
}

void ReplicatorAudioProcessor::setCurrentProgram (int index)
{
}

const String ReplicatorAudioProcessor::getProgramName (int index)
{
    return String();
}

void ReplicatorAudioProcessor::changeProgramName (int index, const String& newName)
{
}

//==============================================================================
void ReplicatorAudioProcessor::prepareToPlay (double sampleRate, int samplesPerBlock)
{
    // Use this method as the place to do any pre-playback
    setCurrentSampleRate(sampleRate);
    // initialisation that you need..
}

void ReplicatorAudioProcessor::releaseResources()
{
    // When playback stops, you can use this as an opportunity to free up any
    // spare memory, etc.
}

void ReplicatorAudioProcessor::processBlock (AudioSampleBuffer& buffer, MidiBuffer& midiMessages)
{
    // In case we have more outputs than inputs, this code clears any output
    // channels that didn't contain input data, (because these aren't
    // guaranteed to be empty - they may contain garbage).
    // I've added this to avoid people getting screaming feedback
    // when they first compile the plugin, but obviously you don't need to
    // this code if your algorithm already fills all the output channels.
    for (int i = getNumInputChannels(); i < getNumOutputChannels(); ++i)
        buffer.clear (i, 0, buffer.getNumSamples());
        
    if(getNumInputChannels() == 2 && !userParams[bypass]) {
        //Some declarations
        float angle, tmpSampleL = 0.0f, tmpSampleR = 0.0f;
        setCurrentSampleRate(getSampleRate());
    
        //The main left and right buffers.
        float *leftBuffer = buffer.getWritePointer(0);
        float *rightBuffer = buffer.getWritePointer(1);
    
        //Set up temporary buffers for the delay lines to work with.
        for(int j = 0; j < NUM_DELAY_LINES; ++j) {
            tempL[j] = new float[buffer.getNumSamples()];
            tempR[j] = new float[buffer.getNumSamples()];
        }
    
        for(int i = 0; i < buffer.getNumSamples(); ++i) {
            //Process all of the delay lines
		    for(int j = 0; j < NUM_DELAY_LINES; ++j) {
		        //Copy the current L and R samples from the buffer into the temp buffers
		        tempL[j][i] = leftBuffer[i];
		        tempR[j][i] = rightBuffer[i];
		    
		        //Process the temp buffers.
                delayLines[j]->processSample(&tempL[j][i], &tempR[j][i], getSampleRate());
            }
        
            //Mix all of the processed delay lines together with the dry signal.
            
            //Dry Signal
            angle = (getParameter(panDry) + 1.0f) / 2.0f * (PI/2);
            tmpSampleL += getParameter(gainDry) * pow(cos(angle), 2) * leftBuffer[i];
            tmpSampleR += getParameter(gainDry) * pow(sin(angle), 2) * rightBuffer[i];
            
            //Delay 1
            angle = (getParameter(pan0) + 1.0f) / 2.0f * (PI/2);
            tmpSampleL += getParameter(gain0) * pow(cos(angle), 2) * tempL[0][i];
            tmpSampleR += getParameter(gain0) * pow(sin(angle), 2) * tempR[0][i];
            
            //Delay 2
            angle = (getParameter(pan1) + 1.0f) / 2.0f * (PI/2);
            tmpSampleL += getParameter(gain1) * pow(cos(angle), 2) * tempL[1][i];
            tmpSampleR += getParameter(gain1) * pow(sin(angle), 2) * tempR[1][i];
            
            //Delay 3
            angle = (getParameter(pan2) + 1.0f) / 2.0f * (PI/2);
            tmpSampleL += getParameter(gain2) * pow(cos(angle), 2) * tempL[2][i];
            tmpSampleR += getParameter(gain2) * pow(sin(angle), 2) * tempR[2][i];
            
            
            //Delay 4
            angle = (getParameter(pan3) + 1.0f) / 2.0f * (PI/2);
            tmpSampleL += getParameter(gain3) * pow(cos(angle), 2) * tempL[3][i];
            tmpSampleR += getParameter(gain3) * pow(sin(angle), 2) * tempR[3][i];
            
            //Delay 5
            angle = (getParameter(pan4) + 1.0f) / 2.0f * (PI/2);
            tmpSampleL += getParameter(gain4) * pow(cos(angle), 2) * tempL[4][i];
            tmpSampleR += getParameter(gain4) * pow(sin(angle), 2) * tempR[4][i];
        
            //Push the temp samples into the output buffer
            leftBuffer[i] = tmpSampleL;
            rightBuffer[i] = tmpSampleR;
        
            //Reset the temp samples.
            tmpSampleL = 0.0f;
            tmpSampleR = 0.0f;
        } //end for
    } //end if not bypassed
}

//==============================================================================
bool ReplicatorAudioProcessor::hasEditor() const
{
    return true; // (change this to false if you choose to not supply an editor)
}

AudioProcessorEditor* ReplicatorAudioProcessor::createEditor()
{
    return new ReplicatorAudioProcessorEditor (*this);
}

//==============================================================================
void ReplicatorAudioProcessor::getStateInformation (MemoryBlock& destData)
{
    // You should use this method to store your parameters in the memory block.
    // You could do that either as raw data, or use the XML or ValueTree classes
    // as intermediaries to make it easy to save and load complex data.
    
    //Idea sourced from the JUCE demo plugin; implementation sourced from my BitMangler plugin.
    
    //Create the root XML node/element.
    XmlElement xml("REPLICATORSETTINGS");
    
    //Set attributes.
    for(int i = 0; i < totalNumParams; ++i) {
        xml.setAttribute(getParameterName(i), getParameter(i));
    }
    
    //Dump to the given memory block.
    copyXmlToBinary(xml, destData);
}

void ReplicatorAudioProcessor::setStateInformation (const void* data, int sizeInBytes)
{
    // You should use this method to restore your parameters from this memory block,
    // whose contents will have been created by the getStateInformation() call.
	//Code sourced from the JUCE demo plugin with mild modifications.
    
    //Retrieve the XML information
    ScopedPointer<XmlElement> xmlState (getXmlFromBinary (data, sizeInBytes));
    
    //Parse it all out.
    if(xmlState != nullptr) {
        //Make sure that we've got the right data.
        if(xmlState->hasTagName("REPLICATORSETTINGS")) {
            //Pull information and push it to our plugin.
            for(int i = 0; i < totalNumParams; ++i) {
                setParameter(i, (float) xmlState->getDoubleAttribute(getParameterName(i), getParameter(i)));
            }
        }
    }
    
    requestUIUpdate();
}

//==============================================================================
// This creates new instances of the plugin..
AudioProcessor* JUCE_CALLTYPE createPluginFilter()
{
    return new ReplicatorAudioProcessor();
}