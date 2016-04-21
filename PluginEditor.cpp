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

//[Headers] You can add your own extra header files here...
//[/Headers]

#include "PluginEditor.h"


//[MiscUserDefs] You can add your own user definitions and misc code here...
//[/MiscUserDefs]

//==============================================================================
ReplicatorAudioProcessorEditor::ReplicatorAudioProcessorEditor (ReplicatorAudioProcessor& ownerFilter)
    : AudioProcessorEditor(ownerFilter)
{
    addAndMakeVisible (DryPanSlider = new Slider ("new slider"));
    DryPanSlider->setRange (-100, 100, 1);
    DryPanSlider->setSliderStyle (Slider::RotaryHorizontalDrag);
    DryPanSlider->setTextBoxStyle (Slider::TextBoxBelow, false, 40, 20);
    DryPanSlider->setColour (Slider::backgroundColourId, Colour (0x00000000));
    DryPanSlider->setColour (Slider::trackColourId, Colour (0x61ffffff));
    DryPanSlider->setColour (Slider::rotarySliderFillColourId, Colour (0x7fcecece));
    DryPanSlider->addListener (this);

    addAndMakeVisible (Delay1PanSlider = new Slider ("new slider"));
    Delay1PanSlider->setRange (-100, 100, 1);
    Delay1PanSlider->setSliderStyle (Slider::RotaryHorizontalDrag);
    Delay1PanSlider->setTextBoxStyle (Slider::TextBoxBelow, false, 40, 20);
    Delay1PanSlider->setColour (Slider::rotarySliderFillColourId, Colour (0x7fcecece));
    Delay1PanSlider->addListener (this);

    addAndMakeVisible (Delay2PanSlider = new Slider ("new slider"));
    Delay2PanSlider->setRange (-100, 100, 1);
    Delay2PanSlider->setSliderStyle (Slider::RotaryHorizontalDrag);
    Delay2PanSlider->setTextBoxStyle (Slider::TextBoxBelow, false, 40, 20);
    Delay2PanSlider->setColour (Slider::rotarySliderFillColourId, Colour (0x7fcecece));
    Delay2PanSlider->addListener (this);

    addAndMakeVisible (Delay3PanSlider = new Slider ("new slider"));
    Delay3PanSlider->setRange (-100, 100, 1);
    Delay3PanSlider->setSliderStyle (Slider::RotaryHorizontalDrag);
    Delay3PanSlider->setTextBoxStyle (Slider::TextBoxBelow, false, 40, 20);
    Delay3PanSlider->setColour (Slider::rotarySliderFillColourId, Colour (0x7fcecece));
    Delay3PanSlider->addListener (this);

    addAndMakeVisible (Delay4PanSlider = new Slider ("new slider"));
    Delay4PanSlider->setRange (-100, 100, 1);
    Delay4PanSlider->setSliderStyle (Slider::RotaryHorizontalDrag);
    Delay4PanSlider->setTextBoxStyle (Slider::TextBoxBelow, false, 40, 20);
    Delay4PanSlider->setColour (Slider::rotarySliderFillColourId, Colour (0x7fcecece));
    Delay4PanSlider->addListener (this);

    addAndMakeVisible (Delay5PanSlider = new Slider ("new slider"));
    Delay5PanSlider->setRange (-100, 100, 1);
    Delay5PanSlider->setSliderStyle (Slider::RotaryHorizontalDrag);
    Delay5PanSlider->setTextBoxStyle (Slider::TextBoxBelow, false, 40, 20);
    Delay5PanSlider->setColour (Slider::rotarySliderFillColourId, Colour (0x7fcecece));
    Delay5PanSlider->addListener (this);

    addAndMakeVisible (DryGainSlider = new Slider ("new slider"));
    DryGainSlider->setRange (-75, 12, 0.1);
    DryGainSlider->setSliderStyle (Slider::LinearVertical);
    DryGainSlider->setTextBoxStyle (Slider::NoTextBox, false, 40, 20);
    DryGainSlider->setColour (Slider::rotarySliderFillColourId, Colour (0x7fcecece));
    DryGainSlider->addListener (this);

    addAndMakeVisible (Delay1GainSlider = new Slider ("new slider"));
    Delay1GainSlider->setRange (-75, 12, 0.1);
    Delay1GainSlider->setSliderStyle (Slider::LinearVertical);
    Delay1GainSlider->setTextBoxStyle (Slider::NoTextBox, false, 40, 20);
    Delay1GainSlider->setColour (Slider::rotarySliderFillColourId, Colour (0x7fcecece));
    Delay1GainSlider->addListener (this);

    addAndMakeVisible (Delay2GainSlider = new Slider ("new slider"));
    Delay2GainSlider->setRange (-75, 12, 0.1);
    Delay2GainSlider->setSliderStyle (Slider::LinearVertical);
    Delay2GainSlider->setTextBoxStyle (Slider::NoTextBox, false, 40, 20);
    Delay2GainSlider->setColour (Slider::rotarySliderFillColourId, Colour (0x7fcecece));
    Delay2GainSlider->addListener (this);

    addAndMakeVisible (Delay3GainSlider = new Slider ("new slider"));
    Delay3GainSlider->setRange (-75, 12, 0.1);
    Delay3GainSlider->setSliderStyle (Slider::LinearVertical);
    Delay3GainSlider->setTextBoxStyle (Slider::NoTextBox, false, 40, 20);
    Delay3GainSlider->setColour (Slider::rotarySliderFillColourId, Colour (0x7fcecece));
    Delay3GainSlider->addListener (this);

    addAndMakeVisible (Delay4GainSlider = new Slider ("new slider"));
    Delay4GainSlider->setRange (-75, 12, 0.1);
    Delay4GainSlider->setSliderStyle (Slider::LinearVertical);
    Delay4GainSlider->setTextBoxStyle (Slider::NoTextBox, false, 40, 20);
    Delay4GainSlider->setColour (Slider::rotarySliderFillColourId, Colour (0x7fcecece));
    Delay4GainSlider->addListener (this);

    addAndMakeVisible (Delay5GainSlider = new Slider ("new slider"));
    Delay5GainSlider->setRange (-75, 12, 0.1);
    Delay5GainSlider->setSliderStyle (Slider::LinearVertical);
    Delay5GainSlider->setTextBoxStyle (Slider::NoTextBox, false, 40, 20);
    Delay5GainSlider->setColour (Slider::rotarySliderFillColourId, Colour (0x7fcecece));
    Delay5GainSlider->addListener (this);

    addAndMakeVisible (Delay1LPSlider = new Slider ("new slider"));
    Delay1LPSlider->setRange (1000, 20000, 1);
    Delay1LPSlider->setSliderStyle (Slider::RotaryHorizontalDrag);
    Delay1LPSlider->setTextBoxStyle (Slider::TextBoxBelow, false, 40, 20);
    Delay1LPSlider->setColour (Slider::rotarySliderFillColourId, Colour (0xfff8ca8e));
    Delay1LPSlider->addListener (this);

    addAndMakeVisible (Delay2LPSlider = new Slider ("new slider"));
    Delay2LPSlider->setRange (1000, 20000, 1);
    Delay2LPSlider->setSliderStyle (Slider::RotaryHorizontalDrag);
    Delay2LPSlider->setTextBoxStyle (Slider::TextBoxBelow, false, 40, 20);
    Delay2LPSlider->setColour (Slider::rotarySliderFillColourId, Colour (0xfff8ca8e));
    Delay2LPSlider->addListener (this);

    addAndMakeVisible (Delay3LPSlider = new Slider ("new slider"));
    Delay3LPSlider->setRange (1000, 20000, 1);
    Delay3LPSlider->setSliderStyle (Slider::RotaryHorizontalDrag);
    Delay3LPSlider->setTextBoxStyle (Slider::TextBoxBelow, false, 40, 20);
    Delay3LPSlider->setColour (Slider::rotarySliderFillColourId, Colour (0xfff8ca8e));
    Delay3LPSlider->addListener (this);

    addAndMakeVisible (Delay4LPSlider = new Slider ("new slider"));
    Delay4LPSlider->setRange (1000, 20000, 1);
    Delay4LPSlider->setSliderStyle (Slider::RotaryHorizontalDrag);
    Delay4LPSlider->setTextBoxStyle (Slider::TextBoxBelow, false, 40, 20);
    Delay4LPSlider->setColour (Slider::rotarySliderFillColourId, Colour (0xfff8ca8e));
    Delay4LPSlider->addListener (this);

    addAndMakeVisible (Delay5LPSlider = new Slider ("new slider"));
    Delay5LPSlider->setRange (1000, 20000, 1);
    Delay5LPSlider->setSliderStyle (Slider::RotaryHorizontalDrag);
    Delay5LPSlider->setTextBoxStyle (Slider::TextBoxBelow, false, 40, 20);
    Delay5LPSlider->setColour (Slider::rotarySliderFillColourId, Colour (0xfff8ca8e));
    Delay5LPSlider->addListener (this);

    addAndMakeVisible (Delay2HPSlider = new Slider ("new slider"));
    Delay2HPSlider->setRange (10, 1000, 1);
    Delay2HPSlider->setSliderStyle (Slider::RotaryHorizontalDrag);
    Delay2HPSlider->setTextBoxStyle (Slider::TextBoxBelow, false, 40, 20);
    Delay2HPSlider->setColour (Slider::rotarySliderFillColourId, Colour (0xfff8ca8e));
    Delay2HPSlider->addListener (this);

    addAndMakeVisible (Delay3HPSlider = new Slider ("new slider"));
    Delay3HPSlider->setRange (10, 1000, 1);
    Delay3HPSlider->setSliderStyle (Slider::RotaryHorizontalDrag);
    Delay3HPSlider->setTextBoxStyle (Slider::TextBoxBelow, false, 40, 20);
    Delay3HPSlider->setColour (Slider::rotarySliderFillColourId, Colour (0xfff8ca8e));
    Delay3HPSlider->addListener (this);

    addAndMakeVisible (Delay4HPSlider = new Slider ("new slider"));
    Delay4HPSlider->setRange (10, 1000, 1);
    Delay4HPSlider->setSliderStyle (Slider::RotaryHorizontalDrag);
    Delay4HPSlider->setTextBoxStyle (Slider::TextBoxBelow, false, 40, 20);
    Delay4HPSlider->setColour (Slider::rotarySliderFillColourId, Colour (0xfff8ca8e));
    Delay4HPSlider->addListener (this);

    addAndMakeVisible (Delay5HPSlider = new Slider ("new slider"));
    Delay5HPSlider->setRange (10, 1000, 1);
    Delay5HPSlider->setSliderStyle (Slider::RotaryHorizontalDrag);
    Delay5HPSlider->setTextBoxStyle (Slider::TextBoxBelow, false, 40, 20);
    Delay5HPSlider->setColour (Slider::rotarySliderFillColourId, Colour (0xfff8ca8e));
    Delay5HPSlider->addListener (this);

    addAndMakeVisible (Delay1HPSlider = new Slider ("new slider"));
    Delay1HPSlider->setRange (10, 1000, 1);
    Delay1HPSlider->setSliderStyle (Slider::RotaryHorizontalDrag);
    Delay1HPSlider->setTextBoxStyle (Slider::TextBoxBelow, false, 40, 20);
    Delay1HPSlider->setColour (Slider::rotarySliderFillColourId, Colour (0xfff8ca8e));
    Delay1HPSlider->addListener (this);

    addAndMakeVisible (Delay1TimeSlider = new Slider ("new slider"));
    Delay1TimeSlider->setRange (1, 1500, 1);
    Delay1TimeSlider->setSliderStyle (Slider::RotaryHorizontalDrag);
    Delay1TimeSlider->setTextBoxStyle (Slider::TextBoxBelow, false, 40, 20);
    Delay1TimeSlider->setColour (Slider::rotarySliderFillColourId, Colours::black);
    Delay1TimeSlider->setColour (Slider::textBoxBackgroundColourId, Colours::white);
    Delay1TimeSlider->addListener (this);

    addAndMakeVisible (Delay2TimeSlider = new Slider ("new slider"));
    Delay2TimeSlider->setRange (1, 1500, 1);
    Delay2TimeSlider->setSliderStyle (Slider::RotaryHorizontalDrag);
    Delay2TimeSlider->setTextBoxStyle (Slider::TextBoxBelow, false, 40, 20);
    Delay2TimeSlider->setColour (Slider::rotarySliderFillColourId, Colours::black);
    Delay2TimeSlider->addListener (this);

    addAndMakeVisible (Delay3TimeSlider = new Slider ("new slider"));
    Delay3TimeSlider->setRange (1, 1500, 1);
    Delay3TimeSlider->setSliderStyle (Slider::RotaryHorizontalDrag);
    Delay3TimeSlider->setTextBoxStyle (Slider::TextBoxBelow, false, 40, 20);
    Delay3TimeSlider->setColour (Slider::rotarySliderFillColourId, Colours::black);
    Delay3TimeSlider->addListener (this);

    addAndMakeVisible (Delay4TimeSlider = new Slider ("new slider"));
    Delay4TimeSlider->setRange (1, 1500, 1);
    Delay4TimeSlider->setSliderStyle (Slider::RotaryHorizontalDrag);
    Delay4TimeSlider->setTextBoxStyle (Slider::TextBoxBelow, false, 40, 20);
    Delay4TimeSlider->setColour (Slider::rotarySliderFillColourId, Colours::black);
    Delay4TimeSlider->addListener (this);

    addAndMakeVisible (Delay5TimeSlider = new Slider ("new slider"));
    Delay5TimeSlider->setRange (1, 1500, 1);
    Delay5TimeSlider->setSliderStyle (Slider::RotaryHorizontalDrag);
    Delay5TimeSlider->setTextBoxStyle (Slider::TextBoxBelow, false, 40, 20);
    Delay5TimeSlider->setColour (Slider::rotarySliderFillColourId, Colours::black);
    Delay5TimeSlider->addListener (this);

    addAndMakeVisible (label = new Label ("new label",
                                          TRANS("The Replicator")));
    label->setFont (Font ("Vivaldi", 63.30f, Font::plain));
    label->setJustificationType (Justification::centred);
    label->setEditable (false, false, false);
    label->setColour (Label::textColourId, Colour (0xfff8ca8e));
    label->setColour (TextEditor::textColourId, Colours::black);
    label->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label2 = new Label ("new label",
                                           TRANS("Dry")));
    label2->setFont (Font ("Lucida Console", 16.00f, Font::plain));
    label2->setJustificationType (Justification::centred);
    label2->setEditable (false, false, false);
    label2->setColour (Label::textColourId, Colour (0xfff8ca8e));
    label2->setColour (TextEditor::textColourId, Colours::black);
    label2->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label3 = new Label ("new label",
                                           TRANS("Delay 1")));
    label3->setFont (Font ("Lucida Console", 16.00f, Font::plain));
    label3->setJustificationType (Justification::centred);
    label3->setEditable (false, false, false);
    label3->setColour (Label::textColourId, Colour (0xfff8ca8e));
    label3->setColour (TextEditor::textColourId, Colours::black);
    label3->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label8 = new Label ("new label",
                                           TRANS("Time")));
    label8->setFont (Font ("Lucida Console", 16.00f, Font::plain));
    label8->setJustificationType (Justification::centred);
    label8->setEditable (false, false, false);
    label8->setColour (Label::textColourId, Colour (0xfff8ca8e));
    label8->setColour (TextEditor::textColourId, Colours::black);
    label8->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label9 = new Label ("new label",
                                           TRANS("HPF")));
    label9->setFont (Font ("Lucida Console", 16.00f, Font::plain));
    label9->setJustificationType (Justification::centred);
    label9->setEditable (false, false, false);
    label9->setColour (Label::textColourId, Colour (0xfff8ca8e));
    label9->setColour (TextEditor::textColourId, Colours::black);
    label9->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label10 = new Label ("new label",
                                            TRANS("LPF")));
    label10->setFont (Font ("Lucida Console", 16.00f, Font::plain));
    label10->setJustificationType (Justification::centred);
    label10->setEditable (false, false, false);
    label10->setColour (Label::textColourId, Colour (0xfff8ca8e));
    label10->setColour (TextEditor::textColourId, Colours::black);
    label10->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label11 = new Label ("new label",
                                            TRANS("Pan")));
    label11->setFont (Font ("Lucida Console", 16.00f, Font::plain));
    label11->setJustificationType (Justification::centred);
    label11->setEditable (false, false, false);
    label11->setColour (Label::textColourId, Colour (0xfff8ca8e));
    label11->setColour (TextEditor::textColourId, Colours::black);
    label11->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label12 = new Label ("new label",
                                            TRANS("ms")));
    label12->setFont (Font ("Lucida Console", 16.00f, Font::plain));
    label12->setJustificationType (Justification::centredLeft);
    label12->setEditable (false, false, false);
    label12->setColour (Label::textColourId, Colour (0xfff8ca8e));
    label12->setColour (TextEditor::textColourId, Colours::black);
    label12->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label17 = new Label ("new label",
                                            TRANS("Hz")));
    label17->setFont (Font ("Lucida Console", 16.00f, Font::plain));
    label17->setJustificationType (Justification::centredLeft);
    label17->setEditable (false, false, false);
    label17->setColour (Label::textColourId, Colour (0xfff8ca8e));
    label17->setColour (TextEditor::textColourId, Colours::black);
    label17->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (Delay1FBSlider = new Slider ("new slider"));
    Delay1FBSlider->setRange (-75, 0, 0.1);
    Delay1FBSlider->setSliderStyle (Slider::RotaryHorizontalDrag);
    Delay1FBSlider->setTextBoxStyle (Slider::TextBoxBelow, false, 40, 20);
    Delay1FBSlider->setColour (Slider::rotarySliderFillColourId, Colours::black);
    Delay1FBSlider->setColour (Slider::textBoxBackgroundColourId, Colours::white);
    Delay1FBSlider->addListener (this);

    addAndMakeVisible (Delay2FBSlider = new Slider ("new slider"));
    Delay2FBSlider->setRange (-75, 0, 0.1);
    Delay2FBSlider->setSliderStyle (Slider::RotaryHorizontalDrag);
    Delay2FBSlider->setTextBoxStyle (Slider::TextBoxBelow, false, 40, 20);
    Delay2FBSlider->setColour (Slider::rotarySliderFillColourId, Colours::black);
    Delay2FBSlider->setColour (Slider::textBoxBackgroundColourId, Colours::white);
    Delay2FBSlider->addListener (this);

    addAndMakeVisible (Delay3FBSlider = new Slider ("new slider"));
    Delay3FBSlider->setRange (-75, 0, 0.1);
    Delay3FBSlider->setSliderStyle (Slider::RotaryHorizontalDrag);
    Delay3FBSlider->setTextBoxStyle (Slider::TextBoxBelow, false, 40, 20);
    Delay3FBSlider->setColour (Slider::rotarySliderFillColourId, Colours::black);
    Delay3FBSlider->setColour (Slider::textBoxBackgroundColourId, Colours::white);
    Delay3FBSlider->addListener (this);

    addAndMakeVisible (Delay4FBSlider = new Slider ("new slider"));
    Delay4FBSlider->setRange (-75, 0, 0.1);
    Delay4FBSlider->setSliderStyle (Slider::RotaryHorizontalDrag);
    Delay4FBSlider->setTextBoxStyle (Slider::TextBoxBelow, false, 40, 20);
    Delay4FBSlider->setColour (Slider::rotarySliderFillColourId, Colours::black);
    Delay4FBSlider->setColour (Slider::textBoxBackgroundColourId, Colours::white);
    Delay4FBSlider->addListener (this);

    addAndMakeVisible (Delay5FBSlider = new Slider ("new slider"));
    Delay5FBSlider->setRange (-75, 0, 0.1);
    Delay5FBSlider->setSliderStyle (Slider::RotaryHorizontalDrag);
    Delay5FBSlider->setTextBoxStyle (Slider::TextBoxBelow, false, 40, 20);
    Delay5FBSlider->setColour (Slider::rotarySliderFillColourId, Colours::black);
    Delay5FBSlider->setColour (Slider::textBoxBackgroundColourId, Colours::white);
    Delay5FBSlider->addListener (this);

    addAndMakeVisible (label27 = new Label ("new label",
                                            TRANS("dB")));
    label27->setFont (Font ("Lucida Console", 16.00f, Font::plain));
    label27->setJustificationType (Justification::centredLeft);
    label27->setEditable (false, false, false);
    label27->setColour (Label::textColourId, Colour (0xfff8ca8e));
    label27->setColour (TextEditor::textColourId, Colours::black);
    label27->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label32 = new Label ("new label",
                                            TRANS("Feedback")));
    label32->setFont (Font ("Lucida Console", 16.00f, Font::plain));
    label32->setJustificationType (Justification::centred);
    label32->setEditable (false, false, false);
    label32->setColour (Label::textColourId, Colour (0xfff8ca8e));
    label32->setColour (TextEditor::textColourId, Colours::black);
    label32->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label33 = new Label ("new label",
                                            TRANS("Gain")));
    label33->setFont (Font ("Lucida Console", 16.00f, Font::plain));
    label33->setJustificationType (Justification::centred);
    label33->setEditable (false, false, false);
    label33->setColour (Label::textColourId, Colour (0xfff8ca8e));
    label33->setColour (TextEditor::textColourId, Colours::black);
    label33->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label13 = new Label ("new label",
                                            TRANS("ms")));
    label13->setFont (Font ("Lucida Console", 16.00f, Font::plain));
    label13->setJustificationType (Justification::centredLeft);
    label13->setEditable (false, false, false);
    label13->setColour (Label::textColourId, Colour (0xfff8ca8e));
    label13->setColour (TextEditor::textColourId, Colours::black);
    label13->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label14 = new Label ("new label",
                                            TRANS("ms")));
    label14->setFont (Font ("Lucida Console", 16.00f, Font::plain));
    label14->setJustificationType (Justification::centredLeft);
    label14->setEditable (false, false, false);
    label14->setColour (Label::textColourId, Colour (0xfff8ca8e));
    label14->setColour (TextEditor::textColourId, Colours::black);
    label14->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label15 = new Label ("new label",
                                            TRANS("ms")));
    label15->setFont (Font ("Lucida Console", 16.00f, Font::plain));
    label15->setJustificationType (Justification::centredLeft);
    label15->setEditable (false, false, false);
    label15->setColour (Label::textColourId, Colour (0xfff8ca8e));
    label15->setColour (TextEditor::textColourId, Colours::black);
    label15->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label16 = new Label ("new label",
                                            TRANS("ms")));
    label16->setFont (Font ("Lucida Console", 16.00f, Font::plain));
    label16->setJustificationType (Justification::centredLeft);
    label16->setEditable (false, false, false);
    label16->setColour (Label::textColourId, Colour (0xfff8ca8e));
    label16->setColour (TextEditor::textColourId, Colours::black);
    label16->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label28 = new Label ("new label",
                                            TRANS("dB")));
    label28->setFont (Font ("Lucida Console", 16.00f, Font::plain));
    label28->setJustificationType (Justification::centredLeft);
    label28->setEditable (false, false, false);
    label28->setColour (Label::textColourId, Colour (0xfff8ca8e));
    label28->setColour (TextEditor::textColourId, Colours::black);
    label28->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label29 = new Label ("new label",
                                            TRANS("dB")));
    label29->setFont (Font ("Lucida Console", 16.00f, Font::plain));
    label29->setJustificationType (Justification::centredLeft);
    label29->setEditable (false, false, false);
    label29->setColour (Label::textColourId, Colour (0xfff8ca8e));
    label29->setColour (TextEditor::textColourId, Colours::black);
    label29->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label30 = new Label ("new label",
                                            TRANS("dB")));
    label30->setFont (Font ("Lucida Console", 16.00f, Font::plain));
    label30->setJustificationType (Justification::centredLeft);
    label30->setEditable (false, false, false);
    label30->setColour (Label::textColourId, Colour (0xfff8ca8e));
    label30->setColour (TextEditor::textColourId, Colours::black);
    label30->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label31 = new Label ("new label",
                                            TRANS("dB")));
    label31->setFont (Font ("Lucida Console", 16.00f, Font::plain));
    label31->setJustificationType (Justification::centredLeft);
    label31->setEditable (false, false, false);
    label31->setColour (Label::textColourId, Colour (0xfff8ca8e));
    label31->setColour (TextEditor::textColourId, Colours::black);
    label31->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label18 = new Label ("new label",
                                            TRANS("Hz")));
    label18->setFont (Font ("Lucida Console", 16.00f, Font::plain));
    label18->setJustificationType (Justification::centredLeft);
    label18->setEditable (false, false, false);
    label18->setColour (Label::textColourId, Colour (0xfff8ca8e));
    label18->setColour (TextEditor::textColourId, Colours::black);
    label18->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label19 = new Label ("new label",
                                            TRANS("Hz")));
    label19->setFont (Font ("Lucida Console", 16.00f, Font::plain));
    label19->setJustificationType (Justification::centredLeft);
    label19->setEditable (false, false, false);
    label19->setColour (Label::textColourId, Colour (0xfff8ca8e));
    label19->setColour (TextEditor::textColourId, Colours::black);
    label19->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label20 = new Label ("new label",
                                            TRANS("Hz")));
    label20->setFont (Font ("Lucida Console", 16.00f, Font::plain));
    label20->setJustificationType (Justification::centredLeft);
    label20->setEditable (false, false, false);
    label20->setColour (Label::textColourId, Colour (0xfff8ca8e));
    label20->setColour (TextEditor::textColourId, Colours::black);
    label20->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label21 = new Label ("new label",
                                            TRANS("Hz")));
    label21->setFont (Font ("Lucida Console", 16.00f, Font::plain));
    label21->setJustificationType (Justification::centredLeft);
    label21->setEditable (false, false, false);
    label21->setColour (Label::textColourId, Colour (0xfff8ca8e));
    label21->setColour (TextEditor::textColourId, Colours::black);
    label21->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label22 = new Label ("new label",
                                            TRANS("Hz")));
    label22->setFont (Font ("Lucida Console", 16.00f, Font::plain));
    label22->setJustificationType (Justification::centredLeft);
    label22->setEditable (false, false, false);
    label22->setColour (Label::textColourId, Colour (0xfff8ca8e));
    label22->setColour (TextEditor::textColourId, Colours::black);
    label22->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label23 = new Label ("new label",
                                            TRANS("Hz")));
    label23->setFont (Font ("Lucida Console", 16.00f, Font::plain));
    label23->setJustificationType (Justification::centredLeft);
    label23->setEditable (false, false, false);
    label23->setColour (Label::textColourId, Colour (0xfff8ca8e));
    label23->setColour (TextEditor::textColourId, Colours::black);
    label23->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label24 = new Label ("new label",
                                            TRANS("Hz")));
    label24->setFont (Font ("Lucida Console", 16.00f, Font::plain));
    label24->setJustificationType (Justification::centredLeft);
    label24->setEditable (false, false, false);
    label24->setColour (Label::textColourId, Colour (0xfff8ca8e));
    label24->setColour (TextEditor::textColourId, Colours::black);
    label24->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label25 = new Label ("new label",
                                            TRANS("Hz")));
    label25->setFont (Font ("Lucida Console", 16.00f, Font::plain));
    label25->setJustificationType (Justification::centredLeft);
    label25->setEditable (false, false, false);
    label25->setColour (Label::textColourId, Colour (0xfff8ca8e));
    label25->setColour (TextEditor::textColourId, Colours::black);
    label25->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label26 = new Label ("new label",
                                            TRANS("Hz")));
    label26->setFont (Font ("Lucida Console", 16.00f, Font::plain));
    label26->setJustificationType (Justification::centredLeft);
    label26->setEditable (false, false, false);
    label26->setColour (Label::textColourId, Colour (0xfff8ca8e));
    label26->setColour (TextEditor::textColourId, Colours::black);
    label26->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label4 = new Label ("new label",
                                           TRANS("Delay 2")));
    label4->setFont (Font ("Lucida Console", 16.00f, Font::plain));
    label4->setJustificationType (Justification::centred);
    label4->setEditable (false, false, false);
    label4->setColour (Label::textColourId, Colour (0xfff8ca8e));
    label4->setColour (TextEditor::textColourId, Colours::black);
    label4->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label5 = new Label ("new label",
                                           TRANS("Delay 3")));
    label5->setFont (Font ("Lucida Console", 16.00f, Font::plain));
    label5->setJustificationType (Justification::centred);
    label5->setEditable (false, false, false);
    label5->setColour (Label::textColourId, Colour (0xfff8ca8e));
    label5->setColour (TextEditor::textColourId, Colours::black);
    label5->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label6 = new Label ("new label",
                                           TRANS("Delay 4")));
    label6->setFont (Font ("Lucida Console", 16.00f, Font::plain));
    label6->setJustificationType (Justification::centred);
    label6->setEditable (false, false, false);
    label6->setColour (Label::textColourId, Colour (0xfff8ca8e));
    label6->setColour (TextEditor::textColourId, Colours::black);
    label6->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label7 = new Label ("new label",
                                           TRANS("Delay 5")));
    label7->setFont (Font ("Lucida Console", 16.00f, Font::plain));
    label7->setJustificationType (Justification::centred);
    label7->setEditable (false, false, false);
    label7->setColour (Label::textColourId, Colour (0xfff8ca8e));
    label7->setColour (TextEditor::textColourId, Colours::black);
    label7->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (bypassButton = new ToggleButton ("new toggle button"));
    bypassButton->setButtonText (String::empty);
    bypassButton->addListener (this);

    addAndMakeVisible (label34 = new Label ("new label",
                                            TRANS("Bypass")));
    label34->setFont (Font ("Lucida Console", 16.00f, Font::plain));
    label34->setJustificationType (Justification::centredLeft);
    label34->setEditable (false, false, false);
    label34->setColour (Label::textColourId, Colour (0xfff8ca8e));
    label34->setColour (TextEditor::textColourId, Colours::black);
    label34->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (Delay1GainLabel = new Label ("new label",
                                                    TRANS("0.0")));
    Delay1GainLabel->setFont (Font (15.00f, Font::plain));
    Delay1GainLabel->setJustificationType (Justification::centred);
    Delay1GainLabel->setEditable (false, false, false);
    Delay1GainLabel->setColour (Label::backgroundColourId, Colours::white);
    Delay1GainLabel->setColour (Label::outlineColourId, Colour (0x49000000));
    Delay1GainLabel->setColour (TextEditor::textColourId, Colours::black);
    Delay1GainLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (Delay2GainLabel = new Label ("new label",
                                                    TRANS("0.0")));
    Delay2GainLabel->setFont (Font (15.00f, Font::plain));
    Delay2GainLabel->setJustificationType (Justification::centred);
    Delay2GainLabel->setEditable (false, false, false);
    Delay2GainLabel->setColour (Label::backgroundColourId, Colours::white);
    Delay2GainLabel->setColour (Label::outlineColourId, Colour (0x49000000));
    Delay2GainLabel->setColour (TextEditor::textColourId, Colours::black);
    Delay2GainLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (Delay3GainLabel = new Label ("new label",
                                                    TRANS("0.0")));
    Delay3GainLabel->setFont (Font (15.00f, Font::plain));
    Delay3GainLabel->setJustificationType (Justification::centred);
    Delay3GainLabel->setEditable (false, false, false);
    Delay3GainLabel->setColour (Label::backgroundColourId, Colours::white);
    Delay3GainLabel->setColour (Label::outlineColourId, Colour (0x49000000));
    Delay3GainLabel->setColour (TextEditor::textColourId, Colours::black);
    Delay3GainLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (Delay4GainLabel = new Label ("new label",
                                                    TRANS("0.0")));
    Delay4GainLabel->setFont (Font (15.00f, Font::plain));
    Delay4GainLabel->setJustificationType (Justification::centred);
    Delay4GainLabel->setEditable (false, false, false);
    Delay4GainLabel->setColour (Label::backgroundColourId, Colours::white);
    Delay4GainLabel->setColour (Label::outlineColourId, Colour (0x49000000));
    Delay4GainLabel->setColour (TextEditor::textColourId, Colours::black);
    Delay4GainLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (Delay5GainLabel = new Label ("new label",
                                                    TRANS("0.0")));
    Delay5GainLabel->setFont (Font (15.00f, Font::plain));
    Delay5GainLabel->setJustificationType (Justification::centred);
    Delay5GainLabel->setEditable (false, false, false);
    Delay5GainLabel->setColour (Label::backgroundColourId, Colours::white);
    Delay5GainLabel->setColour (Label::outlineColourId, Colour (0x49000000));
    Delay5GainLabel->setColour (TextEditor::textColourId, Colours::black);
    Delay5GainLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (DryGainLabel = new Label ("new label",
                                                 TRANS("0.0")));
    DryGainLabel->setFont (Font (15.00f, Font::plain));
    DryGainLabel->setJustificationType (Justification::centred);
    DryGainLabel->setEditable (false, false, false);
    DryGainLabel->setColour (Label::backgroundColourId, Colours::white);
    DryGainLabel->setColour (Label::outlineColourId, Colour (0x49000000));
    DryGainLabel->setColour (TextEditor::textColourId, Colours::black);
    DryGainLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));


    //[UserPreSize]
    //[/UserPreSize]

    setSize (840, 568);


    //[Constructor] You can add your own custom stuff here..
    //Start the timer.
    startTimer(30);

    //Scale the gain faders to be logarithmic.
    DryGainSlider->setSkewFactor(2.0);
    Delay1GainSlider->setSkewFactor(2.0);
    Delay2GainSlider->setSkewFactor(2.0);
    Delay3GainSlider->setSkewFactor(2.0);
    Delay4GainSlider->setSkewFactor(2.0);
    Delay5GainSlider->setSkewFactor(2.0);

    //Set gain faders to snap to unity upon double-click.
    DryGainSlider->setDoubleClickReturnValue(true, 0.0f);
    Delay1GainSlider->setDoubleClickReturnValue(true, 0.0f);
    Delay2GainSlider->setDoubleClickReturnValue(true, 0.0f);
    Delay3GainSlider->setDoubleClickReturnValue(true, 0.0f);
    Delay4GainSlider->setDoubleClickReturnValue(true, 0.0f);
    Delay5GainSlider->setDoubleClickReturnValue(true, 0.0f);

    //Force a GUI update.
    ownerFilter.requestUIUpdate();
    timerCallback();

    //[/Constructor]
}

