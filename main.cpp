// The first 2 oscillators are creating a vibrato effect: myOsc1 is the carrier that provides the initial pitch and myOsc2 is the modulator. The frequency will increase from 200Hz to 1500Hz.
// And by using the phaser, the amplitude of myOsc4 is modulating the amplitude of myOsc3.

#include "maximilian.h"
maxiOsc myOsc1,myOsc2,myOsc3,myOsc4,myPhasor;//Four oscillators and myPhasor


void setup() {
}

void play(double *output) {
    output[0]=myOsc1.sinewave(200+(myOsc2.sinewave(1/60.0)*1500))+myOsc3.sinewave(440*myOsc4.sinewave(myPhasor.phasor(1/60.0, 0, 400)));
    output[1]=output[0];
}
