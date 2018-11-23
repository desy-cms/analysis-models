/***************************************************************************** 
 * Project: RooFit                                                           * 
 *                                                                           * 
 * This code was autogenerated by RooClassFactory                            * 
 *****************************************************************************/ 

// Your description goes here... 

#include "Riostream.h" 
#include <cmath>
#include "Analysis/Models/interface/RooPhaseSpace.h" 
#include "RooAbsReal.h" 
#include "RooAbsCategory.h" 
#include <math.h> 
#include "TMath.h" 

using namespace analysis::models;


ClassImp(RooPhaseSpace) 

RooPhaseSpace::RooPhaseSpace(const char *name, const char *title, 
                        RooAbsReal& _mbb) :
   RooAbsPdf(name,title), 
   mbb("mbb","mbb",this,_mbb)
{ 
} 


RooPhaseSpace::RooPhaseSpace(const RooPhaseSpace& other, const char* name) :  
   RooAbsPdf(other,name), 
   mbb("mbb",this,other.mbb)
{ 
} 


TObject* RooPhaseSpace::clone(const char* newname) const {
  return new RooPhaseSpace(*this, newname);
}


Double_t RooPhaseSpace::evaluate() const 
{ 
   double result = 0.0;
   if(mbb > 200.) 
	result = (1.326 / (1 + (2.287e+03 * TMath::Exp(-3.331e-02 * mbb)))) - (1.326-1.);
   else result = 1.0;

   return result; 
} 