ReplicatorAudioProcessorEditor::~ReplicatorAudioProcessorEditor()
{
    //[Destructor_pre]. You can add your own custom destruction code here..
    //[/Destructor_pre]

    DryPanSlider = nullptr;
    Delay1PanSlider = nullptr;
    Delay2PanSlider = nullptr;
    Delay3PanSlider = nullptr;
    Delay4PanSlider = nullptr;
    Delay5PanSlider = nullptr;
    DryGainSlider = nullptr;
    Delay1GainSlider = nullptr;
    Delay2GainSlider = nullptr;
    Delay3GainSlider = nullptr;
    Delay4GainSlider = nullptr;
    Delay5GainSlider = nullptr;
    Delay1LPSlider = nullptr;
    Delay2LPSlider = nullptr;
    Delay3LPSlider = nullptr;
    Delay4LPSlider = nullptr;
    Delay5LPSlider = nullptr;
    Delay2HPSlider = nullptr;
    Delay3HPSlider = nullptr;
    Delay4HPSlider = nullptr;
    Delay5HPSlider = nullptr;
    Delay1HPSlider = nullptr;
    Delay1TimeSlider = nullptr;
    Delay2TimeSlider = nullptr;
    Delay3TimeSlider = nullptr;
    Delay4TimeSlider = nullptr;
    Delay5TimeSlider = nullptr;
    label = nullptr;
    label2 = nullptr;
    label3 = nullptr;
    label8 = nullptr;
    label9 = nullptr;
    label10 = nullptr;
    label11 = nullptr;
    label12 = nullptr;
    label17 = nullptr;
    Delay1FBSlider = nullptr;
    Delay2FBSlider = nullptr;
    Delay3FBSlider = nullptr;
    Delay4FBSlider = nullptr;
    Delay5FBSlider = nullptr;
    label27 = nullptr;
    label32 = nullptr;
    label33 = nullptr;
    label13 = nullptr;
    label14 = nullptr;
    label15 = nullptr;
    label16 = nullptr;
    label28 = nullptr;
    label29 = nullptr;
    label30 = nullptr;
    label31 = nullptr;
    label18 = nullptr;
    label19 = nullptr;
    label20 = nullptr;
    label21 = nullptr;
    label22 = nullptr;
    label23 = nullptr;
    label24 = nullptr;
    label25 = nullptr;
    label26 = nullptr;
    label4 = nullptr;
    label5 = nullptr;
    label6 = nullptr;
    label7 = nullptr;
    bypassButton = nullptr;
    label34 = nullptr;
    Delay1GainLabel = nullptr;
    Delay2GainLabel = nullptr;
    Delay3GainLabel = nullptr;
    Delay4GainLabel = nullptr;
    Delay5GainLabel = nullptr;
    DryGainLabel = nullptr;


    //[Destructor]. You can add your own custom destruction code here..
    //[/Destructor]
}

