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
    vector<float> x, x1; vector<float> y, y1;

    // name and title of plot
    const char* name = "c1";
    const char* title = "Plot of cos(x)";

    for (float i = 0.0; i < 400.0; i++) {

        float arg = cos(M_PI*i / 180.);
        float arg2 = sin(M_PI*i / 180.);
        x.push_back(i); x1.push_back(i);
        y.push_back(arg); y1.push_back(arg2);
    }


    Root Test(x, y, x1, y1);
    Test.setXaxisTitle("x-axis");
    Test.setYaxisTitle("cos(x)");
    //Test.plotGraph(name, title);
    Test.plotMultiGraph("plot 2" ,"Plot of sine and cosine" );
    theApp.Run();

    return 0;
}