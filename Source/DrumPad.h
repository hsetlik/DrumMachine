/*
  ==============================================================================

    DrumPad.h
    Created: 17 Dec 2020 6:18:21pm
    Author:  Hayden Setlik

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>

//==============================================================================
/*
*/
class DrumPad  : public juce::Component
{
public:
    DrumPad();
    ~DrumPad() override;

    void paint (juce::Graphics&) override;
    void resized() override;

private:
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (DrumPad)
};
