/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20174215
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: AirPurifier
//!	Generated Date	: Fri, 19, Apr 2024  
	File Path	: DefaultComponent\DefaultConfig\AirPurifier.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX

#define _OMSTATECHART_ANIMATED
//#]

//## auto_generated
#include "AirPurifier.h"
//## link itsAirQualitySensor
#include "AirQualitySensor.h"
//## link itsSmartRoomSystem
#include "SmartRoomSystem.h"
//## auto_generated
#include "SYSTEM_CONTEXT.h"
//#[ ignore
#define SYSTEM_ANALYSIS_SYSTEM_CONTEXT_SYSTEM_CONTEXT_AIR_PURIFIER_AirPurifier_AirPurifier_SERIALIZE OM_NO_OP

#define SYSTEM_ANALYSIS_SYSTEM_CONTEXT_SYSTEM_CONTEXT_AIR_PURIFIER_AirPurifier_indicateSystemStatus_SERIALIZE OM_NO_OP

#define SYSTEM_ANALYSIS_SYSTEM_CONTEXT_SYSTEM_CONTEXT_AIR_PURIFIER_AirPurifier_printAirQuality_SERIALIZE OM_NO_OP

#define SYSTEM_ANALYSIS_SYSTEM_CONTEXT_SYSTEM_CONTEXT_AIR_PURIFIER_AirPurifier_purifyAir_SERIALIZE OM_NO_OP

#define SYSTEM_ANALYSIS_SYSTEM_CONTEXT_SYSTEM_CONTEXT_AIR_PURIFIER_AirPurifier_systemCheck_SERIALIZE OM_NO_OP
//#]

//## package SYSTEM_ANALYSIS::SYSTEM_CONTEXT::SYSTEM_CONTEXT_AIR_PURIFIER

//## class AirPurifier
//#[ ignore
AirPurifier::p_AirQualitySensor_C::p_AirQualitySensor_C(void) : double_airQualityPPM_ProxyFlowPropertyInterface(), _p_(0), itsDouble_airQualityPPM_ProxyFlowPropertyInterface(NULL) {
}

AirPurifier::p_AirQualitySensor_C::~p_AirQualitySensor_C(void) {
    cleanUpRelations();
}

void AirPurifier::p_AirQualitySensor_C::connectAirPurifier(AirPurifier* part) {
    setItsDouble_airQualityPPM_ProxyFlowPropertyInterface(part);
    
}

double_airQualityPPM_ProxyFlowPropertyInterface* AirPurifier::p_AirQualitySensor_C::getItsDouble_airQualityPPM_ProxyFlowPropertyInterface(void) {
    return this;
}

void AirPurifier::p_AirQualitySensor_C::setAirQualityPPM(double p_airQualityPPM) {
    
    if (itsDouble_airQualityPPM_ProxyFlowPropertyInterface != NULL) {
        itsDouble_airQualityPPM_ProxyFlowPropertyInterface->setAirQualityPPM(p_airQualityPPM);
    }
    
}

void AirPurifier::p_AirQualitySensor_C::setItsDouble_airQualityPPM_ProxyFlowPropertyInterface(double_airQualityPPM_ProxyFlowPropertyInterface* const p_double_airQualityPPM_ProxyFlowPropertyInterface) {
    itsDouble_airQualityPPM_ProxyFlowPropertyInterface = p_double_airQualityPPM_ProxyFlowPropertyInterface;
}

void AirPurifier::p_AirQualitySensor_C::cleanUpRelations(void) {
    if(itsDouble_airQualityPPM_ProxyFlowPropertyInterface != NULL)
        {
            itsDouble_airQualityPPM_ProxyFlowPropertyInterface = NULL;
        }
}

AirPurifier::p_AirPurifier_C::InBound_C::InBound_C(void) : evHumanPresence_ProxyReceptionInterface(), itsEvHumanPresence_ProxyReceptionInterface(NULL), port(NULL) {
}