//==============================================================================
void ReplicatorAudioProcessorEditor::paint (Graphics& g)
{
    //[UserPrePaint] Add your own custom painting code here..
    //[/UserPrePaint]

    g.fillAll (Colour (0xff7a0000));

    //[UserPaint] Add your own custom painting code here..
    //[/UserPaint]
}

void ReplicatorAudioProcessorEditor::resized()
{
    //[UserPreResize] Add your own custom resize code here..
    //[/UserPreResize]

    DryPanSlider->setBounds (760, 304, 48, 56);
    Delay1PanSlider->setBounds (120, 304, 48, 56);
    Delay2PanSlider->setBounds (248, 304, 48, 56);
    Delay3PanSlider->setBounds (376, 304, 48, 56);
    Delay4PanSlider->setBounds (504, 304, 48, 56);
    Delay5PanSlider->setBounds (632, 304, 48, 56);
    DryGainSlider->setBounds (760, 368, 48, 144);
    Delay1GainSlider->setBounds (120, 368, 48, 144);
    Delay2GainSlider->setBounds (248, 368, 48, 144);
    Delay3GainSlider->setBounds (376, 368, 48, 144);
    Delay4GainSlider->setBounds (504, 368, 48, 144);
    Delay5GainSlider->setBounds (632, 368, 48, 144);
    Delay1LPSlider->setBounds (96, 240, 48, 56);
    Delay2LPSlider->setBounds (224, 240, 48, 56);
    Delay3LPSlider->setBounds (352, 240, 48, 56);
    Delay4LPSlider->setBounds (480, 240, 48, 56);
    Delay5LPSlider->setBounds (608, 240, 48, 56);
    Delay2HPSlider->setBounds (272, 192, 48, 56);
    Delay3HPSlider->setBounds (400, 192, 48, 56);
    Delay4HPSlider->setBounds (528, 192, 48, 56);
    Delay5HPSlider->setBounds (656, 192, 48, 56);
    Delay1HPSlider->setBounds (144, 192, 48, 56);
    Delay1TimeSlider->setBounds (136, 72, 64, 72);
    Delay2TimeSlider->setBounds (264, 72, 64, 72);
    Delay3TimeSlider->setBounds (392, 72, 64, 72);
    Delay4TimeSlider->setBounds (520, 72, 64, 72);
    Delay5TimeSlider->setBounds (648, 72, 64, 72);
    label->setBounds (104, 0, 344, 72);
    label2->setBounds (760, 536, 48, 24);
    label3->setBounds (112, 536, 64, 24);
    label8->setBounds (24, 88, 48, 24);
    label9->setBounds (24, 200, 48, 24);
    label10->setBounds (24, 248, 48, 24);
    label11->setBounds (24, 312, 48, 24);
    label12->setBounds (192, 120, 32, 24);
    label17->setBounds (192, 224, 32, 24);
    Delay1FBSlider->setBounds (88, 120, 64, 72);
    Delay2FBSlider->setBounds (216, 120, 64, 72);
    Delay3FBSlider->setBounds (344, 120, 64, 72);
    Delay4FBSlider->setBounds (472, 120, 64, 72);
    Delay5FBSlider->setBounds (600, 120, 64, 72);
    label27->setBounds (144, 168, 32, 24);
    label32->setBounds (8, 136, 80, 24);
    label33->setBounds (24, 384, 48, 24);
    label13->setBounds (320, 120, 32, 24);
    label14->setBounds (448, 120, 32, 24);
    label15->setBounds (576, 120, 32, 24);
    label16->setBounds (704, 120, 32, 24);
    label28->setBounds (272, 168, 32, 24);
    label29->setBounds (400, 168, 32, 24);
    label30->setBounds (528, 168, 32, 24);
    label31->setBounds (656, 168, 32, 24);
    label18->setBounds (320, 224, 32, 24);
    label19->setBounds (448, 224, 32, 24);
    label20->setBounds (576, 224, 32, 24);
    label21->setBounds (704, 224, 32, 24);
    label22->setBounds (144, 272, 32, 24);
    label23->setBounds (272, 272, 32, 24);
    label24->setBounds (400, 272, 32, 24);
    label25->setBounds (528, 272, 32, 24);
    label26->setBounds (656, 272, 32, 24);
    label4->setBounds (240, 536, 64, 24);
    label5->setBounds (368, 536, 64, 24);
    label6->setBounds (496, 536, 64, 24);
    label7->setBounds (624, 536, 64, 24);
    bypassButton->setBounds (744, 272, 23, 24);
    label34->setBounds (760, 272, 68, 24);
    Delay1GainLabel->setBounds (120, 512, 48, 24);
    Delay2GainLabel->setBounds (248, 512, 48, 24);
    Delay3GainLabel->setBounds (376, 512, 48, 24);
    Delay4GainLabel->setBounds (504, 512, 48, 24);
    Delay5GainLabel->setBounds (632, 512, 48, 24);
    DryGainLabel->setBounds (760, 512, 48, 24);
    //[UserResized] Add your own custom resize handling here..
    //[/UserResized]
}

