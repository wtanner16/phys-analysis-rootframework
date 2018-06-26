//
// Created by hawking on 16/06/18.
//

#ifndef STUFF1_ROOT_H
#define STUFF1_ROOT_H

#include <string>
using std::string;


#include "TAxis.h"
#include "TGraph.h"
#include "TGraph2D.h"
#include "TMultiGraph.h"
#include "TCanvas.h"
#include "TApplication.h"
#include "TStyle.h"
#include "TPad.h"
#include "TROOT.h"
#include "TColor.h"
#include "TGFrame.h"
#include "TVirtualPad.h"
#include "TVectorT.h"
#include "TVectorF.h"
#include "TVectorD.h"
#include <TGraphErrors.h>
#include <TLegend.h>

// gsl functions
#include <gsl/gsl_integration.h>
#include <gsl/gsl_errno.h>
#include <gsl/gsl_matrix.h>
#include <gsl/gsl_odeiv2.h>

#include <vector>
using std::vector;

class Root {
public:
    // for vectors declared as floats

  //  Root(TVectorF& vxFloat, TVectorF& vyFloat)
  //  : vxfloat_{vxFloat}, vyfloat_{vyFloat} {}

    // for vectors declared as doubles
   // Root(TVectorD& vxDouble, TVectorD& vyDouble);

  // Root(TVectorD &, TVectorD &);

    // constructor for single plot
 //   Root(const vector<float>&, const vector<float>&);

    // main constructor

    Root() = default; // default constructor
    Root(const vector<float>&, const vector<float>&);


    // constructor for TGraph


    // constructor for TMultigraph
    Root(const vector<float>&, const vector<float>&, const vector<float>&, const vector<float>&);

// test constructor
    Root(const string&);

    // methods
    void plotGraph(const char*, const char*);
    void plotMultiGraph(const char*, const char*);
    void plotDemo();

    void addLegend();


    void plotGraph2D();
    void setXaxisTitle(const char*);
    void setYaxisTitle(const char*);


private:
    const vector<float>& xfloat_{};
    const vector<float>& yfloat_{};
    const vector<float>& x1m_{};
    const vector<float>& x2m_{};
    const vector<float>& y1m_{};
    const vector<float>& y2m_{};
    const string& str_{};

    const char* xtitle_;
    const char* ytitle_;

   // TVectorF vxfloat_, vyfloat_;
   // TVectorD vxdouble_, vydouble_;
//   TVectorF& vxfloat_; TVectorF& vyfloat_;
//   TVectorD& vxdouble_; TVectorD& vydouble_;



};


#endif //STUFF1_ROOT_H