AirPurifier::p_AirPurifier_C::InBound_C::~InBound_C(void) {
    cleanUpRelations();
}

bool AirPurifier::p_AirPurifier_C::InBound_C::send(IOxfEvent* event, const IOxfEventGenerationParams& params) {
    bool res = false;
    if (event != NULL) {
        event->setPort(getPort());
        if (itsEvHumanPresence_ProxyReceptionInterface != NULL) {
            if (event->isTypeOf(evHumanPresence_SYSTEM_CONTEXT_SYSTEM_ANALYSIS_id)) {
                res = itsEvHumanPresence_ProxyReceptionInterface->send(event, params);
            }
        }
    }
    return res;
    
}

bool AirPurifier::p_AirPurifier_C::InBound_C::send(IOxfEvent* event) {
    bool res = false;
    if (event != NULL) {
        event->setPort(getPort());
        if (itsEvHumanPresence_ProxyReceptionInterface != NULL) {
            if (event->isTypeOf(evHumanPresence_SYSTEM_CONTEXT_SYSTEM_ANALYSIS_id)) {
                res = itsEvHumanPresence_ProxyReceptionInterface->send(event);
            }
        }
    }
    return res;
    
}

void AirPurifier::p_AirPurifier_C::InBound_C::setItsEvHumanPresence_ProxyReceptionInterface(evHumanPresence_ProxyReceptionInterface* const p_evHumanPresence_ProxyReceptionInterface) {
    itsEvHumanPresence_ProxyReceptionInterface = p_evHumanPresence_ProxyReceptionInterface;
}

AirPurifier::p_AirPurifier_C* AirPurifier::p_AirPurifier_C::InBound_C::getPort(void) const {
    return port;
}

void AirPurifier::p_AirPurifier_C::InBound_C::setPort(AirPurifier::p_AirPurifier_C* const p_p_AirPurifier_C) {
    _setPort(p_p_AirPurifier_C);
}

void AirPurifier::p_AirPurifier_C::InBound_C::cleanUpRelations(void) {
    if(itsEvHumanPresence_ProxyReceptionInterface != NULL)
        {
            itsEvHumanPresence_ProxyReceptionInterface = NULL;
        }
    if(port != NULL)
        {
            port = NULL;
        }
}

void AirPurifier::p_AirPurifier_C::InBound_C::__setPort(AirPurifier::p_AirPurifier_C* const p_p_AirPurifier_C) {
    port = p_p_AirPurifier_C;
}

void AirPurifier::p_AirPurifier_C::InBound_C::_setPort(AirPurifier::p_AirPurifier_C* const p_p_AirPurifier_C) {
    __setPort(p_p_AirPurifier_C);
}

void AirPurifier::p_AirPurifier_C::InBound_C::_clearPort(void) {
    port = NULL;
}

AirPurifier::p_AirPurifier_C::OutBound_C::OutBound_C(void) : double_airQualityPPM_ProxyFlowPropertyInterface(), itsDouble_airQualityPPM_ProxyFlowPropertyInterface(NULL) {
}

AirPurifier::p_AirPurifier_C::OutBound_C::~OutBound_C(void) {
    cleanUpRelations();
}

void AirPurifier::p_AirPurifier_C::OutBound_C::setAirQualityPPM(double p_airQualityPPM) {
    
    if (itsDouble_airQualityPPM_ProxyFlowPropertyInterface != NULL) {
        itsDouble_airQualityPPM_ProxyFlowPropertyInterface->setAirQualityPPM(p_airQualityPPM);
    }
    
}

void AirPurifier::p_AirPurifier_C::OutBound_C::setItsDouble_airQualityPPM_ProxyFlowPropertyInterface(double_airQualityPPM_ProxyFlowPropertyInterface* const p_double_airQualityPPM_ProxyFlowPropertyInterface) {
    itsDouble_airQualityPPM_ProxyFlowPropertyInterface = p_double_airQualityPPM_ProxyFlowPropertyInterface;
}

