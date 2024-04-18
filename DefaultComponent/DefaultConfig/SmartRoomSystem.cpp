/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20174215
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: SmartRoomSystem
//!	Generated Date	: Thu, 18, Apr 2024  
	File Path	: DefaultComponent\DefaultConfig\SmartRoomSystem.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "SmartRoomSystem.h"
//## link itsAirPurifier
#include "AirPurifier.h"
//## link itsFireSprinklerSystem
#include "FireSprinklerSystem.h"
//## link itsHVAC
#include "HVAC.h"
//## link itsNaturalEnvironment
#include "NaturalEnvironment.h"
//## link itsRoomSchedularSystem
#include "RoomSchedularSystem.h"
//## link itsRoomUser
#include "RoomUser.h"
//## link itsSecurityAndAccesSystem
#include "SecurityAndAccesSystem.h"
//## link itsStakeholders
#include "Stakeholders.h"
//## link itsStandards
#include "Standards.h"
//## link itsTemperatureSensor
#include "TemperatureSensor.h"
//#[ ignore
#define SYSTEM_ANALYSIS_SYSTEM_CONTEXT_SmartRoomSystem_SmartRoomSystem_SERIALIZE OM_NO_OP
//#]

//## package SYSTEM_ANALYSIS::SYSTEM_CONTEXT

//## class SmartRoomSystem
//#[ ignore
SmartRoomSystem::p_SmartRoomSystem_C::p_SmartRoomSystem_C(void) : int_currentTemp_ProxyFlowPropertyInterface(), _p_(0), itsInt_currentTemp_ProxyFlowPropertyInterface(NULL) {
}

SmartRoomSystem::p_SmartRoomSystem_C::~p_SmartRoomSystem_C(void) {
    cleanUpRelations();
}

void SmartRoomSystem::p_SmartRoomSystem_C::connectSmartRoomSystem(SmartRoomSystem* part) {
    setItsInt_currentTemp_ProxyFlowPropertyInterface(part);
    
}

int_currentTemp_ProxyFlowPropertyInterface* SmartRoomSystem::p_SmartRoomSystem_C::getItsInt_currentTemp_ProxyFlowPropertyInterface(void) {
    return this;
}

void SmartRoomSystem::p_SmartRoomSystem_C::setCurrentTemp(int p_currentTemp) {
    
    if (itsInt_currentTemp_ProxyFlowPropertyInterface != NULL) {
        itsInt_currentTemp_ProxyFlowPropertyInterface->setCurrentTemp(p_currentTemp);
    }
    
}

void SmartRoomSystem::p_SmartRoomSystem_C::setItsInt_currentTemp_ProxyFlowPropertyInterface(int_currentTemp_ProxyFlowPropertyInterface* const p_int_currentTemp_ProxyFlowPropertyInterface) {
    itsInt_currentTemp_ProxyFlowPropertyInterface = p_int_currentTemp_ProxyFlowPropertyInterface;
}

void SmartRoomSystem::p_SmartRoomSystem_C::cleanUpRelations(void) {
    if(itsInt_currentTemp_ProxyFlowPropertyInterface != NULL)
        {
            itsInt_currentTemp_ProxyFlowPropertyInterface = NULL;
        }
}
//#]

SmartRoomSystem::SmartRoomSystem(void) : int_currentTemp_ProxyFlowPropertyInterface(), currentTemp(15), desiredTemp(20), itsAirPurifier(NULL), itsFireSprinklerSystem(NULL), itsHVAC(NULL), itsNaturalEnvironment(NULL), itsRoomSchedularSystem(NULL), itsRoomUser(NULL), itsSecurityAndAccesSystem(NULL), itsStakeholders(NULL), itsStandards(NULL), itsTemperatureSensor(NULL) {
    NOTIFY_CONSTRUCTOR(SmartRoomSystem, SmartRoomSystem(), 0, SYSTEM_ANALYSIS_SYSTEM_CONTEXT_SmartRoomSystem_SmartRoomSystem_SERIALIZE);
    initRelations();
}

