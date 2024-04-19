/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20235614
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: SYSTEM_CONTEXT_AIR_PURIFIER
//!	Generated Date	: Fri, 19, Apr 2024  
	File Path	: DefaultComponent\DefaultConfig\SYSTEM_CONTEXT_AIR_PURIFIER.h
*********************************************************************/

#ifndef SYSTEM_CONTEXT_AIR_PURIFIER_H
#define SYSTEM_CONTEXT_AIR_PURIFIER_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include <event.h>
//## auto_generated
#include "SYSTEM_CONTEXT.h"
//## auto_generated
class AirPurifier;

//## auto_generated
class AirQualitySensor;

//## package SYSTEM_ANALYSIS::SYSTEM_CONTEXT::SYSTEM_CONTEXT_AIR_PURIFIER



//## event evFaultClear()
class evFaultClear : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevFaultClear;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evFaultClear(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevFaultClear : virtual public AOMEvent {
    DECLARE_META_EVENT(evFaultClear)
};
//#]
#endif // _OMINSTRUMENT

//#[ ignore
extern const IOxfEvent::ID evFaultClear_SYSTEM_CONTEXT_AIR_PURIFIER_SYSTEM_CONTEXT_SYSTEM_ANALYSIS_id;
//#]

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\SYSTEM_CONTEXT_AIR_PURIFIER.h
*********************************************************************/
