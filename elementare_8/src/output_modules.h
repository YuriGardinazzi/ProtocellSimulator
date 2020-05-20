#ifndef OUTPUT_MODULES_H_
#define OUTPUT_MODULES_H_


#include <TAxis.h>
#include <TCanvas.h>
#include <TFrame.h>
#include <TGraph.h>
#include <TMultiGraph.h>
#include <TPad.h>
#include <TLegend.h>
#include <TLegendEntry.h>


namespace bdm{

    inline void AddToPlot(TMultiGraph* mg, const ls::Matrix<double>* result) {
        ls::Matrix<double> foo1(*result);
        ls::Matrix<double> foo(*foo1.getTranspose());
        int rows;
        int cols;
        auto** twod = foo.get2DMatrix(rows, cols);

        TGraph* gr = new TGraph(cols, twod[0], twod[1]); /*A_0*/
        
        gr->SetLineColorAlpha(2, 0.1);
        gr->SetLineWidth(1);
        

        TGraph* gr1 = new TGraph(cols, twod[0], twod[2]); /*B_0*/
        
        gr1->SetLineColorAlpha(3, 0.1);
        gr1->SetLineWidth(1);

        TGraph* gr2 = new TGraph(cols, twod[0], twod[3]); /*C*/
        
        gr2->SetLineColorAlpha(4, 0.1);
        gr2->SetLineWidth(1);

        TGraph* gr3 = new TGraph(cols, twod[0], twod[4]); /*L*/
        
        gr3->SetLineColorAlpha(8, 0.1);
        gr3->SetLineWidth(1);


        // TGraph* gr4 = new TGraph(cols, twod[0], twod[5]); /*p*/
        
        // gr4->SetLineColorAlpha(8, 0.1);
        // gr4->SetLineWidth(1);

        
        // TGraph* gr5 = new TGraph(cols, twod[0], twod[6]); /*Aext*/
        
        // gr5->SetLineColorAlpha(8, 0.1);
        // gr5->SetLineWidth(1);

        // TGraph* gr6 = new TGraph(cols, twod[0], twod[7]); /*Bext*/
        
        // gr6->SetLineColorAlpha(9, 0.1);
        // gr6->SetLineWidth(1);

        // TGraph* gr7 = new TGraph(cols, twod[0], twod[8]); /*Compl*/
        
        // gr7->SetLineColorAlpha(10, 0.1);
        // gr7->SetLineWidth(1);

        // TGraph* gr8 = new TGraph(cols, twod[0], twod[9]); /*A_uscita*/
        // gr8->SetLineColorAlpha(2, 0.1);
        // gr8->SetLineWidth(1);  

        // TGraph* gr9 = new TGraph(cols, twod[0], twod[10]); /*A_ingresso*/
        // gr9->SetLineColorAlpha(3, 0.1);
        // gr9->SetLineWidth(1);  

        // TGraph* gr10 = new TGraph(cols, twod[0], twod[11]); /*B_ingresso*/
        // gr10->SetLineColorAlpha(7, 0.1);
        // gr10->SetLineWidth(1);  

        // TGraph* gr11 = new TGraph(cols, twod[0], twod[12]); /*B_uscita*/
        // gr11->SetLineColorAlpha(9, 0.1);
        // gr11->SetLineWidth(1);  

        mg->Add(gr); //A
        mg->Add(gr1); //B
        mg->Add(gr2); //C
        mg->Add(gr3); //L

        //mg->Add(gr4);   //p
        //mg->Add(gr5);   //AExt
        //mg->Add(gr6);   //BExt
        //mg -> Add(gr7); //compl  goes to 10^3

        // mg -> Add(gr8); //A_uscita
        // mg -> Add(gr9); //A_ingresso
        // mg -> Add(gr10); //B_ingresso
        // mg -> Add(gr11); //B_uscita

        mg->Draw("AL C C");

        auto* legend = new TLegend(0.8,0.7,0.90,0.9);


        
        TLegendEntry *le = legend->AddEntry(gr,"A","l");
        le->SetTextColor(2);
        TLegendEntry *le1 = legend->AddEntry(gr1,"B","l");
        le1->SetTextColor(3);
        TLegendEntry *le2 = legend->AddEntry(gr2,"C","l");
        le2->SetTextColor(4);
        TLegendEntry *le3 = legend->AddEntry(gr3,"L","l");
        le3->SetTextColor(8);
        // TLegendEntry *le7 = legend->AddEntry(gr7,"Compl","l");
        // le7->SetTextColor(1);

        //graph A-ingresso  A-uscita B-ingresso B-uscita
        // TLegendEntry *le8 = legend->AddEntry(gr8,"Aout","l");
        // le8->SetTextColor(2);
        // TLegendEntry *le9 = legend->AddEntry(gr9,"Ain","l");
        // le9->SetTextColor(3);
        // TLegendEntry *le10 = legend->AddEntry(gr10,"Bin","l");
        // le10->SetTextColor(7);
        // TLegendEntry *le11 = legend->AddEntry(gr11,"Bout","l");
        // le11->SetTextColor(9);



        legend -> Draw();
    }

    inline void PlotSbmlModules(const char* filename) {
        // setup plot
        TCanvas c;
        c.SetGrid();

        TMultiGraph* mg = new TMultiGraph();
        mg->SetTitle("Elementare 7;Timestep;Number");

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



} //end namespace bdm



#endif