SmartRoomSystem::~SmartRoomSystem(void) {
    NOTIFY_DESTRUCTOR(~SmartRoomSystem, true);
    cleanUpRelations();
}

//#[ ignore
void SmartRoomSystem::setCurrentTemp(int p_currentTemp) {
    if (currentTemp != p_currentTemp) {
        currentTemp = p_currentTemp;
        FLOW_DATA_RECEIVE("currentTemp", currentTemp, x2String);
    }
    
}
//#]

SmartRoomSystem::p_SmartRoomSystem_C* SmartRoomSystem::getP_SmartRoomSystem(void) const {
    return (SmartRoomSystem::p_SmartRoomSystem_C*) &p_SmartRoomSystem;
}

SmartRoomSystem::p_SmartRoomSystem_C* SmartRoomSystem::get_p_SmartRoomSystem(void) const {
    return (SmartRoomSystem::p_SmartRoomSystem_C*) &p_SmartRoomSystem;
}

const int SmartRoomSystem::getCurrentTemp(void) const {
    return currentTemp;
}

const int SmartRoomSystem::getDesiredTemp(void) const {
    return desiredTemp;
}

void SmartRoomSystem::setDesiredTemp(const int p_desiredTemp) {
    desiredTemp = p_desiredTemp;
}

const AirPurifier* SmartRoomSystem::getItsAirPurifier(void) const {
    return itsAirPurifier;
}

void SmartRoomSystem::setItsAirPurifier(AirPurifier* const p_AirPurifier) {
    if(p_AirPurifier != NULL)
        {
            p_AirPurifier->_setItsSmartRoomSystem(this);
        }
    _setItsAirPurifier(p_AirPurifier);
}

const FireSprinklerSystem* SmartRoomSystem::getItsFireSprinklerSystem(void) const {
    return itsFireSprinklerSystem;
}

void SmartRoomSystem::setItsFireSprinklerSystem(FireSprinklerSystem* const p_FireSprinklerSystem) {
    if(p_FireSprinklerSystem != NULL)
        {
            p_FireSprinklerSystem->_setItsSmartRoomSystem(this);
        }
    _setItsFireSprinklerSystem(p_FireSprinklerSystem);
}

const HVAC* SmartRoomSystem::getItsHVAC(void) const {
    return itsHVAC;
}

void SmartRoomSystem::setItsHVAC(HVAC* const p_HVAC) {
    if(p_HVAC != NULL)
        {
            p_HVAC->_setItsSmartRoomSystem(this);
        }
    _setItsHVAC(p_HVAC);
}

const NaturalEnvironment* SmartRoomSystem::getItsNaturalEnvironment(void) const {
    return itsNaturalEnvironment;
}

void SmartRoomSystem::setItsNaturalEnvironment(NaturalEnvironment* const p_NaturalEnvironment) {
    if(p_NaturalEnvironment != NULL)
        {
            p_NaturalEnvironment->_setItsSmartRoomSystem(this);
        }
    _setItsNaturalEnvironment(p_NaturalEnvironment);
}

const RoomSchedularSystem* SmartRoomSystem::getItsRoomSchedularSystem(void) const {
    return itsRoomSchedularSystem;
}

void SmartRoomSystem::setItsRoomSchedularSystem(RoomSchedularSystem* const p_RoomSchedularSystem) {
    if(p_RoomSchedularSystem != NULL)
        {
            p_RoomSchedularSystem->_setItsSmartRoomSystem(this);
        }
    _setItsRoomSchedularSystem(p_RoomSchedularSystem);
}

const RoomUser* SmartRoomSystem::getItsRoomUser(void) const {
    return itsRoomUser;
}

void SmartRoomSystem::setItsRoomUser(RoomUser* const p_RoomUser) {
    if(p_RoomUser != NULL)
        {
            p_RoomUser->_setItsSmartRoomSystem(this);
        }
    _setItsRoomUser(p_RoomUser);
}

const SecurityAndAccesSystem* SmartRoomSystem::getItsSecurityAndAccesSystem(void) const {
    return itsSecurityAndAccesSystem;
}

