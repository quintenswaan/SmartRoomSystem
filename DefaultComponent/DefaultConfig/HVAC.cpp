/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20174215
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: HVAC
//!	Generated Date	: Fri, 19, Apr 2024  
	File Path	: DefaultComponent\DefaultConfig\HVAC.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX

#define _OMSTATECHART_ANIMATED
//#]

//## auto_generated
#include "HVAC.h"
//## link itsSmartRoomSystem
#include "SmartRoomSystem.h"
//#[ ignore
#define SYSTEM_ANALYSIS_SYSTEM_CONTEXT_HVAC_HVAC_SERIALIZE OM_NO_OP

#define SYSTEM_ANALYSIS_SYSTEM_CONTEXT_HVAC_modeCool_SERIALIZE OM_NO_OP

#define SYSTEM_ANALYSIS_SYSTEM_CONTEXT_HVAC_modeHeat_SERIALIZE OM_NO_OP

#define SYSTEM_ANALYSIS_SYSTEM_CONTEXT_HVAC_startHVAC_SERIALIZE OM_NO_OP

#define SYSTEM_ANALYSIS_SYSTEM_CONTEXT_HVAC_stopHVAC_SERIALIZE OM_NO_OP
//#]

//## package SYSTEM_ANALYSIS::SYSTEM_CONTEXT

//## class HVAC
#ifdef _OMINSTRUMENT
//#[ ignore
static AOMClass* _HVACSuper[2] = {
OMAnimatedIB_Power::staticGetClass(),
OMAnimatedIB_Mode::staticGetClass()};
//#]
#endif // _OMINSTRUMENT

//#[ ignore
HVAC::port_HVAC_C::port_HVAC_C(void) : IB_Power(), IB_Mode(), _p_(0), itsIB_Mode(NULL), itsIB_Power(NULL) {
}

HVAC::port_HVAC_C::~port_HVAC_C(void) {
    cleanUpRelations();
}

void HVAC::port_HVAC_C::connectHVAC(HVAC* part) {
    setItsIB_Power(part);
    setItsIB_Mode(part);
    
}

IB_Mode* HVAC::port_HVAC_C::getItsIB_Mode(void) {
    return this;
}

IB_Power* HVAC::port_HVAC_C::getItsIB_Power(void) {
    return this;
}

void HVAC::port_HVAC_C::modeCool(void) {
    
    if (itsIB_Mode != NULL) {
        itsIB_Mode->modeCool();
    }
    
}

void HVAC::port_HVAC_C::modeHeat(void) {
    
    if (itsIB_Mode != NULL) {
        itsIB_Mode->modeHeat();
    }
    
}

void HVAC::port_HVAC_C::startHVAC(void) {
    
    if (itsIB_Power != NULL) {
        itsIB_Power->startHVAC();
    }
    
}

void HVAC::port_HVAC_C::stopHVAC(void) {
    
    if (itsIB_Power != NULL) {
        itsIB_Power->stopHVAC();
    }
    
}

void HVAC::port_HVAC_C::setItsIB_Mode(IB_Mode* const p_IB_Mode) {
    itsIB_Mode = p_IB_Mode;
}

void HVAC::port_HVAC_C::setItsIB_Power(IB_Power* const p_IB_Power) {
    itsIB_Power = p_IB_Power;
}

void HVAC::port_HVAC_C::cleanUpRelations(void) {
    if(itsIB_Mode != NULL)
        {
            itsIB_Mode = NULL;
        }
    if(itsIB_Power != NULL)
        {
            itsIB_Power = NULL;
        }
}
//#]

HVAC::HVAC(IOxfActive* const theActiveContext) : OMReactive(), IB_Power(), IB_Mode(), modeHVAC(0), powerHVAC(0), itsSmartRoomSystem(NULL) {
    NOTIFY_REACTIVE_CONSTRUCTOR(HVAC, HVAC(), 0, SYSTEM_ANALYSIS_SYSTEM_CONTEXT_HVAC_HVAC_SERIALIZE);
    setActiveContext(theActiveContext, false);
    initRelations();
    initStatechart();
}

HVAC::~HVAC(void) {
    NOTIFY_DESTRUCTOR(~HVAC, false);
    cleanUpRelations();
    cancelTimeouts();
}

void HVAC::modeCool(void) {
    NOTIFY_OPERATION(modeCool, modeCool(), 0, SYSTEM_ANALYSIS_SYSTEM_CONTEXT_HVAC_modeCool_SERIALIZE);
    //#[ operation modeCool()
    std::cout << "HVAC: Cooling mode...\n";
    modeHVAC = true;
    //#]
}

