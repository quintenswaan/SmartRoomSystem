/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20174215
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: SecurityAndAccesSystem
//!	Generated Date	: Fri, 19, Apr 2024  
	File Path	: DefaultComponent\DefaultConfig\SecurityAndAccesSystem.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "SecurityAndAccesSystem.h"
//## link itsSmartRoomSystem
#include "SmartRoomSystem.h"
//#[ ignore
#define SYSTEM_ANALYSIS_SYSTEM_CONTEXT_SecurityAndAccesSystem_SecurityAndAccesSystem_SERIALIZE OM_NO_OP
//#]

//## package SYSTEM_ANALYSIS::SYSTEM_CONTEXT

//## class SecurityAndAccesSystem
SecurityAndAccesSystem::SecurityAndAccesSystem(void) : itsSmartRoomSystem(NULL) {
    NOTIFY_CONSTRUCTOR(SecurityAndAccesSystem, SecurityAndAccesSystem(), 0, SYSTEM_ANALYSIS_SYSTEM_CONTEXT_SecurityAndAccesSystem_SecurityAndAccesSystem_SERIALIZE);
}

SecurityAndAccesSystem::~SecurityAndAccesSystem(void) {
    NOTIFY_DESTRUCTOR(~SecurityAndAccesSystem, true);
    cleanUpRelations();
}

const SmartRoomSystem* SecurityAndAccesSystem::getItsSmartRoomSystem(void) const {
    return itsSmartRoomSystem;
}

void SecurityAndAccesSystem::setItsSmartRoomSystem(SmartRoomSystem* const p_SmartRoomSystem) {
    if(p_SmartRoomSystem != NULL)
        {
            p_SmartRoomSystem->_setItsSecurityAndAccesSystem(this);
        }
    _setItsSmartRoomSystem(p_SmartRoomSystem);
}

void SecurityAndAccesSystem::cleanUpRelations(void) {
    if(itsSmartRoomSystem != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsSmartRoomSystem");
            const SecurityAndAccesSystem* p_SecurityAndAccesSystem = itsSmartRoomSystem->getItsSecurityAndAccesSystem();
            if(p_SecurityAndAccesSystem != NULL)
                {
                    itsSmartRoomSystem->__setItsSecurityAndAccesSystem(NULL);
                }
            itsSmartRoomSystem = NULL;
        }
}

void SecurityAndAccesSystem::__setItsSmartRoomSystem(SmartRoomSystem* const p_SmartRoomSystem) {
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

void SecurityAndAccesSystem::_setItsSmartRoomSystem(SmartRoomSystem* const p_SmartRoomSystem) {
    if(itsSmartRoomSystem != NULL)
        {
            itsSmartRoomSystem->__setItsSecurityAndAccesSystem(NULL);
        }
    __setItsSmartRoomSystem(p_SmartRoomSystem);
}

void SecurityAndAccesSystem::_clearItsSmartRoomSystem(void) {
    NOTIFY_RELATION_CLEARED("itsSmartRoomSystem");
    itsSmartRoomSystem = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedSecurityAndAccesSystem::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsSmartRoomSystem", false, true);
    if(myReal->itsSmartRoomSystem)
        {
            aomsRelations->ADD_ITEM(myReal->itsSmartRoomSystem);
        }
}
//#]

IMPLEMENT_META_P(SecurityAndAccesSystem, SYSTEM_ANALYSIS_SYSTEM_CONTEXT, SYSTEM_ANALYSIS::SYSTEM_CONTEXT, false, OMAnimatedSecurityAndAccesSystem)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\SecurityAndAccesSystem.cpp
*********************************************************************/
