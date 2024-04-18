/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20174215
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: USER_MODEL
//!	Generated Date	: Thu, 18, Apr 2024  
	File Path	: DefaultComponent\DefaultConfig\USER_MODEL.h
*********************************************************************/

#ifndef USER_MODEL_H
#define USER_MODEL_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## classInstance itsHVAC
class HVAC;

//## classInstance itsSmartRoomSystem
class SmartRoomSystem;

//## classInstance itsTemperatureSensor
class TemperatureSensor;

//## package SYSTEM_ANALYSIS::USER_MODEL


//## classInstance itsHVAC
extern HVAC itsHVAC;

//## classInstance itsSmartRoomSystem
extern SmartRoomSystem itsSmartRoomSystem;

//## classInstance itsTemperatureSensor
extern TemperatureSensor itsTemperatureSensor;

//## auto_generated
void USER_MODEL_initRelations(void);

//## auto_generated
bool USER_MODEL_startBehavior(void);

//#[ ignore
class USER_MODEL_OMInitializer {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    USER_MODEL_OMInitializer(void);
    
    //## auto_generated
    ~USER_MODEL_OMInitializer(void);
};
//#]

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\USER_MODEL.h
*********************************************************************/