void AirPurifier::p_AirPurifier_C::OutBound_C::cleanUpRelations(void) {
    if(itsDouble_airQualityPPM_ProxyFlowPropertyInterface != NULL)
        {
            itsDouble_airQualityPPM_ProxyFlowPropertyInterface = NULL;
        }
}

AirPurifier::p_AirPurifier_C::p_AirPurifier_C(void) : _p_(0) {
    initRelations();
}

AirPurifier::p_AirPurifier_C::~p_AirPurifier_C(void) {
}

void AirPurifier::p_AirPurifier_C::connectAirPurifier(AirPurifier* part) {
    InBound.setItsEvHumanPresence_ProxyReceptionInterface(part);
    InBound.setPort(this); // for IS_PORT macro support
    
}

double_airQualityPPM_ProxyFlowPropertyInterface* AirPurifier::p_AirPurifier_C::getItsDouble_airQualityPPM_ProxyFlowPropertyInterface(void) {
    return &OutBound;
}

evHumanPresence_ProxyReceptionInterface* AirPurifier::p_AirPurifier_C::getItsEvHumanPresence_ProxyReceptionInterface(void) {
    return &InBound;
}

void AirPurifier::p_AirPurifier_C::setItsDouble_airQualityPPM_ProxyFlowPropertyInterface(double_airQualityPPM_ProxyFlowPropertyInterface* const p_double_airQualityPPM_ProxyFlowPropertyInterface) {
    OutBound.setItsDouble_airQualityPPM_ProxyFlowPropertyInterface(p_double_airQualityPPM_ProxyFlowPropertyInterface);
}

void AirPurifier::p_AirPurifier_C::setItsEvHumanPresence_ProxyReceptionInterface(evHumanPresence_ProxyReceptionInterface* const p_evHumanPresence_ProxyReceptionInterface) {
    InBound.setItsEvHumanPresence_ProxyReceptionInterface(p_evHumanPresence_ProxyReceptionInterface);
}

AirPurifier::p_AirPurifier_C::InBound_C* AirPurifier::p_AirPurifier_C::getInBound(void) const {
    return (AirPurifier::p_AirPurifier_C::InBound_C*) &InBound;
}

AirPurifier::p_AirPurifier_C::OutBound_C* AirPurifier::p_AirPurifier_C::getOutBound(void) const {
    return (AirPurifier::p_AirPurifier_C::OutBound_C*) &OutBound;
}

void AirPurifier::p_AirPurifier_C::initRelations(void) {
    InBound._setPort(this);
}

void AirPurifier::p_AirPurifier_C::destroy(void) {
}
//#]

AirPurifier::AirPurifier(IOxfActive* const theActiveContext) : double_airQualityPPM_ProxyFlowPropertyInterface(), evHumanPresence_ProxyReceptionInterface(), airQualityPPM(900), desiredAQPPM(350), purifyRatePerSec(20), systemOperational(true), itsAirQualitySensor(NULL), itsSmartRoomSystem(NULL) {
    NOTIFY_REACTIVE_CONSTRUCTOR(AirPurifier, AirPurifier(), 0, SYSTEM_ANALYSIS_SYSTEM_CONTEXT_SYSTEM_CONTEXT_AIR_PURIFIER_AirPurifier_AirPurifier_SERIALIZE);
    setActiveContext(theActiveContext, false);
    initRelations();
    initStatechart();
}

AirPurifier::~AirPurifier(void) {
    NOTIFY_DESTRUCTOR(~AirPurifier, true);
    cleanUpRelations();
    cancelTimeouts();
}

void AirPurifier::indicateSystemStatus(void) {
    NOTIFY_OPERATION(indicateSystemStatus, indicateSystemStatus(), 0, SYSTEM_ANALYSIS_SYSTEM_CONTEXT_SYSTEM_CONTEXT_AIR_PURIFIER_AirPurifier_indicateSystemStatus_SERIALIZE);
    //#[ operation indicateSystemStatus()
    std::cout << "System Operational: " << systemOperational << "\n";
    //#]
}

