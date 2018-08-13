// Helper functions for music

#include <cs50.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "helpers.h"

// Converts a fraction formatted as X/Y to eighths
int duration(string fraction)
{
    int numerator = fraction[0] - '0';
    int denominator = fraction[2] - '0';

    if (denominator == 8)
        return numerator;
    else if (denominator == 4)
        return 2 * numerator;
    else if (denominator == 2)
        return 4 * numerator;
    else
        return 8 * numerator;
}

// Calculates frequency (in Hz) of a note
int frequency(string note)
{
    //set freq to frequency of octave 4 note
    double freq;
    switch(note[0])
    {
        case 'C':
            freq = 440 * pow(2.0, -9.0/12.0); //use double to ensure pow returns double, not int
            break;
        case 'D':
            freq = 440 * pow(2.0, -7.0/12.0);
            break;
        case 'E':
            freq = 440 * pow(2.0, -5.0/12.0);
            break;
        case 'F':
            freq = 440 * pow(2.0, -4.0/12.0);
            break;
        case 'G':
            freq = 440 * pow(2.0, -2.0/12.0);
            break;
        case 'A':
            freq = 440;
            break;
        case 'B':
            freq = 440 * pow(2.0, 2.0/12.0);
            break;
    }

    //declare octave multiplication factor
    double octdiff;
    if ( (note[1] == '#') || (note[1] == 'b') )
        octdiff = note[2] - '0' - 4;
    else
        octdiff = note[1] - '0' - 4;
    double octfac = pow(2, octdiff);

    //declare accidental multiplication factor
    double accfac;
    if (note[1] == '#')
        accfac = pow(2, 1.0/12.0); //use double to ensure pow returns double, not int
    else if (note[1] == 'b')
        accfac = pow(2, -1.0/12.0);
    else
        accfac = 1;

    //apply multiplication factors
    freq = freq * octfac * accfac;
    return round(freq);
}

// Determines whether a string represents a rest
bool is_rest(string s)
{
    if (strncmp(s, "", 1) == 0)
        return true;
    else
        return false;
}