void ReplicatorAudioProcessorEditor::sliderValueChanged (Slider* sliderThatWasMoved)
{
    //[UsersliderValueChanged_Pre]
    ReplicatorAudioProcessor* ourProcessor = getProcessor();
    //[/UsersliderValueChanged_Pre]

    if (sliderThatWasMoved == DryPanSlider)
    {
        //[UserSliderCode_DryPanSlider] -- add your slider handling code here..
        ourProcessor->setParameter(ReplicatorAudioProcessor::panDry, (float) DryPanSlider->getValue()/100.0f);
        //[/UserSliderCode_DryPanSlider]
    }
    else if (sliderThatWasMoved == Delay1PanSlider)
    {
        //[UserSliderCode_Delay1PanSlider] -- add your slider handling code here..
        ourProcessor->setParameter(ReplicatorAudioProcessor::pan0, (float) Delay1PanSlider->getValue()/100.0f);
        //[/UserSliderCode_Delay1PanSlider]
    }
    else if (sliderThatWasMoved == Delay2PanSlider)
    {
        //[UserSliderCode_Delay2PanSlider] -- add your slider handling code here..
        ourProcessor->setParameter(ReplicatorAudioProcessor::pan1, (float) Delay2PanSlider->getValue()/100.0f);
        //[/UserSliderCode_Delay2PanSlider]
    }
    else if (sliderThatWasMoved == Delay3PanSlider)
    {
        //[UserSliderCode_Delay3PanSlider] -- add your slider handling code here..
        ourProcessor->setParameter(ReplicatorAudioProcessor::pan2, (float) Delay3PanSlider->getValue()/100.0f);
        //[/UserSliderCode_Delay3PanSlider]
    }
    else if (sliderThatWasMoved == Delay4PanSlider)
    {
        //[UserSliderCode_Delay4PanSlider] -- add your slider handling code here..
        ourProcessor->setParameter(ReplicatorAudioProcessor::pan3, (float) Delay4PanSlider->getValue()/100.0f);
        //[/UserSliderCode_Delay4PanSlider]
    }
    else if (sliderThatWasMoved == Delay5PanSlider)
    {
        //[UserSliderCode_Delay5PanSlider] -- add your slider handling code here..
        ourProcessor->setParameter(ReplicatorAudioProcessor::pan4, (float) Delay5PanSlider->getValue()/100.0f);
        //[/UserSliderCode_Delay5PanSlider]
    }
    else if (sliderThatWasMoved == DryGainSlider)
    {
        //[UserSliderCode_DryGainSlider] -- add your slider handling code here..
        if(DryGainSlider->getValue() > DryGainSlider->getMinimum()) {
            ourProcessor->setParameter(ReplicatorAudioProcessor::gainDry, (float) sqrt(pow(10, .1*DryGainSlider->getValue())));
        } else {
            ourProcessor->setParameter(ReplicatorAudioProcessor::gainDry, 0.0f);
        }
        //[/UserSliderCode_DryGainSlider]
    }
    else if (sliderThatWasMoved == Delay1GainSlider)
    {
        //[UserSliderCode_Delay1GainSlider] -- add your slider handling code here..
        if(Delay1GainSlider->getValue() > Delay1GainSlider->getMinimum()) {
            ourProcessor->setParameter(ReplicatorAudioProcessor::gain0, (float) sqrt(pow(10, .1*Delay1GainSlider->getValue())));
        } else {
            ourProcessor->setParameter(ReplicatorAudioProcessor::gain0, 0.0f);
        }
        //[/UserSliderCode_Delay1GainSlider]
    }
    else if (sliderThatWasMoved == Delay2GainSlider)
    {
        //[UserSliderCode_Delay2GainSlider] -- add your slider handling code here..
        if(Delay2GainSlider->getValue() > Delay2GainSlider->getMinimum()) {
            ourProcessor->setParameter(ReplicatorAudioProcessor::gain1, (float) sqrt(pow(10, .1*Delay2GainSlider->getValue())));
        } else {
            ourProcessor->setParameter(ReplicatorAudioProcessor::gain1, 0.0f);
        }
        //[/UserSliderCode_Delay2GainSlider]
    }
    else if (sliderThatWasMoved == Delay3GainSlider)
    {
        //[UserSliderCode_Delay3GainSlider] -- add your slider handling code here..
        if(Delay3GainSlider->getValue() > Delay3GainSlider->getMinimum()) {
            ourProcessor->setParameter(ReplicatorAudioProcessor::gain2, (float) sqrt(pow(10, .1*Delay3GainSlider->getValue())));
        } else {
            ourProcessor->setParameter(ReplicatorAudioProcessor::gain2, 0.0f);
        }
        //[/UserSliderCode_Delay3GainSlider]
    }
    else if (sliderThatWasMoved == Delay4GainSlider)
    {
        //[UserSliderCode_Delay4GainSlider] -- add your slider handling code here..
        if(Delay4GainSlider->getValue() > Delay4GainSlider->getMinimum()) {
            ourProcessor->setParameter(ReplicatorAudioProcessor::gain3, (float) sqrt(pow(10, .1*Delay4GainSlider->getValue())));
        } else {
            ourProcessor->setParameter(ReplicatorAudioProcessor::gain3, 0.0f);
        }
        //[/UserSliderCode_Delay4GainSlider]
    }
    else if (sliderThatWasMoved == Delay5GainSlider)
    {
        //[UserSliderCode_Delay5GainSlider] -- add your slider handling code here..
        if(Delay5GainSlider->getValue() > Delay5GainSlider->getMinimum()) {
            ourProcessor->setParameter(ReplicatorAudioProcessor::gain4, (float) sqrt(pow(10, .1*Delay5GainSlider->getValue())));
        } else {
            ourProcessor->setParameter(ReplicatorAudioProcessor::gain4, 0.0f);
        }
        //[/UserSliderCode_Delay5GainSlider]
    }
    else if (sliderThatWasMoved == Delay1LPSlider)
    {
        //[UserSliderCode_Delay1LPSlider] -- add your slider handling code here..
        ourProcessor->setParameter(ReplicatorAudioProcessor::lpf0, Delay1LPSlider->getValue());
        //[/UserSliderCode_Delay1LPSlider]
    }
    else if (sliderThatWasMoved == Delay2LPSlider)
    {
        //[UserSliderCode_Delay2LPSlider] -- add your slider handling code here..
        ourProcessor->setParameter(ReplicatorAudioProcessor::lpf1, Delay2LPSlider->getValue());
        //[/UserSliderCode_Delay2LPSlider]
    }
    else if (sliderThatWasMoved == Delay3LPSlider)
    {
        //[UserSliderCode_Delay3LPSlider] -- add your slider handling code here..
        ourProcessor->setParameter(ReplicatorAudioProcessor::lpf2, Delay3LPSlider->getValue());
        //[/UserSliderCode_Delay3LPSlider]
    }
    else if (sliderThatWasMoved == Delay4LPSlider)
    {
        //[UserSliderCode_Delay4LPSlider] -- add your slider handling code here..
        ourProcessor->setParameter(ReplicatorAudioProcessor::lpf3, Delay4LPSlider->getValue());
        //[/UserSliderCode_Delay4LPSlider]
    }
    else if (sliderThatWasMoved == Delay5LPSlider)
    {
        //[UserSliderCode_Delay5LPSlider] -- add your slider handling code here..
        ourProcessor->setParameter(ReplicatorAudioProcessor::lpf4, Delay5LPSlider->getValue());
        //[/UserSliderCode_Delay5LPSlider]
    }
    else if (sliderThatWasMoved == Delay2HPSlider)
    {
        //[UserSliderCode_Delay2HPSlider] -- add your slider handling code here..
        ourProcessor->setParameter(ReplicatorAudioProcessor::hpf1, Delay2HPSlider->getValue());
        //[/UserSliderCode_Delay2HPSlider]
    }
    else if (sliderThatWasMoved == Delay3HPSlider)
    {
        //[UserSliderCode_Delay3HPSlider] -- add your slider handling code here..
        ourProcessor->setParameter(ReplicatorAudioProcessor::hpf2, Delay3HPSlider->getValue());
        //[/UserSliderCode_Delay3HPSlider]
    }
    else if (sliderThatWasMoved == Delay4HPSlider)
    {
        //[UserSliderCode_Delay4HPSlider] -- add your slider handling code here..
        ourProcessor->setParameter(ReplicatorAudioProcessor::hpf3, Delay4HPSlider->getValue());
        //[/UserSliderCode_Delay4HPSlider]
    }
    else if (sliderThatWasMoved == Delay5HPSlider)
    {
        //[UserSliderCode_Delay5HPSlider] -- add your slider handling code here..
        ourProcessor->setParameter(ReplicatorAudioProcessor::hpf4, Delay5HPSlider->getValue());
        //[/UserSliderCode_Delay5HPSlider]
    }
    else if (sliderThatWasMoved == Delay1HPSlider)
    {
        //[UserSliderCode_Delay1HPSlider] -- add your slider handling code here..
        ourProcessor->setParameter(ReplicatorAudioProcessor::hpf0, Delay1HPSlider->getValue());
        //[/UserSliderCode_Delay1HPSlider]
    }
    else if (sliderThatWasMoved == Delay1TimeSlider)
    {
        //[UserSliderCode_Delay1TimeSlider] -- add your slider handling code here..
        ourProcessor->setParameter(ReplicatorAudioProcessor::time0, (float) ourProcessor->getCurrentSampleRate() * Delay1TimeSlider->getValue() * .001f);
        //[/UserSliderCode_Delay1TimeSlider]
    }
    else if (sliderThatWasMoved == Delay2TimeSlider)
    {
        //[UserSliderCode_Delay2TimeSlider] -- add your slider handling code here..
        ourProcessor->setParameter(ReplicatorAudioProcessor::time1, (float) ourProcessor->getCurrentSampleRate() * Delay2TimeSlider->getValue() * .001f);
        //[/UserSliderCode_Delay2TimeSlider]
    }
    else if (sliderThatWasMoved == Delay3TimeSlider)
    {
        //[UserSliderCode_Delay3TimeSlider] -- add your slider handling code here..
        ourProcessor->setParameter(ReplicatorAudioProcessor::time2, (float) ourProcessor->getCurrentSampleRate() * Delay3TimeSlider->getValue() * .001f);
        //[/UserSliderCode_Delay3TimeSlider]
    }
    else if (sliderThatWasMoved == Delay4TimeSlider)
    {
        //[UserSliderCode_Delay4TimeSlider] -- add your slider handling code here..
        ourProcessor->setParameter(ReplicatorAudioProcessor::time3, (float) ourProcessor->getCurrentSampleRate() * Delay4TimeSlider->getValue() * .001f);
        //[/UserSliderCode_Delay4TimeSlider]
    }
    else if (sliderThatWasMoved == Delay5TimeSlider)
    {
        //[UserSliderCode_Delay5TimeSlider] -- add your slider handling code here..
        ourProcessor->setParameter(ReplicatorAudioProcessor::time4, (float) ourProcessor->getCurrentSampleRate() * Delay5TimeSlider->getValue() * .001f);
        //[/UserSliderCode_Delay5TimeSlider]
    }
    else if (sliderThatWasMoved == Delay1FBSlider)
    {
        //[UserSliderCode_Delay1FBSlider] -- add your slider handling code here..
        ourProcessor->setParameter(ReplicatorAudioProcessor::fb0, (float) sqrt(pow(10, .1*Delay1FBSlider->getValue())));
        //[/UserSliderCode_Delay1FBSlider]
    }
    else if (sliderThatWasMoved == Delay2FBSlider)
    {
        //[UserSliderCode_Delay2FBSlider] -- add your slider handling code here..
        ourProcessor->setParameter(ReplicatorAudioProcessor::fb1, (float) sqrt(pow(10, .1*Delay2FBSlider->getValue())));
        //[/UserSliderCode_Delay2FBSlider]
    }
    else if (sliderThatWasMoved == Delay3FBSlider)
    {
        //[UserSliderCode_Delay3FBSlider] -- add your slider handling code here..
        ourProcessor->setParameter(ReplicatorAudioProcessor::fb2, (float) sqrt(pow(10, .1*Delay3FBSlider->getValue())));
        //[/UserSliderCode_Delay3FBSlider]
    }
    else if (sliderThatWasMoved == Delay4FBSlider)
    {
        //[UserSliderCode_Delay4FBSlider] -- add your slider handling code here..
        ourProcessor->setParameter(ReplicatorAudioProcessor::fb3, (float) sqrt(pow(10, .1*Delay4FBSlider->getValue())));
        //[/UserSliderCode_Delay4FBSlider]
    }
    else if (sliderThatWasMoved == Delay5FBSlider)
    {
        //[UserSliderCode_Delay5FBSlider] -- add your slider handling code here..
        ourProcessor->setParameter(ReplicatorAudioProcessor::fb4, (float) sqrt(pow(10, .1*Delay5FBSlider->getValue())));
        //[/UserSliderCode_Delay5FBSlider]
    }

    //[UsersliderValueChanged_Post]
    ourProcessor = nullptr;
    //[/UsersliderValueChanged_Post]
}