void AirPurifier::printAirQuality(void) {
    NOTIFY_OPERATION(printAirQuality, printAirQuality(), 0, SYSTEM_ANALYSIS_SYSTEM_CONTEXT_SYSTEM_CONTEXT_AIR_PURIFIER_AirPurifier_printAirQuality_SERIALIZE);
    //#[ operation printAirQuality()
    std::cout << "Air Quality: " << airQualityPPM << "\n";
    //#]
}

void AirPurifier::purifyAir(void) {
    NOTIFY_OPERATION(purifyAir, purifyAir(), 0, SYSTEM_ANALYSIS_SYSTEM_CONTEXT_SYSTEM_CONTEXT_AIR_PURIFIER_AirPurifier_purifyAir_SERIALIZE);
    //#[ operation purifyAir()
    if (airQualityPPM > desiredAQPPM) {
    	airQualityPPM -= purifyRatePerSec;
    }
    //#]
}

void AirPurifier::systemCheck(void) {
    NOTIFY_OPERATION(systemCheck, systemCheck(), 0, SYSTEM_ANALYSIS_SYSTEM_CONTEXT_SYSTEM_CONTEXT_AIR_PURIFIER_AirPurifier_systemCheck_SERIALIZE);
    //#[ operation systemCheck()
    if (!systemOperational) {
    	std::cout << "System Error\n";
    } 
    else if (systemOperational) {
    	std::cout << "System Ready\n";
    }
    //#]
}

AirPurifier::p_AirQualitySensor_C* AirPurifier::getP_AirQualitySensor(void) const {
    return (AirPurifier::p_AirQualitySensor_C*) &p_AirQualitySensor;
}

AirPurifier::p_AirQualitySensor_C* AirPurifier::get_p_AirQualitySensor(void) const {
    return (AirPurifier::p_AirQualitySensor_C*) &p_AirQualitySensor;
}

AirPurifier::p_AirPurifier_C* AirPurifier::getP_AirPurifier(void) const {
    return (AirPurifier::p_AirPurifier_C*) &p_AirPurifier;
}

AirPurifier::p_AirPurifier_C* AirPurifier::get_p_AirPurifier(void) const {
    return (AirPurifier::p_AirPurifier_C*) &p_AirPurifier;
}

const double AirPurifier::getAirQualityPPM(void) const {
    return airQualityPPM;
}

const double AirPurifier::getDesiredAQPPM(void) const {
    return desiredAQPPM;
}

void AirPurifier::setDesiredAQPPM(const double p_desiredAQPPM) {
    desiredAQPPM = p_desiredAQPPM;
}

const double AirPurifier::getPurifyRatePerSec(void) const {
    return purifyRatePerSec;
}

void AirPurifier::setPurifyRatePerSec(const double p_purifyRatePerSec) {
    purifyRatePerSec = p_purifyRatePerSec;
}

const bool AirPurifier::getSystemOperational(void) const {
    return systemOperational;
}

void AirPurifier::setSystemOperational(const bool p_systemOperational) {
    systemOperational = p_systemOperational;
}

const AirQualitySensor* AirPurifier::getItsAirQualitySensor(void) const {
    return itsAirQualitySensor;
}

void AirPurifier::setItsAirQualitySensor(AirQualitySensor* const p_AirQualitySensor) {
    if(p_AirQualitySensor != NULL)
        {
            p_AirQualitySensor->_setItsAirPurifier(this);
        }
    _setItsAirQualitySensor(p_AirQualitySensor);
}

const SmartRoomSystem* AirPurifier::getItsSmartRoomSystem(void) const {
    return itsSmartRoomSystem;
}

void AirPurifier::setItsSmartRoomSystem(SmartRoomSystem* const p_SmartRoomSystem) {
    if(p_SmartRoomSystem != NULL)
        {
            p_SmartRoomSystem->_setItsAirPurifier_1(this);
        }
    _setItsSmartRoomSystem(p_SmartRoomSystem);
}

