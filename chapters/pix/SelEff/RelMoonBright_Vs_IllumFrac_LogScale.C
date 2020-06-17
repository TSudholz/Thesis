{
//=========Macro generated from canvas: c1/Canvas 1
//=========  (Sun Jun 14 19:43:40 2020) by ROOT version5.34/38
   TCanvas *c1 = new TCanvas("c1", "Canvas 1",351,44,1200,1000);
   c1->Range(-15.65693,-2.282776,109.3898,0.218509);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetLogy();
   c1->SetLeftMargin(0.1252087);
   c1->SetRightMargin(0.07429048);
   c1->SetTopMargin(0.08735868);
   c1->SetBottomMargin(0.1130524);
   c1->SetFrameBorderMode(0);
   c1->SetFrameBorderMode(0);
   
   TGraph *graph = new TGraph(13);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillColor(1);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(1.5);
   graph->SetPoint(0,0,0);
   graph->SetPoint(1,10.80508475,0.01684210526);
   graph->SetPoint(2,22.24576271,0.02736842105);
   graph->SetPoint(3,30.72033898,0.02947368421);
   graph->SetPoint(4,38.98305085,0.03789473684);
   graph->SetPoint(5,48.30508475,0.06947368421);
   graph->SetPoint(6,57.62711864,0.1284210526);
   graph->SetPoint(7,66.10169492,0.1621052632);
   graph->SetPoint(8,81.56779661,0.2778947368);
   graph->SetPoint(9,93.22033898,0.4526315789);
   graph->SetPoint(10,97.03389831,0.6042105263);
   graph->SetPoint(11,99.15254237,0.8021052632);
   graph->SetPoint(12,100,0.9978947368);
   
   TH1F *Graph_Graph1 = new TH1F("Graph_Graph1","",100,0,110);
   Graph_Graph1->SetMinimum(0.01);
   Graph_Graph1->SetMaximum(1);
   Graph_Graph1->SetDirectory(0);
   Graph_Graph1->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1->SetLineColor(ci);
   Graph_Graph1->GetXaxis()->SetTitle("Illuminated Fraction (%)");
   Graph_Graph1->GetXaxis()->SetRange(1,91);
   Graph_Graph1->GetXaxis()->SetLabelFont(42);
   Graph_Graph1->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1->GetXaxis()->SetTitleOffset(1.2);
   Graph_Graph1->GetXaxis()->SetTitleFont(42);
   Graph_Graph1->GetYaxis()->SetTitle("Relative Moon Brightness");
   Graph_Graph1->GetYaxis()->SetLabelFont(42);
   Graph_Graph1->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1->GetYaxis()->SetTitleOffset(1.3);
   Graph_Graph1->GetYaxis()->SetTitleFont(42);
   Graph_Graph1->GetZaxis()->SetLabelFont(42);
   Graph_Graph1->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph1);
   
   graph->Draw("ap");
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
