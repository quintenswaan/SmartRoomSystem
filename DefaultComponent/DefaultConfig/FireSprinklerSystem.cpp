/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20174215
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: FireSprinklerSystem
//!	Generated Date	: Fri, 19, Apr 2024  
	File Path	: DefaultComponent\DefaultConfig\FireSprinklerSystem.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "FireSprinklerSystem.h"
//## link itsSmartRoomSystem
#include "SmartRoomSystem.h"
//#[ ignore
#define SYSTEM_ANALYSIS_SYSTEM_CONTEXT_FireSprinklerSystem_FireSprinklerSystem_SERIALIZE OM_NO_OP
//#]

//## package SYSTEM_ANALYSIS::SYSTEM_CONTEXT

//## class FireSprinklerSystem
FireSprinklerSystem::FireSprinklerSystem(void) : itsSmartRoomSystem(NULL) {
    NOTIFY_CONSTRUCTOR(FireSprinklerSystem, FireSprinklerSystem(), 0, SYSTEM_ANALYSIS_SYSTEM_CONTEXT_FireSprinklerSystem_FireSprinklerSystem_SERIALIZE);
}

FireSprinklerSystem::~FireSprinklerSystem(void) {
    NOTIFY_DESTRUCTOR(~FireSprinklerSystem, true);
    cleanUpRelations();
}

const SmartRoomSystem* FireSprinklerSystem::getItsSmartRoomSystem(void) const {
    return itsSmartRoomSystem;
}

void FireSprinklerSystem::setItsSmartRoomSystem(SmartRoomSystem* const p_SmartRoomSystem) {
    if(p_SmartRoomSystem != NULL)
        {
            p_SmartRoomSystem->_setItsFireSprinklerSystem(this);
        }
    _setItsSmartRoomSystem(p_SmartRoomSystem);
}

void FireSprinklerSystem::cleanUpRelations(void) {
    if(itsSmartRoomSystem != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsSmartRoomSystem");
            const FireSprinklerSystem* p_FireSprinklerSystem = itsSmartRoomSystem->getItsFireSprinklerSystem();
            if(p_FireSprinklerSystem != NULL)
                {
                    itsSmartRoomSystem->__setItsFireSprinklerSystem(NULL);
                }
            itsSmartRoomSystem = NULL;
        }
}

void FireSprinklerSystem::__setItsSmartRoomSystem(SmartRoomSystem* const p_SmartRoomSystem) {
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

void FireSprinklerSystem::_setItsSmartRoomSystem(SmartRoomSystem* const p_SmartRoomSystem) {
    if(itsSmartRoomSystem != NULL)
        {
            itsSmartRoomSystem->__setItsFireSprinklerSystem(NULL);
        }
    __setItsSmartRoomSystem(p_SmartRoomSystem);
}

void FireSprinklerSystem::_clearItsSmartRoomSystem(void) {
    NOTIFY_RELATION_CLEARED("itsSmartRoomSystem");
    itsSmartRoomSystem = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedFireSprinklerSystem::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsSmartRoomSystem", false, true);
    if(myReal->itsSmartRoomSystem)
        {
            aomsRelations->ADD_ITEM(myReal->itsSmartRoomSystem);
        }
}
//#]

IMPLEMENT_META_P(FireSprinklerSystem, SYSTEM_ANALYSIS_SYSTEM_CONTEXT, SYSTEM_ANALYSIS::SYSTEM_CONTEXT, false, OMAnimatedFireSprinklerSystem)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\FireSprinklerSystem.cpp
*********************************************************************/