bool AirPurifier::cancelTimeout(const IOxfTimeout* arg) {
    bool res = false;
    if(On_timeout == arg)
        {
            On_timeout = NULL;
            res = true;
        }
    return res;
}

bool AirPurifier::startBehavior(void) {
    bool done = false;
    done = OMReactive::startBehavior();
    return done;
}

void AirPurifier::initRelations(void) {
    if (get_p_AirQualitySensor() != NULL) {
        get_p_AirQualitySensor()->connectAirPurifier(this);
    }
    if (get_p_AirPurifier() != NULL) {
        get_p_AirPurifier()->connectAirPurifier(this);
    }
}

void AirPurifier::initStatechart(void) {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
    On_subState = OMNonState;
    On_lastState = OMNonState;
    On_timeout = NULL;
}

void AirPurifier::cleanUpRelations(void) {
    if(itsAirQualitySensor != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsAirQualitySensor");
            const AirPurifier* p_AirPurifier = itsAirQualitySensor->getItsAirPurifier();
            if(p_AirPurifier != NULL)
                {
                    itsAirQualitySensor->__setItsAirPurifier(NULL);
                }
            itsAirQualitySensor = NULL;
        }
    if(itsSmartRoomSystem != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsSmartRoomSystem");
            const AirPurifier* p_AirPurifier = itsSmartRoomSystem->getItsAirPurifier_1();
            if(p_AirPurifier != NULL)
                {
                    itsSmartRoomSystem->__setItsAirPurifier_1(NULL);
                }
            itsSmartRoomSystem = NULL;
        }
}

void AirPurifier::cancelTimeouts(void) {
    cancel(On_timeout);
}

void AirPurifier::__setItsAirQualitySensor(AirQualitySensor* const p_AirQualitySensor) {
    itsAirQualitySensor = p_AirQualitySensor;
    if(p_AirQualitySensor != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsAirQualitySensor", p_AirQualitySensor, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsAirQualitySensor");
        }
}

void AirPurifier::_setItsAirQualitySensor(AirQualitySensor* const p_AirQualitySensor) {
    if(itsAirQualitySensor != NULL)
        {
            itsAirQualitySensor->__setItsAirPurifier(NULL);
        }
    __setItsAirQualitySensor(p_AirQualitySensor);
}

void AirPurifier::_clearItsAirQualitySensor(void) {
    NOTIFY_RELATION_CLEARED("itsAirQualitySensor");
    itsAirQualitySensor = NULL;
}

void AirPurifier::__setItsSmartRoomSystem(SmartRoomSystem* const p_SmartRoomSystem) {
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

void AirPurifier::_setItsSmartRoomSystem(SmartRoomSystem* const p_SmartRoomSystem) {
    if(itsSmartRoomSystem != NULL)
        {
            itsSmartRoomSystem->__setItsAirPurifier_1(NULL);
        }
    __setItsSmartRoomSystem(p_SmartRoomSystem);
}

void AirPurifier::_clearItsSmartRoomSystem(void) {
    NOTIFY_RELATION_CLEARED("itsSmartRoomSystem");
    itsSmartRoomSystem = NULL;
}

//#[ ignore
void AirPurifier::setAirQualityPPM(double p_airQualityPPM) {
    if (airQualityPPM != p_airQualityPPM) {
        airQualityPPM = p_airQualityPPM;
        FLOW_DATA_RECEIVE("airQualityPPM", airQualityPPM, x2String);
        FLOW_DATA_SEND(airQualityPPM, p_AirPurifier, setAirQualityPPM, x2String);
    }
    
}
//#]

IOxfReactive::TakeEventStatus AirPurifier::SystemCheck_handleEvent(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(OMNullEventId) == 1)
        {
            //## transition 2 
            if(systemOperational)
                {
                    NOTIFY_TRANSITION_STARTED("0");
                    NOTIFY_TRANSITION_STARTED("2");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.SystemCheck");
                    //#[ transition 2 
                    indicateSystemStatus();
                    //#]
                    On_entDef();
                    NOTIFY_TRANSITION_TERMINATED("2");
                    NOTIFY_TRANSITION_TERMINATED("0");
                    res = eventConsumed;
                }
            else
                {
                    NOTIFY_TRANSITION_STARTED("0");
                    NOTIFY_TRANSITION_STARTED("1");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.SystemCheck");
                    //#[ transition 1 
                    indicateSystemStatus();
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.SystemFault");
                    rootState_subState = SystemFault;
                    rootState_active = SystemFault;
                    NOTIFY_TRANSITION_TERMINATED("1");
                    NOTIFY_TRANSITION_TERMINATED("0");
                    res = eventConsumed;
                }
        }
    
    return res;
}

