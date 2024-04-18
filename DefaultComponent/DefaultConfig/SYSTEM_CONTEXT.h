/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20174215
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: SYSTEM_CONTEXT
//!	Generated Date	: Thu, 18, Apr 2024  
	File Path	: DefaultComponent\DefaultConfig\SYSTEM_CONTEXT.h
*********************************************************************/

#ifndef SYSTEM_CONTEXT_H
#define SYSTEM_CONTEXT_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include <event.h>
//## auto_generated
class AirPurifier;

//## auto_generated
class FireSprinklerSystem;

//## auto_generated
class HVAC;

//## auto_generated
class NaturalEnvironment;

//## auto_generated
class RoomSchedularSystem;

//## auto_generated
class SecurityAndAccesSystem;

//## auto_generated
class SmartRoomSystem;

//## auto_generated
class Stakeholders;

//## auto_generated
class Standards;

//## package SYSTEM_ANALYSIS::SYSTEM_CONTEXT



//## event reqHVACon()
class reqHVACon : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedreqHVACon;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    reqHVACon(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedreqHVACon : virtual public AOMEvent {
    DECLARE_META_EVENT(reqHVACon)
};
//#]
#endif // _OMINSTRUMENT

//#[ ignore
extern const IOxfEvent::ID reqHVACon_SYSTEM_CONTEXT_SYSTEM_ANALYSIS_id;
//#]

//## event reqHVACoff()
class reqHVACoff : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedreqHVACoff;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    reqHVACoff(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedreqHVACoff : virtual public AOMEvent {
    DECLARE_META_EVENT(reqHVACoff)
};
//#]
#endif // _OMINSTRUMENT

//#[ ignore
extern const IOxfEvent::ID reqHVACoff_SYSTEM_CONTEXT_SYSTEM_ANALYSIS_id;
//#]

//## event reqCooling()
class reqCooling : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedreqCooling;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    reqCooling(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedreqCooling : virtual public AOMEvent {
    DECLARE_META_EVENT(reqCooling)
};
//#]
#endif // _OMINSTRUMENT

//#[ ignore
extern const IOxfEvent::ID reqCooling_SYSTEM_CONTEXT_SYSTEM_ANALYSIS_id;
//#]

//## event reqHeating()
class reqHeating : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedreqHeating;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    reqHeating(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedreqHeating : virtual public AOMEvent {
    DECLARE_META_EVENT(reqHeating)
};
//#]
#endif // _OMINSTRUMENT

//#[ ignore
extern const IOxfEvent::ID reqHeating_SYSTEM_CONTEXT_SYSTEM_ANALYSIS_id;
//#]

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\SYSTEM_CONTEXT.h
*********************************************************************/
