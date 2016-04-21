/*
  ==============================================================================

  This is an automatically generated GUI class created by the Introjucer!

  Be careful when adding custom code to these files, as only the code within
  the "//[xyz]" and "//[/xyz]" sections will be retained when the file is loaded
  and re-saved.

  Created with Introjucer version: 3.1.0

  ------------------------------------------------------------------------------

  The Introjucer is part of the JUCE library - "Jules' Utility Class Extensions"
  Copyright 2004-13 by Raw Material Software Ltd.

  ==============================================================================
*/

#ifndef __JUCE_HEADER_A4018D331874B26C__
#define __JUCE_HEADER_A4018D331874B26C__

//[Headers]     -- You can add your own extra header files here --
#include "JuceHeader.h"
#include "PluginProcessor.h"
#include <string>
//[/Headers]



//==============================================================================
/**
                                                                    //[Comments]
    An auto-generated component, created by the Introjucer.

    Describe your class and how it works here!
                                                                    //[/Comments]
*/
class ReplicatorAudioProcessorEditor  : public AudioProcessorEditor,
                                        public Timer,
                                        public SliderListener,
                                        public ButtonListener
{
public:
    //==============================================================================
    ReplicatorAudioProcessorEditor (ReplicatorAudioProcessor& ownerFilter);
    ~ReplicatorAudioProcessorEditor();

    //==============================================================================
    //[UserMethods]     -- You can add your own custom methods in this section.
    void timerCallback();

    ReplicatorAudioProcessor* getProcessor() const {
        return static_cast <ReplicatorAudioProcessor*> (getAudioProcessor());
    }

    float log10(float x) {
        return log(x)/log(10);
    }
    //[/UserMethods]

    void paint (Graphics& g);
    void resized();
    void sliderValueChanged (Slider* sliderThatWasMoved);
    void buttonClicked (Button* buttonThatWasClicked);



private:
    //[UserVariables]   -- You can add your own custom variables in this section.
    //[/UserVariables]

    //==============================================================================
    ScopedPointer<Slider> DryPanSlider;
    ScopedPointer<Slider> Delay1PanSlider;
    ScopedPointer<Slider> Delay2PanSlider;
    ScopedPointer<Slider> Delay3PanSlider;
    ScopedPointer<Slider> Delay4PanSlider;
    ScopedPointer<Slider> Delay5PanSlider;
    ScopedPointer<Slider> DryGainSlider;
    ScopedPointer<Slider> Delay1GainSlider;
    ScopedPointer<Slider> Delay2GainSlider;
    ScopedPointer<Slider> Delay3GainSlider;
    ScopedPointer<Slider> Delay4GainSlider;
    ScopedPointer<Slider> Delay5GainSlider;
    ScopedPointer<Slider> Delay1LPSlider;
    ScopedPointer<Slider> Delay2LPSlider;
    ScopedPointer<Slider> Delay3LPSlider;
    ScopedPointer<Slider> Delay4LPSlider;
    ScopedPointer<Slider> Delay5LPSlider;
    ScopedPointer<Slider> Delay2HPSlider;
    ScopedPointer<Slider> Delay3HPSlider;
    ScopedPointer<Slider> Delay4HPSlider;
    ScopedPointer<Slider> Delay5HPSlider;
    ScopedPointer<Slider> Delay1HPSlider;
    ScopedPointer<Slider> Delay1TimeSlider;
    ScopedPointer<Slider> Delay2TimeSlider;
    ScopedPointer<Slider> Delay3TimeSlider;
    ScopedPointer<Slider> Delay4TimeSlider;
    ScopedPointer<Slider> Delay5TimeSlider;
    ScopedPointer<Label> label;
    ScopedPointer<Label> label2;
    ScopedPointer<Label> label3;
    ScopedPointer<Label> label8;
    ScopedPointer<Label> label9;
    ScopedPointer<Label> label10;
    ScopedPointer<Label> label11;
    ScopedPointer<Label> label12;
    ScopedPointer<Label> label17;
    ScopedPointer<Slider> Delay1FBSlider;
    ScopedPointer<Slider> Delay2FBSlider;
    ScopedPointer<Slider> Delay3FBSlider;
    ScopedPointer<Slider> Delay4FBSlider;
    ScopedPointer<Slider> Delay5FBSlider;
    ScopedPointer<Label> label27;
    ScopedPointer<Label> label32;
    ScopedPointer<Label> label33;
    ScopedPointer<Label> label13;
    ScopedPointer<Label> label14;
    ScopedPointer<Label> label15;
    ScopedPointer<Label> label16;
    ScopedPointer<Label> label28;
    ScopedPointer<Label> label29;
    ScopedPointer<Label> label30;
    ScopedPointer<Label> label31;
    ScopedPointer<Label> label18;
    ScopedPointer<Label> label19;
    ScopedPointer<Label> label20;
    ScopedPointer<Label> label21;
    ScopedPointer<Label> label22;
    ScopedPointer<Label> label23;
    ScopedPointer<Label> label24;
    ScopedPointer<Label> label25;
    ScopedPointer<Label> label26;
    ScopedPointer<Label> label4;
    ScopedPointer<Label> label5;
    ScopedPointer<Label> label6;
    ScopedPointer<Label> label7;
    ScopedPointer<ToggleButton> bypassButton;
    ScopedPointer<Label> label34;
    ScopedPointer<Label> Delay1GainLabel;
    ScopedPointer<Label> Delay2GainLabel;
    ScopedPointer<Label> Delay3GainLabel;
    ScopedPointer<Label> Delay4GainLabel;
    ScopedPointer<Label> Delay5GainLabel;
    ScopedPointer<Label> DryGainLabel;


    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (ReplicatorAudioProcessorEditor)
};

//[EndFile] You can add extra defines here...
//[/EndFile]

#endif   // __JUCE_HEADER_A4018D331874B26C__
