/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20235614
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: SYSTEM_CONTEXT
//!	Generated Date	: Fri, 19, Apr 2024  
	File Path	: DefaultComponent\DefaultConfig\SYSTEM_CONTEXT.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "SYSTEM_CONTEXT.h"
//## auto_generated
#include "FireSprinklerSystem.h"
//## auto_generated
#include "HVAC.h"
//## auto_generated
#include "IB_Mode.h"
//## auto_generated
#include "IB_Power.h"
//## auto_generated
#include "NaturalEnvironment.h"
//## auto_generated
#include "RoomSchedularSystem.h"
//## auto_generated
#include "SecurityAndAccesSystem.h"
//## auto_generated
#include "SmartRoomSystem.h"
//## auto_generated
#include "Stakeholders.h"
//## auto_generated
#include "Standards.h"
//#[ ignore
#define reqHVACon_SERIALIZE OM_NO_OP

#define reqHVACon_UNSERIALIZE OM_NO_OP

#define reqHVACon_CONSTRUCTOR reqHVACon()

#define reqHVACoff_SERIALIZE OM_NO_OP

#define reqHVACoff_UNSERIALIZE OM_NO_OP

#define reqHVACoff_CONSTRUCTOR reqHVACoff()

#define reqCooling_SERIALIZE OM_NO_OP

#define reqCooling_UNSERIALIZE OM_NO_OP

#define reqCooling_CONSTRUCTOR reqCooling()

#define reqHeating_SERIALIZE OM_NO_OP

#define reqHeating_UNSERIALIZE OM_NO_OP

#define reqHeating_CONSTRUCTOR reqHeating()

#define evHumanPresence_SERIALIZE OM_NO_OP

#define evHumanPresence_UNSERIALIZE OM_NO_OP

#define evHumanPresence_CONSTRUCTOR evHumanPresence()
//#]

//## package SYSTEM_ANALYSIS::SYSTEM_CONTEXT


#ifdef _OMINSTRUMENT
static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */);

IMPLEMENT_META_PACKAGE(SYSTEM_ANALYSIS_SYSTEM_CONTEXT, SYSTEM_ANALYSIS::SYSTEM_CONTEXT)

static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */) {
}
#endif // _OMINSTRUMENT

//## event reqHVACon()
reqHVACon::reqHVACon(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(reqHVACon)
    setId(reqHVACon_SYSTEM_CONTEXT_SYSTEM_ANALYSIS_id);
}

//#[ ignore
const IOxfEvent::ID reqHVACon_SYSTEM_CONTEXT_SYSTEM_ANALYSIS_id(9401);
//#]

IMPLEMENT_META_EVENT_P(reqHVACon, SYSTEM_ANALYSIS_SYSTEM_CONTEXT, SYSTEM_ANALYSIS::SYSTEM_CONTEXT, reqHVACon())

//## event reqHVACoff()
reqHVACoff::reqHVACoff(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(reqHVACoff)
    setId(reqHVACoff_SYSTEM_CONTEXT_SYSTEM_ANALYSIS_id);
}

//#[ ignore
const IOxfEvent::ID reqHVACoff_SYSTEM_CONTEXT_SYSTEM_ANALYSIS_id(9402);
//#]

IMPLEMENT_META_EVENT_P(reqHVACoff, SYSTEM_ANALYSIS_SYSTEM_CONTEXT, SYSTEM_ANALYSIS::SYSTEM_CONTEXT, reqHVACoff())

//## event reqCooling()
reqCooling::reqCooling(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(reqCooling)
    setId(reqCooling_SYSTEM_CONTEXT_SYSTEM_ANALYSIS_id);
}

//#[ ignore
const IOxfEvent::ID reqCooling_SYSTEM_CONTEXT_SYSTEM_ANALYSIS_id(9403);
//#]

IMPLEMENT_META_EVENT_P(reqCooling, SYSTEM_ANALYSIS_SYSTEM_CONTEXT, SYSTEM_ANALYSIS::SYSTEM_CONTEXT, reqCooling())

//## event reqHeating()
reqHeating::reqHeating(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(reqHeating)
    setId(reqHeating_SYSTEM_CONTEXT_SYSTEM_ANALYSIS_id);
}

//#[ ignore
const IOxfEvent::ID reqHeating_SYSTEM_CONTEXT_SYSTEM_ANALYSIS_id(9404);
//#]

IMPLEMENT_META_EVENT_P(reqHeating, SYSTEM_ANALYSIS_SYSTEM_CONTEXT, SYSTEM_ANALYSIS::SYSTEM_CONTEXT, reqHeating())

//## event evHumanPresence()
evHumanPresence::evHumanPresence(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(evHumanPresence)
    setId(evHumanPresence_SYSTEM_CONTEXT_SYSTEM_ANALYSIS_id);
}

//#[ ignore
const IOxfEvent::ID evHumanPresence_SYSTEM_CONTEXT_SYSTEM_ANALYSIS_id(9405);
//#]

IMPLEMENT_META_EVENT_P(evHumanPresence, SYSTEM_ANALYSIS_SYSTEM_CONTEXT, SYSTEM_ANALYSIS::SYSTEM_CONTEXT, evHumanPresence())

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\SYSTEM_CONTEXT.cpp
*********************************************************************/