void HVAC::modeHeat(void) {
    NOTIFY_OPERATION(modeHeat, modeHeat(), 0, SYSTEM_ANALYSIS_SYSTEM_CONTEXT_HVAC_modeHeat_SERIALIZE);
    //#[ operation modeHeat()
    std::cout << "HVAC: Heating mode...\n";
    modeHVAC = false;
    //#]
}

void HVAC::startHVAC(void) {
    NOTIFY_OPERATION(startHVAC, startHVAC(), 0, SYSTEM_ANALYSIS_SYSTEM_CONTEXT_HVAC_startHVAC_SERIALIZE);
    //#[ operation startHVAC()
    std::cout << "HVAC: Turning on...\n";
    powerHVAC = true;
    //#]
}

void HVAC::stopHVAC(void) {
    NOTIFY_OPERATION(stopHVAC, stopHVAC(), 0, SYSTEM_ANALYSIS_SYSTEM_CONTEXT_HVAC_stopHVAC_SERIALIZE);
    //#[ operation stopHVAC()
    std::cout << "HVAC: Turning off...\n";
    powerHVAC = false;
    //#]
}

HVAC::port_HVAC_C* HVAC::getPort_HVAC(void) const {
    return (HVAC::port_HVAC_C*) &port_HVAC;
}

HVAC::port_HVAC_C* HVAC::get_port_HVAC(void) const {
    return (HVAC::port_HVAC_C*) &port_HVAC;
}

const bool HVAC::getModeHVAC(void) const {
    return modeHVAC;
}

void HVAC::setModeHVAC(const bool p_modeHVAC) {
    modeHVAC = p_modeHVAC;
}

const bool HVAC::getPowerHVAC(void) const {
    return powerHVAC;
}

void HVAC::setPowerHVAC(const bool p_powerHVAC) {
    powerHVAC = p_powerHVAC;
}

const SmartRoomSystem* HVAC::getItsSmartRoomSystem(void) const {
    return itsSmartRoomSystem;
}

void HVAC::setItsSmartRoomSystem(SmartRoomSystem* const p_SmartRoomSystem) {
    if(p_SmartRoomSystem != NULL)
        {
            p_SmartRoomSystem->_setItsHVAC(this);
        }
    _setItsSmartRoomSystem(p_SmartRoomSystem);
}

bool HVAC::cancelTimeout(const IOxfTimeout* arg) {
    bool res = false;
    if(On_timeout == arg)
        {
            On_timeout = NULL;
            res = true;
        }
    if(rootState_timeout == arg)
        {
            rootState_timeout = NULL;
            res = true;
        }
    return res;
}

bool HVAC::startBehavior(void) {
    bool done = false;
    done = OMReactive::startBehavior();
    return done;
}

void HVAC::initRelations(void) {
    if (get_port_HVAC() != NULL) {
        get_port_HVAC()->connectHVAC(this);
    }
}

void HVAC::initStatechart(void) {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
    On_subState = OMNonState;
    On_lastState = OMNonState;
    On_timeout = NULL;
    rootState_timeout = NULL;
}

void HVAC::cleanUpRelations(void) {
    if(itsSmartRoomSystem != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsSmartRoomSystem");
            const HVAC* p_HVAC = itsSmartRoomSystem->getItsHVAC();
            if(p_HVAC != NULL)
                {
                    itsSmartRoomSystem->__setItsHVAC(NULL);
                }
            itsSmartRoomSystem = NULL;
        }
}

void HVAC::cancelTimeouts(void) {
    cancel(On_timeout);
    cancel(rootState_timeout);
}

void HVAC::__setItsSmartRoomSystem(SmartRoomSystem* const p_SmartRoomSystem) {
    itsSmartRoomSystem = p_SmartRoomSystem;
    if(p_SmartRoomSystem != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsSmartRoomSystem", p_SmartRoomSystem, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsSmartRoomSystem");
        }
}

void HVAC::_setItsSmartRoomSystem(SmartRoomSystem* const p_SmartRoomSystem) {
    if(itsSmartRoomSystem != NULL)
        {
            itsSmartRoomSystem->__setItsHVAC(NULL);
        }
    __setItsSmartRoomSystem(p_SmartRoomSystem);
}

void HVAC::_clearItsSmartRoomSystem(void) {
    NOTIFY_RELATION_CLEARED("itsSmartRoomSystem");
    itsSmartRoomSystem = NULL;
}

void HVAC::On_entDef(void) {
    NOTIFY_STATE_ENTERED("ROOT.On");
    pushNullTransition();
    rootState_subState = On;
    OnEntDef();
}

void HVAC::OnEntDef(void) {
    NOTIFY_TRANSITION_STARTED("5");
    On_entShallowHist();
    NOTIFY_TRANSITION_TERMINATED("5");
}

