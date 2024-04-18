/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20174215
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: SmartRoomSystem
//!	Generated Date	: Thu, 18, Apr 2024  
	File Path	: DefaultComponent\DefaultConfig\SmartRoomSystem.h
*********************************************************************/

#ifndef SmartRoomSystem_H
#define SmartRoomSystem_H

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
//## class SmartRoomSystem
#include "int_currentTemp_ProxyFlowPropertyInterface.h"
//## class port_SRS_C
#include "IB_Mode.h"
//## class port_SRS_C
#include "IB_Power.h"
//## link itsAirPurifier
class AirPurifier;

//## link itsFireSprinklerSystem
class FireSprinklerSystem;

//## link itsHVAC
class HVAC;

//## link itsNaturalEnvironment
class NaturalEnvironment;

//## link itsRoomSchedularSystem
class RoomSchedularSystem;

//## link itsRoomUser
class RoomUser;

//## link itsSecurityAndAccesSystem
class SecurityAndAccesSystem;

//## link itsStakeholders
class Stakeholders;

//## link itsStandards
class Standards;

//## link itsTemperatureSensor
class TemperatureSensor;

//#[ ignore
#define OMAnim_SYSTEM_ANALYSIS_SYSTEM_CONTEXT_SmartRoomSystem_setDesiredTemp_int_ARGS_DECLARATION int p_desiredTemp;
//#]

//## package SYSTEM_ANALYSIS::SYSTEM_CONTEXT

//## class SmartRoomSystem
class SmartRoomSystem : public OMReactive, public int_currentTemp_ProxyFlowPropertyInterface {
public :

//#[ ignore
    //## package SYSTEM_ANALYSIS::SYSTEM_CONTEXT
    class port_SRS_C : public IB_Power, public IB_Mode {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        port_SRS_C(void);
        
        //## auto_generated
        virtual ~port_SRS_C(void);
        
        ////    Operations    ////
        
        //## auto_generated
        IB_Mode* getItsIB_Mode(void);
        
        //## auto_generated
        IB_Power* getItsIB_Power(void);
        
        //## auto_generated
        SmartRoomSystem::port_SRS_C* getOutBound(void);
        
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
    
    //## package SYSTEM_ANALYSIS::SYSTEM_CONTEXT
    class p_SmartRoomSystem_C : public int_currentTemp_ProxyFlowPropertyInterface {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        p_SmartRoomSystem_C(void);
        
        //## auto_generated
        virtual ~p_SmartRoomSystem_C(void);
        
        ////    Operations    ////
        
        //## auto_generated
        void connectSmartRoomSystem(SmartRoomSystem* part);
        
        //## auto_generated
        int_currentTemp_ProxyFlowPropertyInterface* getItsInt_currentTemp_ProxyFlowPropertyInterface(void);
        
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
    friend class OMAnimatedSmartRoomSystem;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    explicit SmartRoomSystem(IOxfActive* const theActiveContext = NULL);
    
    //## auto_generated
    ~SmartRoomSystem(void);
    
    ////    Operations    ////
    
//#[ ignore
    void setCurrentTemp(int p_currentTemp);
//#]

    ////    Additional operations    ////
    
    //## auto_generated
    port_SRS_C* getPort_SRS(void) const;
    
    //## auto_generated
    port_SRS_C* get_port_SRS(void) const;
    
    //## auto_generated
    p_SmartRoomSystem_C* getP_SmartRoomSystem(void) const;
    
    //## auto_generated
    p_SmartRoomSystem_C* get_p_SmartRoomSystem(void) const;
    
    //## auto_generated
    const int getCurrentTemp(void) const;
    
    //## auto_generated
    const int getDesiredTemp(void) const;
    
    //## auto_generated
    void setDesiredTemp(const int p_desiredTemp);
    
    //## auto_generated
    const AirPurifier* getItsAirPurifier(void) const;
    
    //## auto_generated
    void setItsAirPurifier(AirPurifier* const p_AirPurifier);
    
    //## auto_generated
    const FireSprinklerSystem* getItsFireSprinklerSystem(void) const;
    
    //## auto_generated
    void setItsFireSprinklerSystem(FireSprinklerSystem* const p_FireSprinklerSystem);
    
    //## auto_generated
    const HVAC* getItsHVAC(void) const;
    
    //## auto_generated
    void setItsHVAC(HVAC* const p_HVAC);
    
