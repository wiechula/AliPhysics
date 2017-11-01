// Macro to extract calibration summary information
// ConfigOCDB.C  macro has to be present in working directory
//
void CalibSummary(Int_t irun=-1, const char* ocdbStorage=0x0){
  //
  //
  //
  gSystem->Load("libANALYSIS");
  gSystem->Load("libTPCcalib");
  if (ocdbStorage) {
    gROOT->LoadMacro("$ALICE_PHYSICS/PWGPP/TPC/macros/ConfigOCDB.C");
    ConfigOCDB(irun,ocdbStorage);
  }
  AliTPCcalibSummary calibSummary;
  calibSummary.ProcessRun(irun);
}