void SmartRoomSystem::setItsSecurityAndAccesSystem(SecurityAndAccesSystem* const p_SecurityAndAccesSystem) {
    if(p_SecurityAndAccesSystem != NULL)
        {
            p_SecurityAndAccesSystem->_setItsSmartRoomSystem(this);
        }
    _setItsSecurityAndAccesSystem(p_SecurityAndAccesSystem);
}

const Stakeholders* SmartRoomSystem::getItsStakeholders(void) const {
    return itsStakeholders;
}

void SmartRoomSystem::setItsStakeholders(Stakeholders* const p_Stakeholders) {
    if(p_Stakeholders != NULL)
        {
            p_Stakeholders->_setItsSmartRoomSystem(this);
        }
    _setItsStakeholders(p_Stakeholders);
}

const Standards* SmartRoomSystem::getItsStandards(void) const {
    return itsStandards;
}

void SmartRoomSystem::setItsStandards(Standards* const p_Standards) {
    if(p_Standards != NULL)
        {
            p_Standards->_setItsSmartRoomSystem(this);
        }
    _setItsStandards(p_Standards);
}

const TemperatureSensor* SmartRoomSystem::getItsTemperatureSensor(void) const {
    return itsTemperatureSensor;
}

void SmartRoomSystem::setItsTemperatureSensor(TemperatureSensor* const p_TemperatureSensor) {
    if(p_TemperatureSensor != NULL)
        {
            p_TemperatureSensor->_setItsSmartRoomSystem(this);
        }
    _setItsTemperatureSensor(p_TemperatureSensor);
}

void SmartRoomSystem::initRelations(void) {
    if (get_p_SmartRoomSystem() != NULL) {
        get_p_SmartRoomSystem()->connectSmartRoomSystem(this);
    }
}

void SmartRoomSystem::cleanUpRelations(void) {
    if(itsAirPurifier != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsAirPurifier");
            const SmartRoomSystem* p_SmartRoomSystem = itsAirPurifier->getItsSmartRoomSystem();
            if(p_SmartRoomSystem != NULL)
                {
                    itsAirPurifier->__setItsSmartRoomSystem(NULL);
                }
            itsAirPurifier = NULL;
        }
    if(itsFireSprinklerSystem != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsFireSprinklerSystem");
            const SmartRoomSystem* p_SmartRoomSystem = itsFireSprinklerSystem->getItsSmartRoomSystem();
            if(p_SmartRoomSystem != NULL)
                {
                    itsFireSprinklerSystem->__setItsSmartRoomSystem(NULL);
                }
            itsFireSprinklerSystem = NULL;
        }
    if(itsHVAC != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsHVAC");
            const SmartRoomSystem* p_SmartRoomSystem = itsHVAC->getItsSmartRoomSystem();
            if(p_SmartRoomSystem != NULL)
                {
                    itsHVAC->__setItsSmartRoomSystem(NULL);
                }
            itsHVAC = NULL;
        }
    if(itsNaturalEnvironment != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsNaturalEnvironment");
            const SmartRoomSystem* p_SmartRoomSystem = itsNaturalEnvironment->getItsSmartRoomSystem();
            if(p_SmartRoomSystem != NULL)
                {
                    itsNaturalEnvironment->__setItsSmartRoomSystem(NULL);
                }
            itsNaturalEnvironment = NULL;
        }
    if(itsRoomSchedularSystem != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsRoomSchedularSystem");
            const SmartRoomSystem* p_SmartRoomSystem = itsRoomSchedularSystem->getItsSmartRoomSystem();
            if(p_SmartRoomSystem != NULL)
                {
                    itsRoomSchedularSystem->__setItsSmartRoomSystem(NULL);
                }
            itsRoomSchedularSystem = NULL;
        }
    if(itsRoomUser != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsRoomUser");
            const SmartRoomSystem* p_SmartRoomSystem = itsRoomUser->getItsSmartRoomSystem();
            if(p_SmartRoomSystem != NULL)
                {
                    itsRoomUser->__setItsSmartRoomSystem(NULL);
                }
            itsRoomUser = NULL;
        }
    if(itsSecurityAndAccesSystem != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsSecurityAndAccesSystem");
            const SmartRoomSystem* p_SmartRoomSystem = itsSecurityAndAccesSystem->getItsSmartRoomSystem();
            if(p_SmartRoomSystem != NULL)
                {
                    itsSecurityAndAccesSystem->__setItsSmartRoomSystem(NULL);
                }
            itsSecurityAndAccesSystem = NULL;
        }
    if(itsStakeholders != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsStakeholders");
            const SmartRoomSystem* p_SmartRoomSystem = itsStakeholders->getItsSmartRoomSystem();
            if(p_SmartRoomSystem != NULL)
                {
                    itsStakeholders->__setItsSmartRoomSystem(NULL);
                }
            itsStakeholders = NULL;
        }
    if(itsStandards != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsStandards");
            const SmartRoomSystem* p_SmartRoomSystem = itsStandards->getItsSmartRoomSystem();
            if(p_SmartRoomSystem != NULL)
                {
                    itsStandards->__setItsSmartRoomSystem(NULL);
                }
            itsStandards = NULL;
        }
    if(itsTemperatureSensor != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsTemperatureSensor");
            const SmartRoomSystem* p_SmartRoomSystem = itsTemperatureSensor->getItsSmartRoomSystem();
            if(p_SmartRoomSystem != NULL)
                {
                    itsTemperatureSensor->__setItsSmartRoomSystem(NULL);
                }
            itsTemperatureSensor = NULL;
        }
}