    //## auto_generated
    const NaturalEnvironment* getItsNaturalEnvironment(void) const;
    
    //## auto_generated
    void setItsNaturalEnvironment(NaturalEnvironment* const p_NaturalEnvironment);
    
    //## auto_generated
    const RoomSchedularSystem* getItsRoomSchedularSystem(void) const;
    
    //## auto_generated
    void setItsRoomSchedularSystem(RoomSchedularSystem* const p_RoomSchedularSystem);
    
    //## auto_generated
    const RoomUser* getItsRoomUser(void) const;
    
    //## auto_generated
    void setItsRoomUser(RoomUser* const p_RoomUser);
    
    //## auto_generated
    const SecurityAndAccesSystem* getItsSecurityAndAccesSystem(void) const;
    
    //## auto_generated
    void setItsSecurityAndAccesSystem(SecurityAndAccesSystem* const p_SecurityAndAccesSystem);
    
    //## auto_generated
    const Stakeholders* getItsStakeholders(void) const;
    
    //## auto_generated
    void setItsStakeholders(Stakeholders* const p_Stakeholders);
    
    //## auto_generated
    const Standards* getItsStandards(void) const;
    
    //## auto_generated
    void setItsStandards(Standards* const p_Standards);
    
    //## auto_generated
    const TemperatureSensor* getItsTemperatureSensor(void) const;
    
    //## auto_generated
    void setItsTemperatureSensor(TemperatureSensor* const p_TemperatureSensor);
    
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

    int currentTemp;		//## attribute currentTemp
    
    int desiredTemp;		//## attribute desiredTemp
    
    ////    Relations and components    ////
    
//#[ ignore
    port_SRS_C port_SRS;
    
    p_SmartRoomSystem_C p_SmartRoomSystem;
//#]

    AirPurifier* itsAirPurifier;		//## link itsAirPurifier
    
    FireSprinklerSystem* itsFireSprinklerSystem;		//## link itsFireSprinklerSystem
    
    HVAC* itsHVAC;		//## link itsHVAC
    
    NaturalEnvironment* itsNaturalEnvironment;		//## link itsNaturalEnvironment
    
    RoomSchedularSystem* itsRoomSchedularSystem;		//## link itsRoomSchedularSystem
    
    RoomUser* itsRoomUser;		//## link itsRoomUser
    
    SecurityAndAccesSystem* itsSecurityAndAccesSystem;		//## link itsSecurityAndAccesSystem
    
    Stakeholders* itsStakeholders;		//## link itsStakeholders
    
    Standards* itsStandards;		//## link itsStandards
    
    TemperatureSensor* itsTemperatureSensor;		//## link itsTemperatureSensor
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsAirPurifier(AirPurifier* const p_AirPurifier);
    
    //## auto_generated
    void _setItsAirPurifier(AirPurifier* const p_AirPurifier);
    
    //## auto_generated
    void _clearItsAirPurifier(void);
    
    //## auto_generated
    void __setItsFireSprinklerSystem(FireSprinklerSystem* const p_FireSprinklerSystem);
    
    //## auto_generated
    void _setItsFireSprinklerSystem(FireSprinklerSystem* const p_FireSprinklerSystem);
    
    //## auto_generated
    void _clearItsFireSprinklerSystem(void);
    
    //## auto_generated
    void __setItsHVAC(HVAC* const p_HVAC);
    
    //## auto_generated
    void _setItsHVAC(HVAC* const p_HVAC);
    
    //## auto_generated
    void _clearItsHVAC(void);
    
    //## auto_generated
    void __setItsNaturalEnvironment(NaturalEnvironment* const p_NaturalEnvironment);
    
    //## auto_generated
    void _setItsNaturalEnvironment(NaturalEnvironment* const p_NaturalEnvironment);
    
    //## auto_generated
    void _clearItsNaturalEnvironment(void);
    
    //## auto_generated
    void __setItsRoomSchedularSystem(RoomSchedularSystem* const p_RoomSchedularSystem);
    
    //## auto_generated
    void _setItsRoomSchedularSystem(RoomSchedularSystem* const p_RoomSchedularSystem);
    
    //## auto_generated
    void _clearItsRoomSchedularSystem(void);
    
    //## auto_generated
    void __setItsRoomUser(RoomUser* const p_RoomUser);
    
    //## auto_generated
    void _setItsRoomUser(RoomUser* const p_RoomUser);
    
