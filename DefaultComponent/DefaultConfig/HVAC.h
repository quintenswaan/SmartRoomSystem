/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20235614
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: HVAC
//!	Generated Date	: Fri, 19, Apr 2024  
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
//## class HVAC
#include "IB_Mode.h"
//## class HVAC
#include "IB_Power.h"
//## link itsSmartRoomSystem
class SmartRoomSystem;

//## package SYSTEM_ANALYSIS::SYSTEM_CONTEXT

//## class HVAC
class HVAC : public OMReactive, public IB_Power, public IB_Mode {
public :

//#[ ignore
    //## package SYSTEM_ANALYSIS::SYSTEM_CONTEXT
    class port_HVAC_C : public IB_Power, public IB_Mode {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        port_HVAC_C(void);
        
        //## auto_generated
        virtual ~port_HVAC_C(void);
        
        ////    Operations    ////
        
        //## auto_generated
        void connectHVAC(HVAC* part);
        
        //## auto_generated
        IB_Mode* getItsIB_Mode(void);
        
        //## auto_generated
        IB_Power* getItsIB_Power(void);
        
        //## auto_generated
        virtual void modeCool(void);
        
        //## auto_generated
        virtual void modeHeat(void);
        
        //## auto_generated
        virtual void startHVAC(void);
        
        //## auto_generated
        virtual void stopHVAC(void);
        
        ////    Additional operations    ////
        
        //## auto_generated
        void setItsIB_Mode(IB_Mode* const p_IB_Mode);
        
        //## auto_generated
        void setItsIB_Power(IB_Power* const p_IB_Power);
    
    protected :
    
        //## auto_generated
        void cleanUpRelations(void);
        
        ////    Attributes    ////
    
    private :
    
        RhpInteger _p_;		//## attribute _p_
        
        ////    Relations and components    ////
        
        IB_Mode* itsIB_Mode;		//## link itsIB_Mode
        
        IB_Power* itsIB_Power;		//## link itsIB_Power
    };
//#]

    ////    Friends    ////
    
#ifdef _OMINSTRUMENT
    friend class OMAnimatedHVAC;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    explicit HVAC(IOxfActive* const theActiveContext = NULL);
    
    //## auto_generated
    virtual ~HVAC(void);
    
    ////    Operations    ////
    
    //## operation modeCool()
    virtual void modeCool(void);
    
    //## operation modeHeat()
    virtual void modeHeat(void);
    
    //## operation startHVAC()
    virtual void startHVAC(void);
    
    //## operation stopHVAC()
    virtual void stopHVAC(void);
    
    ////    Additional operations    ////
    
    //## auto_generated
    port_HVAC_C* getPort_HVAC(void) const;
    
    //## auto_generated
    port_HVAC_C* get_port_HVAC(void) const;
    
    //## auto_generated
    const bool getModeHVAC(void) const;
    
    //## auto_generated
    void setModeHVAC(const bool p_modeHVAC);
    
    //## auto_generated
    const bool getPowerHVAC(void) const;
    
    //## auto_generated
    void setPowerHVAC(const bool p_powerHVAC);
    
    //## auto_generated
    const SmartRoomSystem* getItsSmartRoomSystem(void) const;
    
    //## auto_generated
    void setItsSmartRoomSystem(SmartRoomSystem* const p_SmartRoomSystem);
    
    //## auto_generated
    virtual bool cancelTimeout(const IOxfTimeout* arg);
    
    //## auto_generated
    virtual bool startBehavior(void);

protected :

    //## auto_generated
    void initRelations(void);
    
    //## auto_generated
    void initStatechart(void);
    
    //## auto_generated
    void cleanUpRelations(void);
    
    //## auto_generated
    void cancelTimeouts(void);
    
    ////    Attributes    ////

private :

    bool modeHVAC;		//## attribute modeHVAC
    
    bool powerHVAC;		//## attribute powerHVAC
    
    ////    Relations and components    ////
    
//#[ ignore
    port_HVAC_C port_HVAC;
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
    
    //## statechart_method
    IOxfReactive::TakeEventStatus Heating_handleEvent(void);
    
    // Cooling:
    //## statechart_method
    inline RhpBoolean Cooling_IN(void) const;
    
    //## statechart_method
    IOxfReactive::TakeEventStatus Cooling_handleEvent(void);
    
    // Off:
    //## statechart_method
    inline RhpBoolean Off_IN(void) const;
    
    //## statechart_method
    IOxfReactive::TakeEventStatus Off_handleEvent(void);

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
    
    IOxfTimeout* On_timeout;
    
    IOxfTimeout* rootState_timeout;
//#]
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedHVAC : public OMAnimatedIB_Power, public OMAnimatedIB_Mode {
    DECLARE_REACTIVE_META(HVAC, OMAnimatedHVAC)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
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
