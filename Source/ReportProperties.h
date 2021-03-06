/*
  ==============================================================================

    ReportProperties.h
    Created: 2 Jul 2016 4:48:59pm
    Author:  Johannes Neumann

  ==============================================================================
*/

#ifndef REPORTPROPERTIES_H_INCLUDED
#define REPORTPROPERTIES_H_INCLUDED

class ReportProperties
{
public:
    static const int lowestPitch = 24;
    static const int highestPitch = 96;
    static const int pitchIncrement = 1;
    static const int numPeriods = 400;
    
    // details for the pitch adjustment
    // before a report is made, the oscillator pitch is tuned so that it matches the common tuning
    // (midi note 69 (== A) should match 440Hz)
    static const int adjustmentPitch = 69;
    static const double desiredAdjustmentFrequency;
    static const double allowedDeviation;
    static const int requiredHoldTimeInMs = 4000;
    
    // after the measurement is completed, the reference pitch is measured again
    // if it's too far off the initially measured frequency (== there was a drift
    // during the measurement) then the user is asked to repeat the measurement.
    static const double desiredDriftMargin;
};



#endif  // REPORTPROPERTIES_H_INCLUDED