void SmartRoomSystem::__setItsAirPurifier(AirPurifier* const p_AirPurifier) {
    itsAirPurifier = p_AirPurifier;
    if(p_AirPurifier != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsAirPurifier", p_AirPurifier, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsAirPurifier");
        }
}

void SmartRoomSystem::_setItsAirPurifier(AirPurifier* const p_AirPurifier) {
    if(itsAirPurifier != NULL)
        {
            itsAirPurifier->__setItsSmartRoomSystem(NULL);
        }
    __setItsAirPurifier(p_AirPurifier);
}

void SmartRoomSystem::_clearItsAirPurifier(void) {
    NOTIFY_RELATION_CLEARED("itsAirPurifier");
    itsAirPurifier = NULL;
}

void SmartRoomSystem::__setItsFireSprinklerSystem(FireSprinklerSystem* const p_FireSprinklerSystem) {
    itsFireSprinklerSystem = p_FireSprinklerSystem;
    if(p_FireSprinklerSystem != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsFireSprinklerSystem", p_FireSprinklerSystem, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsFireSprinklerSystem");
        }
}

void SmartRoomSystem::_setItsFireSprinklerSystem(FireSprinklerSystem* const p_FireSprinklerSystem) {
    if(itsFireSprinklerSystem != NULL)
        {
            itsFireSprinklerSystem->__setItsSmartRoomSystem(NULL);
        }
    __setItsFireSprinklerSystem(p_FireSprinklerSystem);
}

void SmartRoomSystem::_clearItsFireSprinklerSystem(void) {
    NOTIFY_RELATION_CLEARED("itsFireSprinklerSystem");
    itsFireSprinklerSystem = NULL;
}

void SmartRoomSystem::__setItsHVAC(HVAC* const p_HVAC) {
    itsHVAC = p_HVAC;
    if(p_HVAC != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsHVAC", p_HVAC, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsHVAC");
        }
}

void SmartRoomSystem::_setItsHVAC(HVAC* const p_HVAC) {
    if(itsHVAC != NULL)
        {
            itsHVAC->__setItsSmartRoomSystem(NULL);
        }
    __setItsHVAC(p_HVAC);
}

void SmartRoomSystem::_clearItsHVAC(void) {
    NOTIFY_RELATION_CLEARED("itsHVAC");
    itsHVAC = NULL;
}

void SmartRoomSystem::__setItsNaturalEnvironment(NaturalEnvironment* const p_NaturalEnvironment) {
    itsNaturalEnvironment = p_NaturalEnvironment;
    if(p_NaturalEnvironment != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsNaturalEnvironment", p_NaturalEnvironment, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsNaturalEnvironment");
        }
}

