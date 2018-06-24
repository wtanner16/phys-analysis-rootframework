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


#include <vector>
using std::vector;

class Root {
public:
    // for vectors declared as floats

  //  Root(TVectorF& vxFloat, TVectorF& vyFloat)
  //  : vxfloat_{vxFloat}, vyfloat_{vyFloat} {}

    // for vectors declared as doubles
   // Root(TVectorD& vxDouble, TVectorD& vyDouble);

   Root(TVectorD &, TVectorD &);
    Root(const vector<float>&, const vector<float>&);

    Root() = default; // default constructor

            // methods
    void plotGraph(const char*, const char*);
    void plotGraph2D();

private:
    const vector<float>& xfloat_;
    const vector<float>& yfloat_;

   // TVectorF vxfloat_, vyfloat_;
   // TVectorD vxdouble_, vydouble_;
//   TVectorF& vxfloat_; TVectorF& vyfloat_;
//   TVectorD& vxdouble_; TVectorD& vydouble_;



};


#endif //STUFF1_ROOT_H
