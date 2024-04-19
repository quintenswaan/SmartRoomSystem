/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20235614
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: TemperatureSensor
//!	Generated Date	: Fri, 19, Apr 2024  
	File Path	: DefaultComponent\DefaultConfig\TemperatureSensor.h
*********************************************************************/

#ifndef TemperatureSensor_H
#define TemperatureSensor_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "OPERATING_ENVIRONMENT.h"
//## class p_TemperatureSensor_C
#include "int_currentTemp_ProxyFlowPropertyInterface.h"
//## link itsSmartRoomSystem
class SmartRoomSystem;

//## package SYSTEM_ANALYSIS::OPERATING_ENVIRONMENT

//## class TemperatureSensor
class TemperatureSensor {
public :

//#[ ignore
    //## package SYSTEM_ANALYSIS::OPERATING_ENVIRONMENT
    class p_TemperatureSensor_C : public int_currentTemp_ProxyFlowPropertyInterface {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        p_TemperatureSensor_C(void);
        
        //## auto_generated
        virtual ~p_TemperatureSensor_C(void);
        
        ////    Operations    ////
        
        //## auto_generated
        int_currentTemp_ProxyFlowPropertyInterface* getItsInt_currentTemp_ProxyFlowPropertyInterface(void);
        
        //## auto_generated
        int_currentTemp_ProxyFlowPropertyInterface* getOutBound(void);
        
        //## auto_generated
        virtual void setCurrentTemp(int p_currentTemp);
        
        ////    Additional operations    ////
        
        //## auto_generated
        void setItsInt_currentTemp_ProxyFlowPropertyInterface(int_currentTemp_ProxyFlowPropertyInterface* const p_int_currentTemp_ProxyFlowPropertyInterface);
    
    protected :
    
        //## auto_generated
        void cleanUpRelations(void);
        
        ////    Attributes    ////
    
    private :
    
        RhpInteger _p_;		//## attribute _p_
        
        ////    Relations and components    ////
        
        int_currentTemp_ProxyFlowPropertyInterface* itsInt_currentTemp_ProxyFlowPropertyInterface;		//## link itsInt_currentTemp_ProxyFlowPropertyInterface
    };
//#]

    ////    Friends    ////
    
#ifdef _OMINSTRUMENT
    friend class OMAnimatedTemperatureSensor;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    TemperatureSensor(void);
    
    //## auto_generated
    ~TemperatureSensor(void);
    
    ////    Operations    ////
    
//#[ ignore
    void setCurrentTemp(int p_currentTemp);
//#]

    ////    Additional operations    ////
    
    //## auto_generated
    p_TemperatureSensor_C* getP_TemperatureSensor(void) const;
    
    //## auto_generated
    p_TemperatureSensor_C* get_p_TemperatureSensor(void) const;
    
    //## auto_generated
    const int getCurrentTemp(void) const;
    
    //## auto_generated
    const SmartRoomSystem* getItsSmartRoomSystem(void) const;
    
    //## auto_generated
    void setItsSmartRoomSystem(SmartRoomSystem* const p_SmartRoomSystem);

protected :

    //## auto_generated
    void cleanUpRelations(void);
    
    ////    Attributes    ////

private :

    int currentTemp;		//## attribute currentTemp
    
    ////    Relations and components    ////
    
//#[ ignore
    p_TemperatureSensor_C p_TemperatureSensor;
//#]

    SmartRoomSystem* itsSmartRoomSystem;		//## link itsSmartRoomSystem
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsSmartRoomSystem(SmartRoomSystem* const p_SmartRoomSystem);
    
    //## auto_generated
    void _setItsSmartRoomSystem(SmartRoomSystem* const p_SmartRoomSystem);
    
    //## auto_generated
    void _clearItsSmartRoomSystem(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedTemperatureSensor : virtual public AOMInstance {
    DECLARE_META(TemperatureSensor, OMAnimatedTemperatureSensor)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\TemperatureSensor.h
*********************************************************************/
