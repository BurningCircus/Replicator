# Replicator

A 32-bit, stereo VST plugin implemented using the JUCE interface.

The Replicator is a set of five independently controlled delay lines. A mixer-styled UI controls delay time, feedback, high- and low-pass filtering, and gain for each of the five delay lines and allows the dry signal to be blended with the output. This creates infinite potential as a delay utility, since it can be used to create everything from a simple slapback delay to a reverb-esque wash of sound.

Delay.h, Delay.cpp: The DSP source code.

PluginProcessor.h, PluginProcessor.cpp: The JUCE wrapper for the DSP source.

PluginEditor.h, PluginEditor.cpp: The JUCE wrapper for GUI elements.
