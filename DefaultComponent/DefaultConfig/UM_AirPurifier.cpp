/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20235614
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: UM_AirPurifier
//!	Generated Date	: Fri, 19, Apr 2024  
	File Path	: DefaultComponent\DefaultConfig\UM_AirPurifier.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "UM_AirPurifier.h"
//## classInstance itsAirPurifier
#include "AirPurifier.h"
//## classInstance itsAirQualitySensor
#include "AirQualitySensor.h"
//## classInstance itsSmartRoomSystem2
#include "SmartRoomSystem.h"
//## package SYSTEM_ANALYSIS::USER_MODEL::UM_AirPurifier


//## classInstance itsAirPurifier
AirPurifier itsAirPurifier;

//## classInstance itsAirQualitySensor
AirQualitySensor itsAirQualitySensor;

//## classInstance itsSmartRoomSystem2
SmartRoomSystem itsSmartRoomSystem2;

#ifdef _OMINSTRUMENT
static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */);

static void RenameGlobalInstances(void);

IMPLEMENT_META_PACKAGE(SYSTEM_ANALYSIS_USER_MODEL_UM_AirPurifier, SYSTEM_ANALYSIS::USER_MODEL::UM_AirPurifier)
#endif // _OMINSTRUMENT

void UM_AirPurifier_initRelations(void) {
    {
        {
            itsAirPurifier.setShouldDelete(false);
        }
        {
            itsSmartRoomSystem2.setShouldDelete(false);
        }
    }
    {
        
        itsAirPurifier.get_p_AirPurifier()->setItsDouble_airQualityPPM_ProxyFlowPropertyInterface(itsSmartRoomSystem2.get_p_AirPurifier()->getItsDouble_airQualityPPM_ProxyFlowPropertyInterface());
        
    }{
        
        itsSmartRoomSystem2.get_p_AirPurifier()->setItsEvHumanPresence_ProxyReceptionInterface(itsAirPurifier.get_p_AirPurifier()->getItsEvHumanPresence_ProxyReceptionInterface());
        
    }
    {
        
        itsAirQualitySensor.get_p_AirQualitySensor()->setItsDouble_airQualityPPM_ProxyFlowPropertyInterface(itsAirPurifier.get_p_AirQualitySensor()->getItsDouble_airQualityPPM_ProxyFlowPropertyInterface());
        
    }
    
    #ifdef _OMINSTRUMENT
    RenameGlobalInstances();
    #endif // _OMINSTRUMENT
}

bool UM_AirPurifier_startBehavior(void) {
    bool done = true;
    if(done == true)
        {
            done = itsAirPurifier.startBehavior();
        }
    if(done == true)
        {
            done = itsSmartRoomSystem2.startBehavior();
        }
    return done;
}

#ifdef _OMINSTRUMENT
static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */) {
}

static void RenameGlobalInstances(void) {
    OM_SET_INSTANCE_NAME(&itsAirQualitySensor, AirQualitySensor, "itsAirQualitySensor", AOMNoMultiplicity);
    OM_SET_INSTANCE_NAME(&itsAirPurifier, AirPurifier, "itsAirPurifier", AOMNoMultiplicity);
    OM_SET_INSTANCE_NAME(&itsSmartRoomSystem2, SmartRoomSystem, "itsSmartRoomSystem2", AOMNoMultiplicity);
}
#endif // _OMINSTRUMENT

//#[ ignore
UM_AirPurifier_OMInitializer::UM_AirPurifier_OMInitializer(void) {
    UM_AirPurifier_initRelations();
    (void) UM_AirPurifier_startBehavior();
}

UM_AirPurifier_OMInitializer::~UM_AirPurifier_OMInitializer(void) {
}
//#]

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\UM_AirPurifier.cpp
*********************************************************************/
