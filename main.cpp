// myOsc1 is the carrier that provides the initial pitch and myOsc2 is the modulator. The frequency will increase between 100Hz and 500Hz within 1 minute.
// And myphaser is modulating the amplitude of myOsc3.

#include "maximilian.h"
maxiOsc myOsc1,myOsc2,myOsc3,myPhasor;//set 4 oscillators


void setup() {

}

void play(double *output) {
    output[0]=myOsc1.sinewave(100+myOsc2.sinewave(1/60.0)*400)+myOsc3.sinewave(20+myPhasor.phasor(0.5, 0, 200));
    output[1]=output[0];
}