void SmartRoomSystem::_setItsNaturalEnvironment(NaturalEnvironment* const p_NaturalEnvironment) {
    if(itsNaturalEnvironment != NULL)
        {
            itsNaturalEnvironment->__setItsSmartRoomSystem(NULL);
        }
    __setItsNaturalEnvironment(p_NaturalEnvironment);
}

void SmartRoomSystem::_clearItsNaturalEnvironment(void) {
    NOTIFY_RELATION_CLEARED("itsNaturalEnvironment");
    itsNaturalEnvironment = NULL;
}

void SmartRoomSystem::__setItsRoomSchedularSystem(RoomSchedularSystem* const p_RoomSchedularSystem) {
    itsRoomSchedularSystem = p_RoomSchedularSystem;
    if(p_RoomSchedularSystem != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsRoomSchedularSystem", p_RoomSchedularSystem, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsRoomSchedularSystem");
        }
}

void SmartRoomSystem::_setItsRoomSchedularSystem(RoomSchedularSystem* const p_RoomSchedularSystem) {
    if(itsRoomSchedularSystem != NULL)
        {
            itsRoomSchedularSystem->__setItsSmartRoomSystem(NULL);
        }
    __setItsRoomSchedularSystem(p_RoomSchedularSystem);
}

void SmartRoomSystem::_clearItsRoomSchedularSystem(void) {
    NOTIFY_RELATION_CLEARED("itsRoomSchedularSystem");
    itsRoomSchedularSystem = NULL;
}

void SmartRoomSystem::__setItsRoomUser(RoomUser* const p_RoomUser) {
    itsRoomUser = p_RoomUser;
    if(p_RoomUser != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsRoomUser", p_RoomUser, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsRoomUser");
        }
}

void SmartRoomSystem::_setItsRoomUser(RoomUser* const p_RoomUser) {
    if(itsRoomUser != NULL)
        {
            itsRoomUser->__setItsSmartRoomSystem(NULL);
        }
    __setItsRoomUser(p_RoomUser);
}

void SmartRoomSystem::_clearItsRoomUser(void) {
    NOTIFY_RELATION_CLEARED("itsRoomUser");
    itsRoomUser = NULL;
}

void SmartRoomSystem::__setItsSecurityAndAccesSystem(SecurityAndAccesSystem* const p_SecurityAndAccesSystem) {
    itsSecurityAndAccesSystem = p_SecurityAndAccesSystem;
    if(p_SecurityAndAccesSystem != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsSecurityAndAccesSystem", p_SecurityAndAccesSystem, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsSecurityAndAccesSystem");
        }
}

void SmartRoomSystem::_setItsSecurityAndAccesSystem(SecurityAndAccesSystem* const p_SecurityAndAccesSystem) {
    if(itsSecurityAndAccesSystem != NULL)
        {
            itsSecurityAndAccesSystem->__setItsSmartRoomSystem(NULL);
        }
    __setItsSecurityAndAccesSystem(p_SecurityAndAccesSystem);
}

void SmartRoomSystem::_clearItsSecurityAndAccesSystem(void) {
    NOTIFY_RELATION_CLEARED("itsSecurityAndAccesSystem");
    itsSecurityAndAccesSystem = NULL;
}

void SmartRoomSystem::__setItsStakeholders(Stakeholders* const p_Stakeholders) {
    itsStakeholders = p_Stakeholders;
    if(p_Stakeholders != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsStakeholders", p_Stakeholders, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsStakeholders");
        }
}

void SmartRoomSystem::_setItsStakeholders(Stakeholders* const p_Stakeholders) {
    if(itsStakeholders != NULL)
        {
            itsStakeholders->__setItsSmartRoomSystem(NULL);
        }
    __setItsStakeholders(p_Stakeholders);
}

void SmartRoomSystem::_clearItsStakeholders(void) {
    NOTIFY_RELATION_CLEARED("itsStakeholders");
    itsStakeholders = NULL;
}

