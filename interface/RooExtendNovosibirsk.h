#ifndef Analysis_Models_RooExtendNovosibirsk_h
#define Analysis_Models_RooExtendNovosibirsk_h 1

#include "RooAbsPdf.h"
#include "RooRealProxy.h"
#include "RooAbsReal.h"


namespace analysis {
  namespace models {

    class RooExtendNovosibirsk : public RooAbsPdf {
    public:
      inline RooExtendNovosibirsk() = default;
      RooExtendNovosibirsk(const char *name, const char *title,
                    RooAbsReal& x,
                    RooAbsReal& peak,
                    RooAbsReal& width,
                    RooAbsReal& tail,
                    RooAbsReal& par4);
      RooExtendNovosibirsk(const RooExtendNovosibirsk& other, const char* name=0) ;
      virtual TObject* clone(const char* newname) const;
      inline virtual ~RooExtendNovosibirsk() = default;

    protected:
      double evaluate() const ;

      RooRealProxy x_ ;
      RooRealProxy peak_ ;
      RooRealProxy width_ ;
      RooRealProxy tail_ ;
      RooRealProxy par4_;

    private:
      ClassDef(RooExtendNovosibirsk,1)
    };

  }
}

#endif  // Analysis_Models_RooExtendNovosibirsk_h
