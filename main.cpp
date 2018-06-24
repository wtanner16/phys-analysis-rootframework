#include <iostream>
using std::cout; using std::cin; using std::endl;

#include <vector>
using std::vector;

#include <cmath>

#include "astro.h"
#include "root.h"


int main(int argc, char **argv) {

    TApplication theApp("tapp", &argc, argv);

    // define a couple of vectors and populate them
    vector<float> x; vector<float> y;

    // name and title of plot
    const char* name = "c1";
    const char* title = "Plot of cos(x)";

    for (int i = 0; i < 1000; ++i) {

        float arg = cos(M_PI / 180. * i);
        x.push_back(i);
        y.push_back(arg);
    }


    Root Test(x, y);
    Test.plotGraph(name, title);

    theApp.Run();

    return 0;
}