//
// Created by hawking on 16/06/18.
//

#ifndef STUFF1_ASTRO_H
#define STUFF1_ASTRO_H

#include <string>
using std::string;

#include <iostream>
using std::cin; using std::cout; using std::endl; using std::ostream;
using std::ofstream;

#include <iomanip>
using std::setfill; using std::setw;

#include "TRandom1.h"



class Astro {

private:
    double dt_;
    TRandom1* randtest_;


public:
    Astro() = default;
    Astro(double timeStep, TRandom1* randTest) : dt_{timeStep}, randtest_{randTest} {}

    void RootTester();
};


#endif //STUFF1_ASTRO_H
