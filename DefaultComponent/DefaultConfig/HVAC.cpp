/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20174215
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: HVAC
//!	Generated Date	: Thu, 18, Apr 2024  
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
//#]

//## package SYSTEM_ANALYSIS::SYSTEM_CONTEXT

//## class HVAC
HVAC::HVAC(IOxfActive* const theActiveContext) : OMReactive(), itsSmartRoomSystem(NULL) {
    NOTIFY_REACTIVE_CONSTRUCTOR(HVAC, HVAC(), 0, SYSTEM_ANALYSIS_SYSTEM_CONTEXT_HVAC_HVAC_SERIALIZE);
    setActiveContext(theActiveContext, false);
    initStatechart();
}

HVAC::~HVAC(void) {
    NOTIFY_DESTRUCTOR(~HVAC, true);
    cleanUpRelations();
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

bool HVAC::startBehavior(void) {
    bool done = false;
    done = OMReactive::startBehavior();
    return done;
}

void HVAC::initStatechart(void) {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
    On_subState = OMNonState;
    On_lastState = OMNonState;
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
                }
                break;
                case Cooling:
                {
                    NOTIFY_STATE_ENTERED("ROOT.On.Cooling");
                    pushNullTransition();
                    On_subState = Cooling;
                    rootState_active = Cooling;
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
            NOTIFY_TRANSITION_STARTED("2");
            On_lastState = On_subState;
            popNullTransition();
            switch (On_subState) {
                // State Heating
                case Heating:
                {
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.On.Heating");
                    On_lastState = Heating;
                }
                break;
                // State Cooling
                case Cooling:
                {
                    popNullTransition();
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
            NOTIFY_TRANSITION_TERMINATED("2");
            res = eventConsumed;
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
        NOTIFY_TRANSITION_TERMINATED("0");
    }
}

IOxfReactive::TakeEventStatus HVAC::rootState_processEvent(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (rootState_active) {
        // State Off
        case Off:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId) == 1)
                {
                    NOTIFY_TRANSITION_STARTED("1");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.Off");
                    On_entDef();
                    NOTIFY_TRANSITION_TERMINATED("1");
                    res = eventConsumed;
                }
            
        }
        break;
        // State Heating
        case Heating:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId) == 1)
                {
                    NOTIFY_TRANSITION_STARTED("3");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.On.Heating");
                    NOTIFY_STATE_ENTERED("ROOT.On.Cooling");
                    pushNullTransition();
                    On_subState = Cooling;
                    rootState_active = Cooling;
                    NOTIFY_TRANSITION_TERMINATED("3");
                    res = eventConsumed;
                }
            
            if(res == eventNotConsumed)
                {
                    res = On_handleEvent();
                }
        }
        break;
        // State Cooling
        case Cooling:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId) == 1)
                {
                    NOTIFY_TRANSITION_STARTED("4");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.On.Cooling");
                    NOTIFY_STATE_ENTERED("ROOT.On.Heating");
                    pushNullTransition();
                    On_subState = Heating;
                    rootState_active = Heating;
                    NOTIFY_TRANSITION_TERMINATED("4");
                    res = eventConsumed;
                }
            
            if(res == eventNotConsumed)
                {
                    res = On_handleEvent();
                }
        }
        break;
        default:
            break;
    }
    return res;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedHVAC::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsSmartRoomSystem", false, true);
    if(myReal->itsSmartRoomSystem)
        {
            aomsRelations->ADD_ITEM(myReal->itsSmartRoomSystem);
        }
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

IMPLEMENT_REACTIVE_META_P(HVAC, SYSTEM_ANALYSIS_SYSTEM_CONTEXT, SYSTEM_ANALYSIS::SYSTEM_CONTEXT, false, OMAnimatedHVAC)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\HVAC.cpp
*********************************************************************/
