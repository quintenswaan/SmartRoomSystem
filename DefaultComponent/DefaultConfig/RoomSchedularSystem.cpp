/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20174215
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: RoomSchedularSystem
//!	Generated Date	: Thu, 18, Apr 2024  
	File Path	: DefaultComponent\DefaultConfig\RoomSchedularSystem.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "RoomSchedularSystem.h"
//## link itsSmartRoomSystem
#include "SmartRoomSystem.h"
//#[ ignore
#define SYSTEM_ANALYSIS_SYSTEM_CONTEXT_RoomSchedularSystem_RoomSchedularSystem_SERIALIZE OM_NO_OP
//#]

//## package SYSTEM_ANALYSIS::SYSTEM_CONTEXT

//## class RoomSchedularSystem
RoomSchedularSystem::RoomSchedularSystem(void) : itsSmartRoomSystem(NULL) {
    NOTIFY_CONSTRUCTOR(RoomSchedularSystem, RoomSchedularSystem(), 0, SYSTEM_ANALYSIS_SYSTEM_CONTEXT_RoomSchedularSystem_RoomSchedularSystem_SERIALIZE);
}

RoomSchedularSystem::~RoomSchedularSystem(void) {
    NOTIFY_DESTRUCTOR(~RoomSchedularSystem, true);
    cleanUpRelations();
}

const SmartRoomSystem* RoomSchedularSystem::getItsSmartRoomSystem(void) const {
    return itsSmartRoomSystem;
}

void RoomSchedularSystem::setItsSmartRoomSystem(SmartRoomSystem* const p_SmartRoomSystem) {
    if(p_SmartRoomSystem != NULL)
        {
            p_SmartRoomSystem->_setItsRoomSchedularSystem(this);
        }
    _setItsSmartRoomSystem(p_SmartRoomSystem);
}

void RoomSchedularSystem::cleanUpRelations(void) {
    if(itsSmartRoomSystem != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsSmartRoomSystem");
            const RoomSchedularSystem* p_RoomSchedularSystem = itsSmartRoomSystem->getItsRoomSchedularSystem();
            if(p_RoomSchedularSystem != NULL)
                {
                    itsSmartRoomSystem->__setItsRoomSchedularSystem(NULL);
                }
            itsSmartRoomSystem = NULL;
        }
}

void RoomSchedularSystem::__setItsSmartRoomSystem(SmartRoomSystem* const p_SmartRoomSystem) {
    itsSmartRoomSystem = p_SmartRoomSystem;
    if(p_SmartRoomSystem != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsSmartRoomSystem", p_SmartRoomSystem, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsSmartRoomSystem");
        }
}

void RoomSchedularSystem::_setItsSmartRoomSystem(SmartRoomSystem* const p_SmartRoomSystem) {
    if(itsSmartRoomSystem != NULL)
        {
            itsSmartRoomSystem->__setItsRoomSchedularSystem(NULL);
        }
    __setItsSmartRoomSystem(p_SmartRoomSystem);
}

void RoomSchedularSystem::_clearItsSmartRoomSystem(void) {
    NOTIFY_RELATION_CLEARED("itsSmartRoomSystem");
    itsSmartRoomSystem = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedRoomSchedularSystem::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsSmartRoomSystem", false, true);
    if(myReal->itsSmartRoomSystem)
        {
            aomsRelations->ADD_ITEM(myReal->itsSmartRoomSystem);
        }
}
//#]

IMPLEMENT_META_P(RoomSchedularSystem, SYSTEM_ANALYSIS_SYSTEM_CONTEXT, SYSTEM_ANALYSIS::SYSTEM_CONTEXT, false, OMAnimatedRoomSchedularSystem)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\RoomSchedularSystem.cpp
*********************************************************************/