void SmartRoomSystem::__setItsStandards(Standards* const p_Standards) {
    itsStandards = p_Standards;
    if(p_Standards != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsStandards", p_Standards, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsStandards");
        }
}

void SmartRoomSystem::_setItsStandards(Standards* const p_Standards) {
    if(itsStandards != NULL)
        {
            itsStandards->__setItsSmartRoomSystem(NULL);
        }
    __setItsStandards(p_Standards);
}

void SmartRoomSystem::_clearItsStandards(void) {
    NOTIFY_RELATION_CLEARED("itsStandards");
    itsStandards = NULL;
}

void SmartRoomSystem::__setItsTemperatureSensor(TemperatureSensor* const p_TemperatureSensor) {
    itsTemperatureSensor = p_TemperatureSensor;
    if(p_TemperatureSensor != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsTemperatureSensor", p_TemperatureSensor, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsTemperatureSensor");
        }
}

void SmartRoomSystem::_setItsTemperatureSensor(TemperatureSensor* const p_TemperatureSensor) {
    if(itsTemperatureSensor != NULL)
        {
            itsTemperatureSensor->__setItsSmartRoomSystem(NULL);
        }
    __setItsTemperatureSensor(p_TemperatureSensor);
}

void SmartRoomSystem::_clearItsTemperatureSensor(void) {
    NOTIFY_RELATION_CLEARED("itsTemperatureSensor");
    itsTemperatureSensor = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedSmartRoomSystem::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("currentTemp", x2String(myReal->currentTemp));
    aomsAttributes->addAttribute("desiredTemp", x2String(myReal->desiredTemp));
}

void OMAnimatedSmartRoomSystem::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsRoomUser", false, true);
    if(myReal->itsRoomUser)
        {
            aomsRelations->ADD_ITEM(myReal->itsRoomUser);
        }
    aomsRelations->addRelation("itsStakeholders", false, true);
    if(myReal->itsStakeholders)
        {
            aomsRelations->ADD_ITEM(myReal->itsStakeholders);
        }
    aomsRelations->addRelation("itsStandards", false, true);
    if(myReal->itsStandards)
        {
            aomsRelations->ADD_ITEM(myReal->itsStandards);
        }
    aomsRelations->addRelation("itsNaturalEnvironment", false, true);
    if(myReal->itsNaturalEnvironment)
        {
            aomsRelations->ADD_ITEM(myReal->itsNaturalEnvironment);
        }
    aomsRelations->addRelation("itsHVAC", false, true);
    if(myReal->itsHVAC)
        {
            aomsRelations->ADD_ITEM(myReal->itsHVAC);
        }
    aomsRelations->addRelation("itsFireSprinklerSystem", false, true);
    if(myReal->itsFireSprinklerSystem)
        {
            aomsRelations->ADD_ITEM(myReal->itsFireSprinklerSystem);
        }
    aomsRelations->addRelation("itsRoomSchedularSystem", false, true);
    if(myReal->itsRoomSchedularSystem)
        {
            aomsRelations->ADD_ITEM(myReal->itsRoomSchedularSystem);
        }
    aomsRelations->addRelation("itsSecurityAndAccesSystem", false, true);
    if(myReal->itsSecurityAndAccesSystem)
        {
            aomsRelations->ADD_ITEM(myReal->itsSecurityAndAccesSystem);
        }
    aomsRelations->addRelation("itsAirPurifier", false, true);
    if(myReal->itsAirPurifier)
        {
            aomsRelations->ADD_ITEM(myReal->itsAirPurifier);
        }
    aomsRelations->addRelation("itsTemperatureSensor", false, true);
    if(myReal->itsTemperatureSensor)
        {
            aomsRelations->ADD_ITEM(myReal->itsTemperatureSensor);
        }
}
//#]

IMPLEMENT_META_P(SmartRoomSystem, SYSTEM_ANALYSIS_SYSTEM_CONTEXT, SYSTEM_ANALYSIS::SYSTEM_CONTEXT, false, OMAnimatedSmartRoomSystem)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\SmartRoomSystem.cpp
*********************************************************************/