void AirPurifier::On_entDef(void) {
    NOTIFY_STATE_ENTERED("ROOT.On");
    pushNullTransition();
    rootState_subState = On;
    //#[ state On.(Entry) 
    std::cout << "Purifying ...\n";
    //#]
    OnEntDef();
}

void AirPurifier::OnEntDef(void) {
    NOTIFY_TRANSITION_STARTED("4");
    On_entShallowHist();
    NOTIFY_TRANSITION_TERMINATED("4");
}

void AirPurifier::On_exit(void) {
    On_lastState = On_subState;
    popNullTransition();
    // State Purifying
    if(On_subState == Purifying)
        {
            cancel(On_timeout);
            NOTIFY_STATE_EXITED("ROOT.On.Purifying");
            On_lastState = Purifying;
        }
    On_subState = OMNonState;
    
    NOTIFY_STATE_EXITED("ROOT.On");
}

void AirPurifier::On_entShallowHist(void) {
    if(On_lastState == OMNonState)
        {
            NOTIFY_TRANSITION_STARTED("5");
            NOTIFY_STATE_ENTERED("ROOT.On.Purifying");
            On_subState = Purifying;
            rootState_active = Purifying;
            On_timeout = scheduleTimeout(1000, "ROOT.On.Purifying");
            NOTIFY_TRANSITION_TERMINATED("5");
        }
    else
        {
            On_subState = On_lastState;
            if(On_subState == Purifying)
                {
                    NOTIFY_STATE_ENTERED("ROOT.On.Purifying");
                    On_subState = Purifying;
                    rootState_active = Purifying;
                    On_timeout = scheduleTimeout(1000, "ROOT.On.Purifying");
                }
        }
}

IOxfReactive::TakeEventStatus AirPurifier::On_handleEvent(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(OMNullEventId) == 1)
        {
            //## transition 7 
            if(airQualityPPM <= desiredAQPPM)
                {
                    NOTIFY_TRANSITION_STARTED("7");
                    On_exit();
                    //#[ transition 7 
                    printAirQuality();
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.Off");
                    rootState_subState = Off;
                    rootState_active = Off;
                    NOTIFY_TRANSITION_TERMINATED("7");
                    res = eventConsumed;
                }
        }
    
    return res;
}

void AirPurifier::rootState_entDef(void) {
    {
        NOTIFY_STATE_ENTERED("ROOT");
        NOTIFY_TRANSITION_STARTED("8");
        NOTIFY_STATE_ENTERED("ROOT.Off");
        rootState_subState = Off;
        rootState_active = Off;
        NOTIFY_TRANSITION_TERMINATED("8");
    }
}

