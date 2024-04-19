/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20235614
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: AirQualitySensor
//!	Generated Date	: Fri, 19, Apr 2024  
	File Path	: DefaultComponent\DefaultConfig\AirQualitySensor.h
*********************************************************************/

#ifndef AirQualitySensor_H
#define AirQualitySensor_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "SYSTEM_CONTEXT_AIR_PURIFIER.h"
//## class p_AirQualitySensor_C
#include "double_airQualityPPM_ProxyFlowPropertyInterface.h"
//## link itsAirPurifier
class AirPurifier;

//#[ ignore
#define OMAnim_SYSTEM_ANALYSIS_SYSTEM_CONTEXT_SYSTEM_CONTEXT_AIR_PURIFIER_AirQualitySensor_setAirQualityPPM_double_ARGS_DECLARATION double p_airQualityPPM;
//#]

//## package SYSTEM_ANALYSIS::SYSTEM_CONTEXT::SYSTEM_CONTEXT_AIR_PURIFIER

//## class AirQualitySensor
class AirQualitySensor {
public :

//#[ ignore
    //## package SYSTEM_ANALYSIS::SYSTEM_CONTEXT::SYSTEM_CONTEXT_AIR_PURIFIER
    class p_AirQualitySensor_C : public double_airQualityPPM_ProxyFlowPropertyInterface {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        p_AirQualitySensor_C(void);
        
        //## auto_generated
        virtual ~p_AirQualitySensor_C(void);
        
        ////    Operations    ////
        
        //## auto_generated
        double_airQualityPPM_ProxyFlowPropertyInterface* getItsDouble_airQualityPPM_ProxyFlowPropertyInterface(void);
        
        //## auto_generated
        double_airQualityPPM_ProxyFlowPropertyInterface* getOutBound(void);
        
        //## auto_generated
        virtual void setAirQualityPPM(double p_airQualityPPM);
        
        ////    Additional operations    ////
        
        //## auto_generated
        void setItsDouble_airQualityPPM_ProxyFlowPropertyInterface(double_airQualityPPM_ProxyFlowPropertyInterface* const p_double_airQualityPPM_ProxyFlowPropertyInterface);
    
    protected :
    
        //## auto_generated
        void cleanUpRelations(void);
        
        ////    Attributes    ////
    
    private :
    
        RhpInteger _p_;		//## attribute _p_
        
        ////    Relations and components    ////
        
        double_airQualityPPM_ProxyFlowPropertyInterface* itsDouble_airQualityPPM_ProxyFlowPropertyInterface;		//## link itsDouble_airQualityPPM_ProxyFlowPropertyInterface
    };
//#]

    ////    Friends    ////
    
#ifdef _OMINSTRUMENT
    friend class OMAnimatedAirQualitySensor;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    AirQualitySensor(void);
    
    //## auto_generated
    ~AirQualitySensor(void);
    
    ////    Operations    ////
    
//#[ ignore
    void setAirQualityPPM(double p_airQualityPPM);
//#]

    ////    Additional operations    ////
    
    //## auto_generated
    p_AirQualitySensor_C* getP_AirQualitySensor(void) const;
    
    //## auto_generated
    p_AirQualitySensor_C* get_p_AirQualitySensor(void) const;
    
    //## auto_generated
    const double getAirQualityPPM(void) const;
    
    //## auto_generated
    const AirPurifier* getItsAirPurifier(void) const;
    
    //## auto_generated
    void setItsAirPurifier(AirPurifier* const p_AirPurifier);

protected :

    //## auto_generated
    void cleanUpRelations(void);
    
    ////    Attributes    ////

private :

    double airQualityPPM;		//## attribute airQualityPPM
    
    ////    Relations and components    ////
    
//#[ ignore
    p_AirQualitySensor_C p_AirQualitySensor;
//#]

    AirPurifier* itsAirPurifier;		//## link itsAirPurifier
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsAirPurifier(AirPurifier* const p_AirPurifier);
    
    //## auto_generated
    void _setItsAirPurifier(AirPurifier* const p_AirPurifier);
    
    //## auto_generated
    void _clearItsAirPurifier(void);
};

#ifdef _OMINSTRUMENT
DECLARE_OPERATION_CLASS(SYSTEM_ANALYSIS_SYSTEM_CONTEXT_SYSTEM_CONTEXT_AIR_PURIFIER_AirQualitySensor_setAirQualityPPM_double)

//#[ ignore
class OMAnimatedAirQualitySensor : virtual public AOMInstance {
    DECLARE_META(AirQualitySensor, OMAnimatedAirQualitySensor)
    
    DECLARE_META_OP(SYSTEM_ANALYSIS_SYSTEM_CONTEXT_SYSTEM_CONTEXT_AIR_PURIFIER_AirQualitySensor_setAirQualityPPM_double)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\AirQualitySensor.h
*********************************************************************/