void ReplicatorAudioProcessorEditor::buttonClicked (Button* buttonThatWasClicked)
{
    //[UserbuttonClicked_Pre]
    ReplicatorAudioProcessor* ourProcessor = getProcessor();
    //[/UserbuttonClicked_Pre]

    if (buttonThatWasClicked == bypassButton)
    {
        //[UserButtonCode_bypassButton] -- add your button handler code here..
        ourProcessor->setParameter(ReplicatorAudioProcessor::bypass, (float) bypassButton->getToggleState());
        //[/UserButtonCode_bypassButton]
    }

    //[UserbuttonClicked_Post]
    ourProcessor = nullptr;
    //[/UserbuttonClicked_Post]
}



//[MiscUserCode] You can add your own definitions of your custom methods or any other code here...
void ReplicatorAudioProcessorEditor::timerCallback() {
    ReplicatorAudioProcessor* ourProcessor = getProcessor();

    //If we need a GUI update.
    if(ourProcessor->needsUIUpdate()) {
        //Push updated values to all of the GUI elements.

        //Bypass button.
        bypassButton->setToggleState(1.0f == ourProcessor->getParameter(ReplicatorAudioProcessor::bypass), dontSendNotification);

        //Pan rotaries.
        DryPanSlider->setValue((int) 100 * ourProcessor->getParameter(ReplicatorAudioProcessor::panDry), dontSendNotification);
        Delay1PanSlider->setValue((int) 100 * ourProcessor->getParameter(ReplicatorAudioProcessor::pan0), dontSendNotification);
        Delay2PanSlider->setValue((int) 100 * ourProcessor->getParameter(ReplicatorAudioProcessor::pan1), dontSendNotification);
        Delay3PanSlider->setValue((int) 100 * ourProcessor->getParameter(ReplicatorAudioProcessor::pan2), dontSendNotification);
        Delay4PanSlider->setValue((int) 100 * ourProcessor->getParameter(ReplicatorAudioProcessor::pan3), dontSendNotification);
        Delay5PanSlider->setValue((int) 100 * ourProcessor->getParameter(ReplicatorAudioProcessor::pan4), dontSendNotification);

        //Gain faders and their labels.
        DryGainSlider->setValue(10.0f * log10(pow(ourProcessor->getParameter(ReplicatorAudioProcessor::gainDry), 2)), dontSendNotification);
        Delay1GainSlider->setValue(10.0f * log10(pow(ourProcessor->getParameter(ReplicatorAudioProcessor::gain0), 2)), dontSendNotification);
        Delay2GainSlider->setValue(10.0f * log10(pow(ourProcessor->getParameter(ReplicatorAudioProcessor::gain1), 2)), dontSendNotification);
        Delay3GainSlider->setValue(10.0f * log10(pow(ourProcessor->getParameter(ReplicatorAudioProcessor::gain2), 2)), dontSendNotification);
        Delay4GainSlider->setValue(10.0f * log10(pow(ourProcessor->getParameter(ReplicatorAudioProcessor::gain3), 2)), dontSendNotification);
        Delay5GainSlider->setValue(10.0f * log10(pow(ourProcessor->getParameter(ReplicatorAudioProcessor::gain4), 2)), dontSendNotification);
        if(ourProcessor->getParameter(ReplicatorAudioProcessor::gainDry) == 0.0f) {
            DryGainLabel->setText("-inf", dontSendNotification);
        } else {
            DryGainLabel->setText(String(10.0f * log10(pow(ourProcessor->getParameter(ReplicatorAudioProcessor::gainDry), 2)), 1), dontSendNotification);
        }
        if(ourProcessor->getParameter(ReplicatorAudioProcessor::gain0) == 0.0f) {
            Delay1GainLabel->setText("-inf", dontSendNotification);
        } else {
            Delay1GainLabel->setText(String(10.0f * log10(pow(ourProcessor->getParameter(ReplicatorAudioProcessor::gain0), 2)), 1), dontSendNotification);
        }
        if(ourProcessor->getParameter(ReplicatorAudioProcessor::gain1) == 0.0f) {
            Delay2GainLabel->setText("-inf", dontSendNotification);
        } else {
            Delay2GainLabel->setText(String(10.0f * log10(pow(ourProcessor->getParameter(ReplicatorAudioProcessor::gain1), 2)), 1), dontSendNotification);
        }
        if(ourProcessor->getParameter(ReplicatorAudioProcessor::gain2) == 0.0f) {
            Delay3GainLabel->setText("-inf", dontSendNotification);
        } else {
            Delay3GainLabel->setText(String(10.0f * log10(pow(ourProcessor->getParameter(ReplicatorAudioProcessor::gain2), 2)), 1), dontSendNotification);
        }
        if(ourProcessor->getParameter(ReplicatorAudioProcessor::gain3) == 0.0f) {
            Delay4GainLabel->setText("-inf", dontSendNotification);
        } else {
            Delay4GainLabel->setText(String(10.0f * log10(pow(ourProcessor->getParameter(ReplicatorAudioProcessor::gain3), 2)), 1), dontSendNotification);
        }
        if(ourProcessor->getParameter(ReplicatorAudioProcessor::gain4) == 0.0f) {
            Delay5GainLabel->setText("-inf", dontSendNotification);
        } else {
            Delay5GainLabel->setText(String(10.0f * log10(pow(ourProcessor->getParameter(ReplicatorAudioProcessor::gain4), 2)), 1), dontSendNotification);
        }

        //LP rotaries.
        Delay1LPSlider->setValue((int) ourProcessor->getParameter(ReplicatorAudioProcessor::lpf0), dontSendNotification);
        Delay2LPSlider->setValue((int) ourProcessor->getParameter(ReplicatorAudioProcessor::lpf1), dontSendNotification);
        Delay3LPSlider->setValue((int) ourProcessor->getParameter(ReplicatorAudioProcessor::lpf2), dontSendNotification);
        Delay4LPSlider->setValue((int) ourProcessor->getParameter(ReplicatorAudioProcessor::lpf3), dontSendNotification);
        Delay5LPSlider->setValue((int) ourProcessor->getParameter(ReplicatorAudioProcessor::lpf4), dontSendNotification);

        //HP rotaries.
        Delay1HPSlider->setValue((int) ourProcessor->getParameter(ReplicatorAudioProcessor::hpf0), dontSendNotification);
        Delay2HPSlider->setValue((int) ourProcessor->getParameter(ReplicatorAudioProcessor::hpf1), dontSendNotification);
        Delay3HPSlider->setValue((int) ourProcessor->getParameter(ReplicatorAudioProcessor::hpf2), dontSendNotification);
        Delay4HPSlider->setValue((int) ourProcessor->getParameter(ReplicatorAudioProcessor::hpf3), dontSendNotification);
        Delay5HPSlider->setValue((int) ourProcessor->getParameter(ReplicatorAudioProcessor::hpf4), dontSendNotification);

        //Delay time rotaries.
        Delay1TimeSlider->setValue((ourProcessor->getParameter(ReplicatorAudioProcessor::time0) / ourProcessor->getCurrentSampleRate()) * 1000, dontSendNotification);
        Delay2TimeSlider->setValue((ourProcessor->getParameter(ReplicatorAudioProcessor::time1) / ourProcessor->getCurrentSampleRate()) * 1000, dontSendNotification);
        Delay3TimeSlider->setValue((ourProcessor->getParameter(ReplicatorAudioProcessor::time2) / ourProcessor->getCurrentSampleRate()) * 1000, dontSendNotification);
        Delay4TimeSlider->setValue((ourProcessor->getParameter(ReplicatorAudioProcessor::time3) / ourProcessor->getCurrentSampleRate()) * 1000, dontSendNotification);
        Delay5TimeSlider->setValue((ourProcessor->getParameter(ReplicatorAudioProcessor::time4) / ourProcessor->getCurrentSampleRate()) * 1000, dontSendNotification);

        //Feedback rotaries.
        Delay1FBSlider->setValue(10.0f * log10(pow(ourProcessor->getParameter(ReplicatorAudioProcessor::fb0), 2)), dontSendNotification);
        Delay2FBSlider->setValue(10.0f * log10(pow(ourProcessor->getParameter(ReplicatorAudioProcessor::fb1), 2)), dontSendNotification);
        Delay3FBSlider->setValue(10.0f * log10(pow(ourProcessor->getParameter(ReplicatorAudioProcessor::fb2), 2)), dontSendNotification);
        Delay4FBSlider->setValue(10.0f * log10(pow(ourProcessor->getParameter(ReplicatorAudioProcessor::fb3), 2)), dontSendNotification);
        Delay5FBSlider->setValue(10.0f * log10(pow(ourProcessor->getParameter(ReplicatorAudioProcessor::fb4), 2)), dontSendNotification);
    }

    ourProcessor = nullptr;
}
//[/MiscUserCode]