void HVAC::On_entShallowHist(void) {
    if(On_lastState == OMNonState)
        {
            NOTIFY_TRANSITION_STARTED("6");
            NOTIFY_STATE_ENTERED("ROOT.On.Heating");
            pushNullTransition();
            On_subState = Heating;
            rootState_active = Heating;
            On_timeout = scheduleTimeout(100, "ROOT.On.Heating");
            NOTIFY_TRANSITION_TERMINATED("6");
        }
    else
        {
            On_subState = On_lastState;
            switch (On_subState) {
                case Heating:
                {
                    NOTIFY_STATE_ENTERED("ROOT.On.Heating");
                    pushNullTransition();
                    On_subState = Heating;
                    rootState_active = Heating;
                    On_timeout = scheduleTimeout(100, "ROOT.On.Heating");
                }
                break;
                case Cooling:
                {
                    NOTIFY_STATE_ENTERED("ROOT.On.Cooling");
                    pushNullTransition();
                    On_subState = Cooling;
                    rootState_active = Cooling;
                    On_timeout = scheduleTimeout(100, "ROOT.On.Cooling");
                }
                break;
                default:
                    break;
            }
        }
}

IOxfReactive::TakeEventStatus HVAC::On_handleEvent(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(OMNullEventId) == 1)
        {
            //## transition 2 
            if(!powerHVAC)
                {
                    NOTIFY_TRANSITION_STARTED("2");
                    On_lastState = On_subState;
                    popNullTransition();
                    switch (On_subState) {
                        // State Heating
                        case Heating:
                        {
                            popNullTransition();
                            cancel(On_timeout);
                            NOTIFY_STATE_EXITED("ROOT.On.Heating");
                            On_lastState = Heating;
                        }
                        break;
                        // State Cooling
                        case Cooling:
                        {
                            popNullTransition();
                            cancel(On_timeout);
                            NOTIFY_STATE_EXITED("ROOT.On.Cooling");
                            On_lastState = Cooling;
                        }
                        break;
                        default:
                            break;
                    }
                    On_subState = OMNonState;
                    NOTIFY_STATE_EXITED("ROOT.On");
                    NOTIFY_STATE_ENTERED("ROOT.Off");
                    pushNullTransition();
                    rootState_subState = Off;
                    rootState_active = Off;
                    rootState_timeout = scheduleTimeout(100, "ROOT.Off");
                    NOTIFY_TRANSITION_TERMINATED("2");
                    res = eventConsumed;
                }
        }
    
    return res;
}

IOxfReactive::TakeEventStatus HVAC::Heating_handleEvent(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(OMTimeoutEventId) == 1)
        {
            if(getCurrentEvent() == On_timeout)
                {
                    NOTIFY_TRANSITION_STARTED("8");
                    popNullTransition();
                    cancel(On_timeout);
                    NOTIFY_STATE_EXITED("ROOT.On.Heating");
                    NOTIFY_STATE_ENTERED("ROOT.On.Heating");
                    pushNullTransition();
                    On_subState = Heating;
                    rootState_active = Heating;
                    On_timeout = scheduleTimeout(100, "ROOT.On.Heating");
                    NOTIFY_TRANSITION_TERMINATED("8");
                    res = eventConsumed;
                }
        }
    else {
        if(IS_EVENT_TYPE_OF(OMNullEventId) == 1)
            {
                //## transition 3 
                if(modeHVAC)
                    {
                        NOTIFY_TRANSITION_STARTED("3");
                        popNullTransition();
                        cancel(On_timeout);
                        NOTIFY_STATE_EXITED("ROOT.On.Heating");
                        NOTIFY_STATE_ENTERED("ROOT.On.Cooling");
                        pushNullTransition();
                        On_subState = Cooling;
                        rootState_active = Cooling;
                        On_timeout = scheduleTimeout(100, "ROOT.On.Cooling");
                        NOTIFY_TRANSITION_TERMINATED("3");
                        res = eventConsumed;
                    }
            }
        }
        
    
    if(res == eventNotConsumed)
        {
            res = On_handleEvent();
        }
    return res;
}

IOxfReactive::TakeEventStatus HVAC::Cooling_handleEvent(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(OMTimeoutEventId) == 1)
        {
            if(getCurrentEvent() == On_timeout)
                {
                    NOTIFY_TRANSITION_STARTED("9");
                    popNullTransition();
                    cancel(On_timeout);
                    NOTIFY_STATE_EXITED("ROOT.On.Cooling");
                    NOTIFY_STATE_ENTERED("ROOT.On.Cooling");
                    pushNullTransition();
                    On_subState = Cooling;
                    rootState_active = Cooling;
                    On_timeout = scheduleTimeout(100, "ROOT.On.Cooling");
                    NOTIFY_TRANSITION_TERMINATED("9");
                    res = eventConsumed;
                }
        }
    else {
        if(IS_EVENT_TYPE_OF(OMNullEventId) == 1)
            {
                //## transition 4 
                if(!modeHVAC)
                    {
                        NOTIFY_TRANSITION_STARTED("4");
                        popNullTransition();
                        cancel(On_timeout);
                        NOTIFY_STATE_EXITED("ROOT.On.Cooling");
                        NOTIFY_STATE_ENTERED("ROOT.On.Heating");
                        pushNullTransition();
                        On_subState = Heating;
                        rootState_active = Heating;
                        On_timeout = scheduleTimeout(100, "ROOT.On.Heating");
                        NOTIFY_TRANSITION_TERMINATED("4");
                        res = eventConsumed;
                    }
            }
        }
        
    
    if(res == eventNotConsumed)
        {
            res = On_handleEvent();
        }
    return res;
}

