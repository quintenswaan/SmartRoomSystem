/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20235614
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: UM_AirPurifier
//!	Generated Date	: Fri, 19, Apr 2024  
	File Path	: DefaultComponent\DefaultConfig\UM_AirPurifier.h
*********************************************************************/

#ifndef UM_AirPurifier_H
#define UM_AirPurifier_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "USER_MODEL.h"
//## classInstance itsAirPurifier
class AirPurifier;

//## classInstance itsAirQualitySensor
class AirQualitySensor;

//## classInstance itsSmartRoomSystem2
class SmartRoomSystem;

//## package SYSTEM_ANALYSIS::USER_MODEL::UM_AirPurifier


//## classInstance itsAirPurifier
extern AirPurifier itsAirPurifier;

//## classInstance itsAirQualitySensor
extern AirQualitySensor itsAirQualitySensor;

//## classInstance itsSmartRoomSystem2
extern SmartRoomSystem itsSmartRoomSystem2;

//## auto_generated
void UM_AirPurifier_initRelations(void);

//## auto_generated
bool UM_AirPurifier_startBehavior(void);

//#[ ignore
class UM_AirPurifier_OMInitializer {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    UM_AirPurifier_OMInitializer(void);
    
    //## auto_generated
    ~UM_AirPurifier_OMInitializer(void);
};
//#]

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\UM_AirPurifier.h
*********************************************************************/
