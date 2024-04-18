/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20174215
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: HVAC
//!	Generated Date	: Thu, 18, Apr 2024  
	File Path	: DefaultComponent\DefaultConfig\HVAC.h
*********************************************************************/

#ifndef HVAC_H
#define HVAC_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "SYSTEM_CONTEXT.h"
//## auto_generated
#include <omthread.h>
//## auto_generated
#include <omreactive.h>
//## auto_generated
#include <state.h>
//## auto_generated
#include <event.h>
//## link itsSmartRoomSystem
class SmartRoomSystem;

//## package SYSTEM_ANALYSIS::SYSTEM_CONTEXT

//## class HVAC
class HVAC : public OMReactive {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedHVAC;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    explicit HVAC(IOxfActive* const theActiveContext = NULL);
    
    //## auto_generated
    ~HVAC(void);
    
    ////    Additional operations    ////
    
    //## auto_generated
    const SmartRoomSystem* getItsSmartRoomSystem(void) const;
    
    //## auto_generated
    void setItsSmartRoomSystem(SmartRoomSystem* const p_SmartRoomSystem);
    
    //## auto_generated
    virtual bool startBehavior(void);

protected :

    //## auto_generated
    void initStatechart(void);
    
    //## auto_generated
    void cleanUpRelations(void);
    
    ////    Relations and components    ////

private :

    SmartRoomSystem* itsSmartRoomSystem;		//## link itsSmartRoomSystem
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsSmartRoomSystem(SmartRoomSystem* const p_SmartRoomSystem);
    
    //## auto_generated
    void _setItsSmartRoomSystem(SmartRoomSystem* const p_SmartRoomSystem);
    
    //## auto_generated
    void _clearItsSmartRoomSystem(void);
    
    // rootState:
    //## statechart_method
    inline RhpBoolean rootState_IN(void) const;
    
    // On:
    //## statechart_method
    inline RhpBoolean On_IN(void) const;
    
    //## statechart_method
    void On_entDef(void);
    
    //## statechart_method
    void OnEntDef(void);
    
    //## statechart_method
    void On_entShallowHist(void);
    
    //## statechart_method
    IOxfReactive::TakeEventStatus On_handleEvent(void);
    
    // Heating:
    //## statechart_method
    inline RhpBoolean Heating_IN(void) const;
    
    // Cooling:
    //## statechart_method
    inline RhpBoolean Cooling_IN(void) const;
    
    // Off:
    //## statechart_method
    inline RhpBoolean Off_IN(void) const;

protected :

    //## statechart_method
    virtual void rootState_entDef(void);
    
    //## statechart_method
    virtual IOxfReactive::TakeEventStatus rootState_processEvent(void);
    
    ////    Framework    ////
    
//#[ ignore
    enum HVAC_Enum {
        OMNonState = 0,
        On = 1,
        Heating = 2,
        Cooling = 3,
        Off = 4
    };
//#]

private :

//#[ ignore
    HVAC_Enum rootState_subState;
    
    HVAC_Enum rootState_active;
    
    HVAC_Enum On_subState;
    
    HVAC_Enum On_lastState;
//#]
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedHVAC : virtual public AOMInstance {
    DECLARE_REACTIVE_META(HVAC, OMAnimatedHVAC)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
    
    //## statechart_method
    void rootState_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void On_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Heating_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Cooling_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Off_serializeStates(AOMSState* aomsState) const;
};
//#]
#endif // _OMINSTRUMENT

inline RhpBoolean HVAC::rootState_IN(void) const {
    return true;
}

inline RhpBoolean HVAC::On_IN(void) const {
    return rootState_subState == On;
}

inline RhpBoolean HVAC::Heating_IN(void) const {
    return On_subState == Heating;
}

inline RhpBoolean HVAC::Cooling_IN(void) const {
    return On_subState == Cooling;
}

inline RhpBoolean HVAC::Off_IN(void) const {
    return rootState_subState == Off;
}

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\HVAC.h
*********************************************************************/
