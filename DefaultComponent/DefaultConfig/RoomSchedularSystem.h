/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20174215
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: RoomSchedularSystem
//!	Generated Date	: Fri, 19, Apr 2024  
	File Path	: DefaultComponent\DefaultConfig\RoomSchedularSystem.h
*********************************************************************/

#ifndef RoomSchedularSystem_H
#define RoomSchedularSystem_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "SYSTEM_CONTEXT.h"
//## link itsSmartRoomSystem
class SmartRoomSystem;

//## package SYSTEM_ANALYSIS::SYSTEM_CONTEXT

//## class RoomSchedularSystem
class RoomSchedularSystem {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedRoomSchedularSystem;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    RoomSchedularSystem(void);
    
    //## auto_generated
    ~RoomSchedularSystem(void);
    
    ////    Additional operations    ////
    
    //## auto_generated
    const SmartRoomSystem* getItsSmartRoomSystem(void) const;
    
    //## auto_generated
    void setItsSmartRoomSystem(SmartRoomSystem* const p_SmartRoomSystem);

protected :

    //## auto_generated
    void cleanUpRelations(void);
    
    ////    Relations and components    ////

private :

    SmartRoomSystem* itsSmartRoomSystem;		//## link itsSmartRoomSystem
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsSmartRoomSystem(SmartRoomSystem* const p_SmartRoomSystem);
    
    //## auto_generated
    void _setItsSmartRoomSystem(SmartRoomSystem* const p_SmartRoomSystem);
    
    //## auto_generated
    void _clearItsSmartRoomSystem(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedRoomSchedularSystem : virtual public AOMInstance {
    DECLARE_META(RoomSchedularSystem, OMAnimatedRoomSchedularSystem)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\RoomSchedularSystem.h
*********************************************************************/
