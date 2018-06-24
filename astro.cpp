//
// Created by hawking on 16/06/18.
//

#include "astro.h"

// #include "TRandom1.h"

void Astro::RootTester() {
    randtest_ = new TRandom1();
    for (int i=0; i<10; ++i) {
        cout << randtest_->Gaus(5, 1) << endl;
    }
}