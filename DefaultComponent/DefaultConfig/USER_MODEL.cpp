/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20174215
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: USER_MODEL
//!	Generated Date	: Fri, 19, Apr 2024  
	File Path	: DefaultComponent\DefaultConfig\USER_MODEL.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "USER_MODEL.h"
//## classInstance itsAirPurifier
#include "AirPurifier.h"
//## classInstance itsAirQualitySensor
#include "AirQualitySensor.h"
//## classInstance itsHVAC
#include "HVAC.h"
//## classInstance itsSmartRoomSystem
#include "SmartRoomSystem.h"
//## classInstance itsTemperatureSensor
#include "TemperatureSensor.h"
//## package SYSTEM_ANALYSIS::USER_MODEL


#ifdef _OMINSTRUMENT
static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */);

static void RenameGlobalInstances(void);

IMPLEMENT_META_PACKAGE(SYSTEM_ANALYSIS_USER_MODEL, SYSTEM_ANALYSIS::USER_MODEL)

static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */) {
}

static void RenameGlobalInstances(void) {
    OM_SET_INSTANCE_NAME(&itsHVAC, HVAC, "itsHVAC", AOMNoMultiplicity);
    OM_SET_INSTANCE_NAME(&itsTemperatureSensor, TemperatureSensor, "itsTemperatureSensor", AOMNoMultiplicity);
    OM_SET_INSTANCE_NAME(&itsSmartRoomSystem, SmartRoomSystem, "itsSmartRoomSystem", AOMNoMultiplicity);
    OM_SET_INSTANCE_NAME(&itsAirPurifier, AirPurifier, "itsAirPurifier", AOMNoMultiplicity);
    OM_SET_INSTANCE_NAME(&itsAirQualitySensor, AirQualitySensor, "itsAirQualitySensor", AOMNoMultiplicity);
}
#endif // _OMINSTRUMENT

//## classInstance itsAirPurifier
AirPurifier itsAirPurifier;

//## classInstance itsAirQualitySensor
AirQualitySensor itsAirQualitySensor;

//## classInstance itsHVAC
HVAC itsHVAC;

//## classInstance itsSmartRoomSystem
SmartRoomSystem itsSmartRoomSystem;

//## classInstance itsTemperatureSensor
TemperatureSensor itsTemperatureSensor;

void USER_MODEL_initRelations(void) {
    {
        {
            itsHVAC.setShouldDelete(false);
        }
        {
            itsSmartRoomSystem.setShouldDelete(false);
        }
        {
            itsAirPurifier.setShouldDelete(false);
        }
    }
    {
        
        itsSmartRoomSystem.get_port_SRS()->setItsIB_Power(itsHVAC.get_port_HVAC()->getItsIB_Power());
        
        itsSmartRoomSystem.get_port_SRS()->setItsIB_Mode(itsHVAC.get_port_HVAC()->getItsIB_Mode());
        
    }
    {
        
        itsAirQualitySensor.get_p_AirQualitySensor()->setItsDouble_airQualityPPM_ProxyFlowPropertyInterface(itsAirPurifier.get_p_AirQualitySensor()->getItsDouble_airQualityPPM_ProxyFlowPropertyInterface());
        
    }
    {
        
        itsSmartRoomSystem.get_p_AirPurifier()->setItsEvHumanPresence_ProxyReceptionInterface(itsAirPurifier.get_p_AirPurifier()->getItsEvHumanPresence_ProxyReceptionInterface());
        
    }{
        
        itsAirPurifier.get_p_AirPurifier()->setItsDouble_airQualityPPM_ProxyFlowPropertyInterface(itsSmartRoomSystem.get_p_AirPurifier()->getItsDouble_airQualityPPM_ProxyFlowPropertyInterface());
        
    }
    {
        
        itsTemperatureSensor.get_p_TemperatureSensor()->setItsInt_currentTemp_ProxyFlowPropertyInterface(itsSmartRoomSystem.get_p_SmartRoomSystem()->getItsInt_currentTemp_ProxyFlowPropertyInterface());
        
    }
    
    #ifdef _OMINSTRUMENT
    RenameGlobalInstances();
    #endif // _OMINSTRUMENT
}

bool USER_MODEL_startBehavior(void) {
    bool done = true;
    if(done == true)
        {
            done = itsAirPurifier.startBehavior();
        }
    if(done == true)
        {
            done = itsHVAC.startBehavior();
        }
    if(done == true)
        {
            done = itsSmartRoomSystem.startBehavior();
        }
    return done;
}

//#[ ignore
USER_MODEL_OMInitializer::USER_MODEL_OMInitializer(void) {
    USER_MODEL_initRelations();
    (void) USER_MODEL_startBehavior();
}

USER_MODEL_OMInitializer::~USER_MODEL_OMInitializer(void) {
}
//#]

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\USER_MODEL.cpp
*********************************************************************/
