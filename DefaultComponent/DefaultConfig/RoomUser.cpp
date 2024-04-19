/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20235614
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: RoomUser
//!	Generated Date	: Fri, 19, Apr 2024  
	File Path	: DefaultComponent\DefaultConfig\RoomUser.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "RoomUser.h"
//## link itsSmartRoomSystem
#include "SmartRoomSystem.h"
//#[ ignore
#define SYSTEM_ANALYSIS_SYSTEM_CONTEXT_RoomUser_RoomUser_SERIALIZE OM_NO_OP
//#]

//## package SYSTEM_ANALYSIS::SYSTEM_CONTEXT

//## actor RoomUser
RoomUser::RoomUser(void) : itsSmartRoomSystem(NULL) {
    NOTIFY_CONSTRUCTOR(RoomUser, RoomUser(), 0, SYSTEM_ANALYSIS_SYSTEM_CONTEXT_RoomUser_RoomUser_SERIALIZE);
}

RoomUser::~RoomUser(void) {
    NOTIFY_DESTRUCTOR(~RoomUser, true);
    cleanUpRelations();
}

const SmartRoomSystem* RoomUser::getItsSmartRoomSystem(void) const {
    return itsSmartRoomSystem;
}

void RoomUser::setItsSmartRoomSystem(SmartRoomSystem* const p_SmartRoomSystem) {
    if(p_SmartRoomSystem != NULL)
        {
            p_SmartRoomSystem->_setItsRoomUser(this);
        }
    _setItsSmartRoomSystem(p_SmartRoomSystem);
}

void RoomUser::cleanUpRelations(void) {
    if(itsSmartRoomSystem != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsSmartRoomSystem");
            const RoomUser* p_RoomUser = itsSmartRoomSystem->getItsRoomUser();
            if(p_RoomUser != NULL)
                {
                    itsSmartRoomSystem->__setItsRoomUser(NULL);
                }
            itsSmartRoomSystem = NULL;
        }
}

void RoomUser::__setItsSmartRoomSystem(SmartRoomSystem* const p_SmartRoomSystem) {
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

void RoomUser::_setItsSmartRoomSystem(SmartRoomSystem* const p_SmartRoomSystem) {
    if(itsSmartRoomSystem != NULL)
        {
            itsSmartRoomSystem->__setItsRoomUser(NULL);
        }
    __setItsSmartRoomSystem(p_SmartRoomSystem);
}

void RoomUser::_clearItsSmartRoomSystem(void) {
    NOTIFY_RELATION_CLEARED("itsSmartRoomSystem");
    itsSmartRoomSystem = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedRoomUser::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsSmartRoomSystem", false, true);
    if(myReal->itsSmartRoomSystem)
        {
            aomsRelations->ADD_ITEM(myReal->itsSmartRoomSystem);
        }
}
//#]

IMPLEMENT_META_P(RoomUser, SYSTEM_ANALYSIS_SYSTEM_CONTEXT, SYSTEM_ANALYSIS::SYSTEM_CONTEXT, false, OMAnimatedRoomUser)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\RoomUser.cpp
*********************************************************************/