IOxfReactive::TakeEventStatus AirPurifier::rootState_processEvent(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (rootState_active) {
        // State Off
        case Off:
        {
            if(IS_EVENT_TYPE_OF(evHumanPresence_SYSTEM_CONTEXT_SYSTEM_ANALYSIS_id) == 1)
                {
                    NOTIFY_TRANSITION_STARTED("9");
                    NOTIFY_STATE_EXITED("ROOT.Off");
                    NOTIFY_STATE_ENTERED("ROOT.SystemCheck");
                    pushNullTransition();
                    rootState_subState = SystemCheck;
                    rootState_active = SystemCheck;
                    //#[ state SystemCheck.(Entry) 
                    systemCheck();
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("9");
                    res = eventConsumed;
                }
            
        }
        break;
        // State SystemCheck
        case SystemCheck:
        {
            res = SystemCheck_handleEvent();
        }
        break;
        // State SystemFault
        case SystemFault:
        {
            if(IS_EVENT_TYPE_OF(evFaultClear_SYSTEM_CONTEXT_AIR_PURIFIER_SYSTEM_CONTEXT_SYSTEM_ANALYSIS_id) == 1)
                {
                    NOTIFY_TRANSITION_STARTED("3");
                    NOTIFY_STATE_EXITED("ROOT.SystemFault");
                    NOTIFY_STATE_ENTERED("ROOT.Off");
                    rootState_subState = Off;
                    rootState_active = Off;
                    NOTIFY_TRANSITION_TERMINATED("3");
                    res = eventConsumed;
                }
            
        }
        break;
        // State Purifying
        case Purifying:
        {
            if(IS_EVENT_TYPE_OF(OMTimeoutEventId) == 1)
                {
                    if(getCurrentEvent() == On_timeout)
                        {
                            NOTIFY_TRANSITION_STARTED("6");
                            cancel(On_timeout);
                            NOTIFY_STATE_EXITED("ROOT.On.Purifying");
                            //#[ transition 6 
                            purifyAir();
                            //#]
                            NOTIFY_STATE_ENTERED("ROOT.On.Purifying");
                            On_subState = Purifying;
                            rootState_active = Purifying;
                            On_timeout = scheduleTimeout(1000, "ROOT.On.Purifying");
                            NOTIFY_TRANSITION_TERMINATED("6");
                            res = eventConsumed;
                        }
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
void OMAnimatedAirPurifier::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("airQualityPPM", x2String(myReal->airQualityPPM));
    aomsAttributes->addAttribute("desiredAQPPM", x2String(myReal->desiredAQPPM));
    aomsAttributes->addAttribute("systemOperational", x2String(myReal->systemOperational));
    aomsAttributes->addAttribute("purifyRatePerSec", x2String(myReal->purifyRatePerSec));
}

void OMAnimatedAirPurifier::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsAirQualitySensor", false, true);
    if(myReal->itsAirQualitySensor)
        {
            aomsRelations->ADD_ITEM(myReal->itsAirQualitySensor);
        }
    aomsRelations->addRelation("itsSmartRoomSystem", false, true);
    if(myReal->itsSmartRoomSystem)
        {
            aomsRelations->ADD_ITEM(myReal->itsSmartRoomSystem);
        }
}

void OMAnimatedAirPurifier::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
    switch (myReal->rootState_subState) {
        case AirPurifier::Off:
        {
            Off_serializeStates(aomsState);
        }
        break;
        case AirPurifier::SystemCheck:
        {
            SystemCheck_serializeStates(aomsState);
        }
        break;
        case AirPurifier::SystemFault:
        {
            SystemFault_serializeStates(aomsState);
        }
        break;
        case AirPurifier::On:
        {
            On_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedAirPurifier::SystemFault_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.SystemFault");
}

void OMAnimatedAirPurifier::SystemCheck_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.SystemCheck");
}

void OMAnimatedAirPurifier::On_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.On");
    if(myReal->On_subState == AirPurifier::Purifying)
        {
            Purifying_serializeStates(aomsState);
        }
}

void OMAnimatedAirPurifier::Purifying_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.On.Purifying");
}

void OMAnimatedAirPurifier::Off_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Off");
}
//#]

IMPLEMENT_REACTIVE_META_P(AirPurifier, SYSTEM_ANALYSIS_SYSTEM_CONTEXT_SYSTEM_CONTEXT_AIR_PURIFIER, SYSTEM_ANALYSIS::SYSTEM_CONTEXT::SYSTEM_CONTEXT_AIR_PURIFIER, false, OMAnimatedAirPurifier)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\AirPurifier.cpp
*********************************************************************/
