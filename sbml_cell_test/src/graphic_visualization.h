#ifndef GRAPHIC_VISUALIZATION_H_
#define GRAPHIC_VISUALIZATION_H_

#include "biodynamo.h"
#include "cell.h"

#include <TAxis.h>
#include <TCanvas.h>
#include <TFrame.h>
#include <TGraph.h>
#include <TMultiGraph.h>
#include <TPad.h>

#include "rrException.h"
#include "rrExecutableModel.h"
#include "rrLogger.h"
#include "rrLogger.h"
#include "rrRoadRunner.h"
#include "rrUtils.h"

namespace bdm{
    inline void AddToPlot(TMultiGraph* mg, const ls::Matrix<double>* result) {
  ls::Matrix<double> foo1(*result);
  ls::Matrix<double> foo(*foo1.getTranspose());
  int rows;
  int cols;
  auto** twod = foo.get2DMatrix(rows, cols);

  TGraph* gr = new TGraph(cols, twod[0], twod[1]);
  gr->SetFillStyle(0);
  gr->SetLineColorAlpha(2, 0.1);
  gr->SetLineWidth(1);
  gr->SetTitle("S1");

  TGraph* gr1 = new TGraph(cols, twod[0], twod[2]);
  gr1->SetTitle("S2");
  gr1->SetLineColorAlpha(3, 0.1);
  gr1->SetLineWidth(1);

  TGraph* gr2 = new TGraph(cols, twod[0], twod[3]);
  gr2->SetTitle("S3");
  gr2->SetLineColorAlpha(4, 0.1);
  gr2->SetLineWidth(1);

  mg->Add(gr);
  mg->Add(gr1);
  mg->Add(gr2);
  mg->Draw("AL C C");
}

inline void PlotSbmlModules(const char* filename) {
  // setup plot
  TCanvas c;
  c.SetGrid();

  TMultiGraph* mg = new TMultiGraph();
  mg->SetTitle("Gillespie;Timestep;Quantity");

  Simulation::GetActive()->GetResourceManager()->ApplyOnAllElements(
      [&](SimObject* so) {
        auto* cell = static_cast<MyCell*>(so);
        const auto& bms = cell->GetAllBiologyModules();
        if (bms.size() == 1) {
          AddToPlot(mg, &static_cast<SbmlModule*>(bms[0])->GetResult());
        }
      });

  // finalize plot
  // TCanvas::Update() draws the frame, after which one can change it
  c.Update();
  c.GetFrame()->SetBorderSize(12);
  gPad->Modified();
  gPad->Update();
  c.Modified();
  c.cd(0);
  // c.BuildLegend(); // TODO position of legend
  c.SaveAs(filename);
}

}
#endif