//==============================================================================
#if 0
/*  -- Introjucer information section --

    This is where the Introjucer stores the metadata that describe this GUI layout, so
    make changes in here at your peril!

BEGIN_JUCER_METADATA

<JUCER_COMPONENT documentType="Component" className="ReplicatorAudioProcessorEditor"
                 componentName="" parentClasses="public AudioProcessorEditor, public Timer"
                 constructorParams="ReplicatorAudioProcessor&amp; ownerFilter"
                 variableInitialisers="AudioProcessorEditor(ownerFilter)" snapPixels="8"
                 snapActive="1" snapShown="0" overlayOpacity="0.330" fixedSize="0"
                 initialWidth="840" initialHeight="568">
  <BACKGROUND backgroundColour="ff7a0000">
    <RECT pos="0 0 840 568" fill="solid: 90a52a" hasStroke="0"/>
  </BACKGROUND>
  <SLIDER name="new slider" id="b415885b5c7e4384" memberName="DryPanSlider"
          virtualName="" explicitFocusOrder="0" pos="760 304 48 56" bkgcol="0"
          trackcol="61ffffff" rotarysliderfill="7fcecece" min="-100" max="100"
          int="1" style="RotaryHorizontalDrag" textBoxPos="TextBoxBelow"
          textBoxEditable="1" textBoxWidth="40" textBoxHeight="20" skewFactor="1"/>
  <SLIDER name="new slider" id="ba06e87a48ca0988" memberName="Delay1PanSlider"
          virtualName="" explicitFocusOrder="0" pos="120 304 48 56" rotarysliderfill="7fcecece"
          min="-100" max="100" int="1" style="RotaryHorizontalDrag" textBoxPos="TextBoxBelow"
          textBoxEditable="1" textBoxWidth="40" textBoxHeight="20" skewFactor="1"/>
  <SLIDER name="new slider" id="54e898422049e37" memberName="Delay2PanSlider"
          virtualName="" explicitFocusOrder="0" pos="248 304 48 56" rotarysliderfill="7fcecece"
          min="-100" max="100" int="1" style="RotaryHorizontalDrag" textBoxPos="TextBoxBelow"
          textBoxEditable="1" textBoxWidth="40" textBoxHeight="20" skewFactor="1"/>
  <SLIDER name="new slider" id="b2e8075cd61e7c21" memberName="Delay3PanSlider"
          virtualName="" explicitFocusOrder="0" pos="376 304 48 56" rotarysliderfill="7fcecece"
          min="-100" max="100" int="1" style="RotaryHorizontalDrag" textBoxPos="TextBoxBelow"
          textBoxEditable="1" textBoxWidth="40" textBoxHeight="20" skewFactor="1"/>
  <SLIDER name="new slider" id="5ecab3b9495583ca" memberName="Delay4PanSlider"
          virtualName="" explicitFocusOrder="0" pos="504 304 48 56" rotarysliderfill="7fcecece"
          min="-100" max="100" int="1" style="RotaryHorizontalDrag" textBoxPos="TextBoxBelow"
          textBoxEditable="1" textBoxWidth="40" textBoxHeight="20" skewFactor="1"/>
  <SLIDER name="new slider" id="60c8b88876c648ba" memberName="Delay5PanSlider"
          virtualName="" explicitFocusOrder="0" pos="632 304 48 56" rotarysliderfill="7fcecece"
          min="-100" max="100" int="1" style="RotaryHorizontalDrag" textBoxPos="TextBoxBelow"
          textBoxEditable="1" textBoxWidth="40" textBoxHeight="20" skewFactor="1"/>
  <SLIDER name="new slider" id="82e21d113cff0e1f" memberName="DryGainSlider"
          virtualName="" explicitFocusOrder="0" pos="760 368 48 144" rotarysliderfill="7fcecece"
          min="-75" max="12" int="0.10000000000000001" style="LinearVertical"
          textBoxPos="NoTextBox" textBoxEditable="1" textBoxWidth="40"
          textBoxHeight="20" skewFactor="1"/>
  <SLIDER name="new slider" id="96bb28fa5125b3b4" memberName="Delay1GainSlider"
          virtualName="" explicitFocusOrder="0" pos="120 368 48 144" rotarysliderfill="7fcecece"
          min="-75" max="12" int="0.10000000000000001" style="LinearVertical"
          textBoxPos="NoTextBox" textBoxEditable="1" textBoxWidth="40"
          textBoxHeight="20" skewFactor="1"/>
  <SLIDER name="new slider" id="bb5c5a09f927bbc1" memberName="Delay2GainSlider"
          virtualName="" explicitFocusOrder="0" pos="248 368 48 144" rotarysliderfill="7fcecece"
          min="-75" max="12" int="0.10000000000000001" style="LinearVertical"
          textBoxPos="NoTextBox" textBoxEditable="1" textBoxWidth="40"
          textBoxHeight="20" skewFactor="1"/>
  <SLIDER name="new slider" id="976088ca7fd570be" memberName="Delay3GainSlider"
          virtualName="" explicitFocusOrder="0" pos="376 368 48 144" rotarysliderfill="7fcecece"
          min="-75" max="12" int="0.10000000000000001" style="LinearVertical"
          textBoxPos="NoTextBox" textBoxEditable="1" textBoxWidth="40"
          textBoxHeight="20" skewFactor="1"/>
  <SLIDER name="new slider" id="5124401938606f84" memberName="Delay4GainSlider"
          virtualName="" explicitFocusOrder="0" pos="504 368 48 144" rotarysliderfill="7fcecece"
          min="-75" max="12" int="0.10000000000000001" style="LinearVertical"
          textBoxPos="NoTextBox" textBoxEditable="1" textBoxWidth="40"
          textBoxHeight="20" skewFactor="1"/>
  <SLIDER name="new slider" id="ba128cb3a4ff0158" memberName="Delay5GainSlider"
          virtualName="" explicitFocusOrder="0" pos="632 368 48 144" rotarysliderfill="7fcecece"
          min="-75" max="12" int="0.10000000000000001" style="LinearVertical"
          textBoxPos="NoTextBox" textBoxEditable="1" textBoxWidth="40"
          textBoxHeight="20" skewFactor="1"/>
  <SLIDER name="new slider" id="2936b209fadc9227" memberName="Delay1LPSlider"
          virtualName="" explicitFocusOrder="0" pos="96 240 48 56" rotarysliderfill="fff8ca8e"
          min="1000" max="20000" int="1" style="RotaryHorizontalDrag" textBoxPos="TextBoxBelow"
          textBoxEditable="1" textBoxWidth="40" textBoxHeight="20" skewFactor="1"/>
  <SLIDER name="new slider" id="2a73e01e8c580a32" memberName="Delay2LPSlider"
          virtualName="" explicitFocusOrder="0" pos="224 240 48 56" rotarysliderfill="fff8ca8e"
          min="1000" max="20000" int="1" style="RotaryHorizontalDrag" textBoxPos="TextBoxBelow"
          textBoxEditable="1" textBoxWidth="40" textBoxHeight="20" skewFactor="1"/>
  <SLIDER name="new slider" id="eb03be19128f129b" memberName="Delay3LPSlider"
          virtualName="" explicitFocusOrder="0" pos="352 240 48 56" rotarysliderfill="fff8ca8e"
          min="1000" max="20000" int="1" style="RotaryHorizontalDrag" textBoxPos="TextBoxBelow"
          textBoxEditable="1" textBoxWidth="40" textBoxHeight="20" skewFactor="1"/>
  <SLIDER name="new slider" id="7a48050fc31cc3a4" memberName="Delay4LPSlider"
          virtualName="" explicitFocusOrder="0" pos="480 240 48 56" rotarysliderfill="fff8ca8e"
          min="1000" max="20000" int="1" style="RotaryHorizontalDrag" textBoxPos="TextBoxBelow"
          textBoxEditable="1" textBoxWidth="40" textBoxHeight="20" skewFactor="1"/>
  <SLIDER name="new slider" id="828babc3a5e0fbe5" memberName="Delay5LPSlider"
          virtualName="" explicitFocusOrder="0" pos="608 240 48 56" rotarysliderfill="fff8ca8e"
          min="1000" max="20000" int="1" style="RotaryHorizontalDrag" textBoxPos="TextBoxBelow"
          textBoxEditable="1" textBoxWidth="40" textBoxHeight="20" skewFactor="1"/>
  <SLIDER name="new slider" id="ad11dec4e7a72db8" memberName="Delay2HPSlider"
          virtualName="" explicitFocusOrder="0" pos="272 192 48 56" rotarysliderfill="fff8ca8e"
          min="10" max="1000" int="1" style="RotaryHorizontalDrag" textBoxPos="TextBoxBelow"
          textBoxEditable="1" textBoxWidth="40" textBoxHeight="20" skewFactor="1"/>
  <SLIDER name="new slider" id="4664f3e8ef7bec04" memberName="Delay3HPSlider"
          virtualName="" explicitFocusOrder="0" pos="400 192 48 56" rotarysliderfill="fff8ca8e"
          min="10" max="1000" int="1" style="RotaryHorizontalDrag" textBoxPos="TextBoxBelow"
          textBoxEditable="1" textBoxWidth="40" textBoxHeight="20" skewFactor="1"/>
  <SLIDER name="new slider" id="7f63055e44d64fc5" memberName="Delay4HPSlider"
          virtualName="" explicitFocusOrder="0" pos="528 192 48 56" rotarysliderfill="fff8ca8e"
          min="10" max="1000" int="1" style="RotaryHorizontalDrag" textBoxPos="TextBoxBelow"
          textBoxEditable="1" textBoxWidth="40" textBoxHeight="20" skewFactor="1"/>
  <SLIDER name="new slider" id="9558adf45d9d4575" memberName="Delay5HPSlider"
          virtualName="" explicitFocusOrder="0" pos="656 192 48 56" rotarysliderfill="fff8ca8e"
          min="10" max="1000" int="1" style="RotaryHorizontalDrag" textBoxPos="TextBoxBelow"
          textBoxEditable="1" textBoxWidth="40" textBoxHeight="20" skewFactor="1"/>
  <SLIDER name="new slider" id="21028a85963f8a9f" memberName="Delay1HPSlider"
          virtualName="" explicitFocusOrder="0" pos="144 192 48 56" rotarysliderfill="fff8ca8e"
          min="10" max="1000" int="1" style="RotaryHorizontalDrag" textBoxPos="TextBoxBelow"
          textBoxEditable="1" textBoxWidth="40" textBoxHeight="20" skewFactor="1"/>
  <SLIDER name="new slider" id="4ffb6537717699d9" memberName="Delay1TimeSlider"
          virtualName="" explicitFocusOrder="0" pos="136 72 64 72" rotarysliderfill="ff000000"
          textboxbkgd="ffffffff" min="1" max="1500" int="1" style="RotaryHorizontalDrag"
          textBoxPos="TextBoxBelow" textBoxEditable="1" textBoxWidth="40"
          textBoxHeight="20" skewFactor="1"/>
  <SLIDER name="new slider" id="afbe89e761f76e65" memberName="Delay2TimeSlider"
          virtualName="" explicitFocusOrder="0" pos="264 72 64 72" rotarysliderfill="ff000000"
          min="1" max="1500" int="1" style="RotaryHorizontalDrag" textBoxPos="TextBoxBelow"
          textBoxEditable="1" textBoxWidth="40" textBoxHeight="20" skewFactor="1"/>
  <SLIDER name="new slider" id="5825f582e8c4199c" memberName="Delay3TimeSlider"
          virtualName="" explicitFocusOrder="0" pos="392 72 64 72" rotarysliderfill="ff000000"
          min="1" max="1500" int="1" style="RotaryHorizontalDrag" textBoxPos="TextBoxBelow"
          textBoxEditable="1" textBoxWidth="40" textBoxHeight="20" skewFactor="1"/>
  <SLIDER name="new slider" id="47fc754d117121fe" memberName="Delay4TimeSlider"
          virtualName="" explicitFocusOrder="0" pos="520 72 64 72" rotarysliderfill="ff000000"
          min="1" max="1500" int="1" style="RotaryHorizontalDrag" textBoxPos="TextBoxBelow"
          textBoxEditable="1" textBoxWidth="40" textBoxHeight="20" skewFactor="1"/>
  <SLIDER name="new slider" id="13085ea84f89e698" memberName="Delay5TimeSlider"
          virtualName="" explicitFocusOrder="0" pos="648 72 64 72" rotarysliderfill="ff000000"
          min="1" max="1500" int="1" style="RotaryHorizontalDrag" textBoxPos="TextBoxBelow"
          textBoxEditable="1" textBoxWidth="40" textBoxHeight="20" skewFactor="1"/>
  <LABEL name="new label" id="ac65639404fd8622" memberName="label" virtualName=""
         explicitFocusOrder="0" pos="104 0 344 72" textCol="fff8ca8e"
         edTextCol="ff000000" edBkgCol="0" labelText="The Replicator"
         editableSingleClick="0" editableDoubleClick="0" focusDiscardsChanges="0"
         fontname="Vivaldi" fontsize="63.299999999999997" bold="0" italic="0"
         justification="36"/>
  <LABEL name="new label" id="4cd9efbcec3acdbf" memberName="label2" virtualName=""
         explicitFocusOrder="0" pos="760 536 48 24" textCol="fff8ca8e"
         edTextCol="ff000000" edBkgCol="0" labelText="Dry" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Lucida Console"
         fontsize="16" bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="896ea520e31ed804" memberName="label3" virtualName=""
         explicitFocusOrder="0" pos="112 536 64 24" textCol="fff8ca8e"
         edTextCol="ff000000" edBkgCol="0" labelText="Delay 1" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Lucida Console"
         fontsize="16" bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="6619eb3a2f52166b" memberName="label8" virtualName=""
         explicitFocusOrder="0" pos="24 88 48 24" textCol="fff8ca8e" edTextCol="ff000000"
         edBkgCol="0" labelText="Time" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Lucida Console" fontsize="16"
         bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="b758d78bf18f896b" memberName="label9" virtualName=""
         explicitFocusOrder="0" pos="24 200 48 24" textCol="fff8ca8e"
         edTextCol="ff000000" edBkgCol="0" labelText="HPF" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Lucida Console"
         fontsize="16" bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="352db52b2e888b64" memberName="label10" virtualName=""
         explicitFocusOrder="0" pos="24 248 48 24" textCol="fff8ca8e"
         edTextCol="ff000000" edBkgCol="0" labelText="LPF" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Lucida Console"
         fontsize="16" bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="e4bc6678c85e9df3" memberName="label11" virtualName=""
         explicitFocusOrder="0" pos="24 312 48 24" textCol="fff8ca8e"
         edTextCol="ff000000" edBkgCol="0" labelText="Pan" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Lucida Console"
         fontsize="16" bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="212ea9774cb90c6b" memberName="label12" virtualName=""
         explicitFocusOrder="0" pos="192 120 32 24" textCol="fff8ca8e"
         edTextCol="ff000000" edBkgCol="0" labelText="ms" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Lucida Console"
         fontsize="16" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="c596e0e03edfa07e" memberName="label17" virtualName=""
         explicitFocusOrder="0" pos="192 224 32 24" textCol="fff8ca8e"
         edTextCol="ff000000" edBkgCol="0" labelText="Hz" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Lucida Console"
         fontsize="16" bold="0" italic="0" justification="33"/>
  <SLIDER name="new slider" id="d5df87daf1b47032" memberName="Delay1FBSlider"
          virtualName="" explicitFocusOrder="0" pos="88 120 64 72" rotarysliderfill="ff000000"
          textboxbkgd="ffffffff" min="-75" max="0" int="0.10000000000000001"
          style="RotaryHorizontalDrag" textBoxPos="TextBoxBelow" textBoxEditable="1"
          textBoxWidth="40" textBoxHeight="20" skewFactor="1"/>
  <SLIDER name="new slider" id="7166a6f734b93fcf" memberName="Delay2FBSlider"
          virtualName="" explicitFocusOrder="0" pos="216 120 64 72" rotarysliderfill="ff000000"
          textboxbkgd="ffffffff" min="-75" max="0" int="0.10000000000000001"
          style="RotaryHorizontalDrag" textBoxPos="TextBoxBelow" textBoxEditable="1"
          textBoxWidth="40" textBoxHeight="20" skewFactor="1"/>
  <SLIDER name="new slider" id="44c54e69252532c" memberName="Delay3FBSlider"
          virtualName="" explicitFocusOrder="0" pos="344 120 64 72" rotarysliderfill="ff000000"
          textboxbkgd="ffffffff" min="-75" max="0" int="0.10000000000000001"
          style="RotaryHorizontalDrag" textBoxPos="TextBoxBelow" textBoxEditable="1"
          textBoxWidth="40" textBoxHeight="20" skewFactor="1"/>
  <SLIDER name="new slider" id="669c3456ba614cac" memberName="Delay4FBSlider"
          virtualName="" explicitFocusOrder="0" pos="472 120 64 72" rotarysliderfill="ff000000"
          textboxbkgd="ffffffff" min="-75" max="0" int="0.10000000000000001"
          style="RotaryHorizontalDrag" textBoxPos="TextBoxBelow" textBoxEditable="1"
          textBoxWidth="40" textBoxHeight="20" skewFactor="1"/>
  <SLIDER name="new slider" id="338e07bb025cb9b5" memberName="Delay5FBSlider"
          virtualName="" explicitFocusOrder="0" pos="600 120 64 72" rotarysliderfill="ff000000"
          textboxbkgd="ffffffff" min="-75" max="0" int="0.10000000000000001"
          style="RotaryHorizontalDrag" textBoxPos="TextBoxBelow" textBoxEditable="1"
          textBoxWidth="40" textBoxHeight="20" skewFactor="1"/>
  <LABEL name="new label" id="2d4b3a04e944f0bc" memberName="label27" virtualName=""
         explicitFocusOrder="0" pos="144 168 32 24" textCol="fff8ca8e"
         edTextCol="ff000000" edBkgCol="0" labelText="dB" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Lucida Console"
         fontsize="16" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="1a7d49fcbfad53c1" memberName="label32" virtualName=""
         explicitFocusOrder="0" pos="8 136 80 24" textCol="fff8ca8e" edTextCol="ff000000"
         edBkgCol="0" labelText="Feedback" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Lucida Console" fontsize="16"
         bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="6391837b7135e2df" memberName="label33" virtualName=""
         explicitFocusOrder="0" pos="24 384 48 24" textCol="fff8ca8e"
         edTextCol="ff000000" edBkgCol="0" labelText="Gain" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Lucida Console"
         fontsize="16" bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="cfc3f517183b4b75" memberName="label13" virtualName=""
         explicitFocusOrder="0" pos="320 120 32 24" textCol="fff8ca8e"
         edTextCol="ff000000" edBkgCol="0" labelText="ms" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Lucida Console"
         fontsize="16" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="37a7bd93845d36a" memberName="label14" virtualName=""
         explicitFocusOrder="0" pos="448 120 32 24" textCol="fff8ca8e"
         edTextCol="ff000000" edBkgCol="0" labelText="ms" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Lucida Console"
         fontsize="16" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="8865ba024eb53172" memberName="label15" virtualName=""
         explicitFocusOrder="0" pos="576 120 32 24" textCol="fff8ca8e"
         edTextCol="ff000000" edBkgCol="0" labelText="ms" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Lucida Console"
         fontsize="16" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="f383c3d254653866" memberName="label16" virtualName=""
         explicitFocusOrder="0" pos="704 120 32 24" textCol="fff8ca8e"
         edTextCol="ff000000" edBkgCol="0" labelText="ms" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Lucida Console"
         fontsize="16" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="5c1463050f44a289" memberName="label28" virtualName=""
         explicitFocusOrder="0" pos="272 168 32 24" textCol="fff8ca8e"
         edTextCol="ff000000" edBkgCol="0" labelText="dB" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Lucida Console"
         fontsize="16" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="95288a576be1d8b5" memberName="label29" virtualName=""
         explicitFocusOrder="0" pos="400 168 32 24" textCol="fff8ca8e"
         edTextCol="ff000000" edBkgCol="0" labelText="dB" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Lucida Console"
         fontsize="16" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="72b6fd4a16a078d6" memberName="label30" virtualName=""
         explicitFocusOrder="0" pos="528 168 32 24" textCol="fff8ca8e"
         edTextCol="ff000000" edBkgCol="0" labelText="dB" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Lucida Console"
         fontsize="16" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="fbed30258d1c4f9c" memberName="label31" virtualName=""
         explicitFocusOrder="0" pos="656 168 32 24" textCol="fff8ca8e"
         edTextCol="ff000000" edBkgCol="0" labelText="dB" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Lucida Console"
         fontsize="16" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="225fa4409755b96c" memberName="label18" virtualName=""
         explicitFocusOrder="0" pos="320 224 32 24" textCol="fff8ca8e"
         edTextCol="ff000000" edBkgCol="0" labelText="Hz" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Lucida Console"
         fontsize="16" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="562d447fe18e9e97" memberName="label19" virtualName=""
         explicitFocusOrder="0" pos="448 224 32 24" textCol="fff8ca8e"
         edTextCol="ff000000" edBkgCol="0" labelText="Hz" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Lucida Console"
         fontsize="16" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="be5d861bba7e7ecd" memberName="label20" virtualName=""
         explicitFocusOrder="0" pos="576 224 32 24" textCol="fff8ca8e"
         edTextCol="ff000000" edBkgCol="0" labelText="Hz" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Lucida Console"
         fontsize="16" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="a2f951a8e8f73fd3" memberName="label21" virtualName=""
         explicitFocusOrder="0" pos="704 224 32 24" textCol="fff8ca8e"
         edTextCol="ff000000" edBkgCol="0" labelText="Hz" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Lucida Console"
         fontsize="16" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="9fdaf852377bb374" memberName="label22" virtualName=""
         explicitFocusOrder="0" pos="144 272 32 24" textCol="fff8ca8e"
         edTextCol="ff000000" edBkgCol="0" labelText="Hz" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Lucida Console"
         fontsize="16" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="f431b96a06e408b4" memberName="label23" virtualName=""
         explicitFocusOrder="0" pos="272 272 32 24" textCol="fff8ca8e"
         edTextCol="ff000000" edBkgCol="0" labelText="Hz" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Lucida Console"
         fontsize="16" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="e7799c21b23b9c4b" memberName="label24" virtualName=""
         explicitFocusOrder="0" pos="400 272 32 24" textCol="fff8ca8e"
         edTextCol="ff000000" edBkgCol="0" labelText="Hz" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Lucida Console"
         fontsize="16" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="170a19240c6dc51" memberName="label25" virtualName=""
         explicitFocusOrder="0" pos="528 272 32 24" textCol="fff8ca8e"
         edTextCol="ff000000" edBkgCol="0" labelText="Hz" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Lucida Console"
         fontsize="16" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="339e930536d73335" memberName="label26" virtualName=""
         explicitFocusOrder="0" pos="656 272 32 24" textCol="fff8ca8e"
         edTextCol="ff000000" edBkgCol="0" labelText="Hz" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Lucida Console"
         fontsize="16" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="e059090325d055ad" memberName="label4" virtualName=""
         explicitFocusOrder="0" pos="240 536 64 24" textCol="fff8ca8e"
         edTextCol="ff000000" edBkgCol="0" labelText="Delay 2" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Lucida Console"
         fontsize="16" bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="2b824708e5a5fff1" memberName="label5" virtualName=""
         explicitFocusOrder="0" pos="368 536 64 24" textCol="fff8ca8e"
         edTextCol="ff000000" edBkgCol="0" labelText="Delay 3" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Lucida Console"
         fontsize="16" bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="3a579054d0aa39a8" memberName="label6" virtualName=""
         explicitFocusOrder="0" pos="496 536 64 24" textCol="fff8ca8e"
         edTextCol="ff000000" edBkgCol="0" labelText="Delay 4" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Lucida Console"
         fontsize="16" bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="33e38a4aa2cb5d34" memberName="label7" virtualName=""
         explicitFocusOrder="0" pos="624 536 64 24" textCol="fff8ca8e"
         edTextCol="ff000000" edBkgCol="0" labelText="Delay 5" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Lucida Console"
         fontsize="16" bold="0" italic="0" justification="36"/>
  <TOGGLEBUTTON name="new toggle button" id="9f6b30397af06f6d" memberName="bypassButton"
                virtualName="" explicitFocusOrder="0" pos="744 272 23 24" buttonText=""
                connectedEdges="0" needsCallback="1" radioGroupId="0" state="0"/>
  <LABEL name="new label" id="89ab9e5d0f43fe81" memberName="label34" virtualName=""
         explicitFocusOrder="0" pos="760 272 68 24" textCol="fff8ca8e"
         edTextCol="ff000000" edBkgCol="0" labelText="Bypass" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Lucida Console"
         fontsize="16" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="53afebda54115af5" memberName="Delay1GainLabel"
         virtualName="" explicitFocusOrder="0" pos="120 512 48 24" bkgCol="ffffffff"
         outlineCol="49000000" edTextCol="ff000000" edBkgCol="0" labelText="0.0"
         editableSingleClick="0" editableDoubleClick="0" focusDiscardsChanges="0"
         fontname="Default font" fontsize="15" bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="6fc69771bf8aa7fd" memberName="Delay2GainLabel"
         virtualName="" explicitFocusOrder="0" pos="248 512 48 24" bkgCol="ffffffff"
         outlineCol="49000000" edTextCol="ff000000" edBkgCol="0" labelText="0.0"
         editableSingleClick="0" editableDoubleClick="0" focusDiscardsChanges="0"
         fontname="Default font" fontsize="15" bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="8be0bb93d9489d33" memberName="Delay3GainLabel"
         virtualName="" explicitFocusOrder="0" pos="376 512 48 24" bkgCol="ffffffff"
         outlineCol="49000000" edTextCol="ff000000" edBkgCol="0" labelText="0.0"
         editableSingleClick="0" editableDoubleClick="0" focusDiscardsChanges="0"
         fontname="Default font" fontsize="15" bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="bdcd75083f3da5e2" memberName="Delay4GainLabel"
         virtualName="" explicitFocusOrder="0" pos="504 512 48 24" bkgCol="ffffffff"
         outlineCol="49000000" edTextCol="ff000000" edBkgCol="0" labelText="0.0"
         editableSingleClick="0" editableDoubleClick="0" focusDiscardsChanges="0"
         fontname="Default font" fontsize="15" bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="6aff88086cbe8314" memberName="Delay5GainLabel"
         virtualName="" explicitFocusOrder="0" pos="632 512 48 24" bkgCol="ffffffff"
         outlineCol="49000000" edTextCol="ff000000" edBkgCol="0" labelText="0.0"
         editableSingleClick="0" editableDoubleClick="0" focusDiscardsChanges="0"
         fontname="Default font" fontsize="15" bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="9ef0afd68fea411e" memberName="DryGainLabel"
         virtualName="" explicitFocusOrder="0" pos="760 512 48 24" bkgCol="ffffffff"
         outlineCol="49000000" edTextCol="ff000000" edBkgCol="0" labelText="0.0"
         editableSingleClick="0" editableDoubleClick="0" focusDiscardsChanges="0"
         fontname="Default font" fontsize="15" bold="0" italic="0" justification="36"/>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif


//[EndFile] You can add extra defines here...
//[/EndFile]