    //## auto_generated
    void _clearItsRoomUser(void);
    
    //## auto_generated
    void __setItsSecurityAndAccesSystem(SecurityAndAccesSystem* const p_SecurityAndAccesSystem);
    
    //## auto_generated
    void _setItsSecurityAndAccesSystem(SecurityAndAccesSystem* const p_SecurityAndAccesSystem);
    
    //## auto_generated
    void _clearItsSecurityAndAccesSystem(void);
    
    //## auto_generated
    void __setItsStakeholders(Stakeholders* const p_Stakeholders);
    
    //## auto_generated
    void _setItsStakeholders(Stakeholders* const p_Stakeholders);
    
    //## auto_generated
    void _clearItsStakeholders(void);
    
    //## auto_generated
    void __setItsStandards(Standards* const p_Standards);
    
    //## auto_generated
    void _setItsStandards(Standards* const p_Standards);
    
    //## auto_generated
    void _clearItsStandards(void);
    
    //## auto_generated
    void __setItsTemperatureSensor(TemperatureSensor* const p_TemperatureSensor);
    
    //## auto_generated
    void _setItsTemperatureSensor(TemperatureSensor* const p_TemperatureSensor);
    
    //## auto_generated
    void _clearItsTemperatureSensor(void);
    
    // rootState:
    //## statechart_method
    inline RhpBoolean rootState_IN(void) const;
    
    // Idle:
    //## statechart_method
    inline RhpBoolean Idle_IN(void) const;
    
    // Controlling:
    //## statechart_method
    inline RhpBoolean Controlling_IN(void) const;
    
    //## statechart_method
    void Controlling_entDef(void);
    
    //## statechart_method
    void Controlling_exit(void);
    
    //## statechart_method
    IOxfReactive::TakeEventStatus Controlling_handleEvent(void);
    
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
    
    // checkTemp:
    //## statechart_method
    inline RhpBoolean checkTemp_IN(void) const;
    
    //## statechart_method
    IOxfReactive::TakeEventStatus checkTemp_handleEvent(void);

protected :

    //## statechart_method
    virtual void rootState_entDef(void);
    
    //## statechart_method
    virtual IOxfReactive::TakeEventStatus rootState_processEvent(void);
    
    ////    Framework    ////
    
//#[ ignore
    enum SmartRoomSystem_Enum {
        OMNonState = 0,
        Idle = 1,
        Controlling = 2,
        Heating = 3,
        Cooling = 4,
        checkTemp = 5
    };
//#]

private :

//#[ ignore
    SmartRoomSystem_Enum rootState_subState;
    
    SmartRoomSystem_Enum rootState_active;
    
    IOxfTimeout* rootState_timeout;
    
    SmartRoomSystem_Enum Controlling_subState;
    
    IOxfTimeout* Controlling_timeout;
//#]
};

#ifdef _OMINSTRUMENT
DECLARE_OPERATION_CLASS(SYSTEM_ANALYSIS_SYSTEM_CONTEXT_SmartRoomSystem_setDesiredTemp_int)

//#[ ignore
class OMAnimatedSmartRoomSystem : virtual public AOMInstance {
    DECLARE_REACTIVE_META(SmartRoomSystem, OMAnimatedSmartRoomSystem)
    
    DECLARE_META_OP(SYSTEM_ANALYSIS_SYSTEM_CONTEXT_SmartRoomSystem_setDesiredTemp_int)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
    
    //## statechart_method
    void rootState_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Idle_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Controlling_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Heating_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Cooling_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void checkTemp_serializeStates(AOMSState* aomsState) const;
};
//#]
#endif // _OMINSTRUMENT

inline RhpBoolean SmartRoomSystem::rootState_IN(void) const {
    return true;
}

inline RhpBoolean SmartRoomSystem::Idle_IN(void) const {
    return rootState_subState == Idle;
}

inline RhpBoolean SmartRoomSystem::Controlling_IN(void) const {
    return rootState_subState == Controlling;
}

inline RhpBoolean SmartRoomSystem::Heating_IN(void) const {
    return Controlling_subState == Heating;
}

inline RhpBoolean SmartRoomSystem::Cooling_IN(void) const {
    return Controlling_subState == Cooling;
}

inline RhpBoolean SmartRoomSystem::checkTemp_IN(void) const {
    return Controlling_subState == checkTemp;
}

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\SmartRoomSystem.h
*********************************************************************/
