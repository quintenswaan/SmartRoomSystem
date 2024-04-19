/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20174215
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: SYSTEM_CONTEXT_AIR_PURIFIER
//!	Generated Date	: Fri, 19, Apr 2024  
	File Path	: DefaultComponent\DefaultConfig\SYSTEM_CONTEXT_AIR_PURIFIER.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "SYSTEM_CONTEXT_AIR_PURIFIER.h"
//## auto_generated
#include "AirPurifier.h"
//## auto_generated
#include "AirQualitySensor.h"
//#[ ignore
#define evFaultClear_SERIALIZE OM_NO_OP

#define evFaultClear_UNSERIALIZE OM_NO_OP

#define evFaultClear_CONSTRUCTOR evFaultClear()
//#]

//## package SYSTEM_ANALYSIS::SYSTEM_CONTEXT::SYSTEM_CONTEXT_AIR_PURIFIER


#ifdef _OMINSTRUMENT
static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */);

IMPLEMENT_META_PACKAGE(SYSTEM_ANALYSIS_SYSTEM_CONTEXT_SYSTEM_CONTEXT_AIR_PURIFIER, SYSTEM_ANALYSIS::SYSTEM_CONTEXT::SYSTEM_CONTEXT_AIR_PURIFIER)

static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */) {
}
#endif // _OMINSTRUMENT

//## event evFaultClear()
evFaultClear::evFaultClear(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(evFaultClear)
    setId(evFaultClear_SYSTEM_CONTEXT_AIR_PURIFIER_SYSTEM_CONTEXT_SYSTEM_ANALYSIS_id);
}

//#[ ignore
const IOxfEvent::ID evFaultClear_SYSTEM_CONTEXT_AIR_PURIFIER_SYSTEM_CONTEXT_SYSTEM_ANALYSIS_id(16001);
//#]

IMPLEMENT_META_EVENT_P(evFaultClear, SYSTEM_ANALYSIS_SYSTEM_CONTEXT_SYSTEM_CONTEXT_AIR_PURIFIER, SYSTEM_ANALYSIS::SYSTEM_CONTEXT::SYSTEM_CONTEXT_AIR_PURIFIER, evFaultClear())

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\SYSTEM_CONTEXT_AIR_PURIFIER.cpp
*********************************************************************/