IOxfReactive::TakeEventStatus HVAC::Off_handleEvent(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(OMTimeoutEventId) == 1)
        {
            if(getCurrentEvent() == rootState_timeout)
                {
                    NOTIFY_TRANSITION_STARTED("7");
                    popNullTransition();
                    cancel(rootState_timeout);
                    NOTIFY_STATE_EXITED("ROOT.Off");
                    NOTIFY_STATE_ENTERED("ROOT.Off");
                    pushNullTransition();
                    rootState_subState = Off;
                    rootState_active = Off;
                    rootState_timeout = scheduleTimeout(100, "ROOT.Off");
                    NOTIFY_TRANSITION_TERMINATED("7");
                    res = eventConsumed;
                }
        }
    else {
        if(IS_EVENT_TYPE_OF(OMNullEventId) == 1)
            {
                //## transition 1 
                if(powerHVAC)
                    {
                        NOTIFY_TRANSITION_STARTED("1");
                        popNullTransition();
                        cancel(rootState_timeout);
                        NOTIFY_STATE_EXITED("ROOT.Off");
                        On_entDef();
                        NOTIFY_TRANSITION_TERMINATED("1");
                        res = eventConsumed;
                    }
            }
        }
        
    
    return res;
}

void HVAC::rootState_entDef(void) {
    {
        NOTIFY_STATE_ENTERED("ROOT");
        NOTIFY_TRANSITION_STARTED("0");
        NOTIFY_STATE_ENTERED("ROOT.Off");
        pushNullTransition();
        rootState_subState = Off;
        rootState_active = Off;
        rootState_timeout = scheduleTimeout(100, "ROOT.Off");
        NOTIFY_TRANSITION_TERMINATED("0");
    }
}

IOxfReactive::TakeEventStatus HVAC::rootState_processEvent(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (rootState_active) {
        // State Off
        case Off:
        {
            res = Off_handleEvent();
        }
        break;
        // State Heating
        case Heating:
        {
            res = Heating_handleEvent();
        }
        break;
        // State Cooling
        case Cooling:
        {
            res = Cooling_handleEvent();
        }
        break;
        default:
            break;
    }
    return res;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedHVAC::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("powerHVAC", x2String(myReal->powerHVAC));
    aomsAttributes->addAttribute("modeHVAC", x2String(myReal->modeHVAC));
    OMAnimatedIB_Power::serializeAttributes(aomsAttributes);
    OMAnimatedIB_Mode::serializeAttributes(aomsAttributes);
}

void OMAnimatedHVAC::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsSmartRoomSystem", false, true);
    if(myReal->itsSmartRoomSystem)
        {
            aomsRelations->ADD_ITEM(myReal->itsSmartRoomSystem);
        }
    OMAnimatedIB_Power::serializeRelations(aomsRelations);
    OMAnimatedIB_Mode::serializeRelations(aomsRelations);
}

void OMAnimatedHVAC::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
    switch (myReal->rootState_subState) {
        case HVAC::Off:
        {
            Off_serializeStates(aomsState);
        }
        break;
        case HVAC::On:
        {
            On_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedHVAC::On_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.On");
    switch (myReal->On_subState) {
        case HVAC::Heating:
        {
            Heating_serializeStates(aomsState);
        }
        break;
        case HVAC::Cooling:
        {
            Cooling_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedHVAC::Heating_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.On.Heating");
}

void OMAnimatedHVAC::Cooling_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.On.Cooling");
}

void OMAnimatedHVAC::Off_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Off");
}
//#]

IMPLEMENT_REACTIVE_META_M_P(HVAC, SYSTEM_ANALYSIS::SYSTEM_CONTEXT, false, _HVACSuper, 2, OMAnimatedHVAC)

OMINIT_SUPERCLASS(IB_Power, OMAnimatedIB_Power)

OMINIT_SUPERCLASS(IB_Mode, OMAnimatedIB_Mode)

OMREGISTER_REACTIVE_CLASS
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\HVAC.cpp
*********************************************************************/
