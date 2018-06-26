//
// Created by hawking on 16/06/18.
//

#include "root.h"

Root::Root(const vector<float>& xFloat, const vector<float>& yFloat)
   : xfloat_{xFloat}, yfloat_{yFloat} {}

Root::Root(const vector<float>& X1, const vector<float>& X2,const vector<float>& Y1, const vector<float>& Y2)
:         x1m_{X1}, x2m_{X2}, y1m_{Y1}, y2m_{Y2} {}

Root::Root(const string & Str) : str_{Str} {}
// constructor for TMultigraph
//Root::Root(const vector<float>& x1M, const vector<float>& x2M,
//     const vector<float>& y1M, const vector<float>& y2M)
//: x1m_{x1M}, x2m_{x2M}, y1m_{y1M}, y2m_{y2M} {}


// Root::Root(TVectorD & vxDouble, TVectorD & vyDouble)
// : vxdouble_{vxDouble}, vydouble_{vyDouble} {}

//Root::Root(TVectorF & vxFloat, TVectorF & vyFloat)
//: vxfloat_{vxFloat}, vyfloat_{vyFloat} {}

void Root::setXaxisTitle(const char *xTitle) {
   xtitle_ = xTitle;
}

void Root::setYaxisTitle(const char *yTitle) {
   ytitle_ = yTitle;
}



void Root::plotGraph(const char *plotName, const char *plotTitle) {


   Int_t n = xfloat_.size();
   TCanvas *c1 = new TCanvas(plotName, plotTitle, 200, 10, 700, 500);
   c1->SetFillColor(42);
   c1->SetGrid();

   TGraph *gr = new TGraph(n, &xfloat_[0], &yfloat_[0]);
   gr->SetLineColor(1);
   gr->SetLineWidth(2);
   gr->SetMarkerColor(4);
   gr->SetMarkerStyle(21);
   gr->SetTitle(plotTitle);
   gr->GetXaxis()->SetTitle(xtitle_);
   gr->GetYaxis()->SetTitle(ytitle_);
   gr->Draw("AC");
   c1->Update();
   c1->Modified();


    // create new graph object

 //   TGraph *gr = new TGraph (n, &vxfloat_[0], &vyfloat_[0]);

    /* options from TGraph::PaintGraph
     *
     * “L” A simple poly-line between every points is drawn

        “F” A fill area is drawn

        “F1” Idem as “F” but fill area is no more repartee around X=0 or Y=0

        “F2” draw a fill area poly line connecting the center of bins

        “A” Axis are drawn around the graph

        “C” A smooth curve is drawn

        “*” A star is plotted at each point

        “P” The current marker of the graph is plotted at each point

        “B” A bar chart is drawn at each point

        “[]” Only the end vertical/horizontal lines of the error bars are drawn. This option only applies to the TGraphAsymmErrors.

        “1” ylow = rwymin
    */
    // TCanvas *c = new TCanvas("c", "myGraphTitle", 200, 10, 600, 400);
    //gr->Draw("AC");
    // c->Update();


}