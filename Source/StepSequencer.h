/*
  ==============================================================================

    StepSequencer.h
    Created: 17 Dec 2020 6:17:37pm
    Author:  Hayden Setlik

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>

//==============================================================================
/*
*/
class NoteBox : public juce::Button
{
public:
    NoteBox();
    ~NoteBox() {}
private:
    
};
class Track : public juce::Component
{
public:
    Track(int index);
    ~Track() {}
private:
};

class Grid : public juce::Component
{
public:
    Grid(int numTracks);
    ~Grid() {}
private:
    
};

class StepSequencer  : public juce::Component
{
public:
    StepSequencer();
    ~StepSequencer() override;

    void paint (juce::Graphics&) override;
    void resized() override;

private:
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (StepSequencer)
};
