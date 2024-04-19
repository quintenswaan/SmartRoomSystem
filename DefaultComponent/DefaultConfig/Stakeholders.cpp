/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20235614
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Stakeholders
//!	Generated Date	: Fri, 19, Apr 2024  
	File Path	: DefaultComponent\DefaultConfig\Stakeholders.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Stakeholders.h"
//## link itsSmartRoomSystem
#include "SmartRoomSystem.h"
//#[ ignore
#define SYSTEM_ANALYSIS_SYSTEM_CONTEXT_Stakeholders_Stakeholders_SERIALIZE OM_NO_OP
//#]

//## package SYSTEM_ANALYSIS::SYSTEM_CONTEXT

//## class Stakeholders
Stakeholders::Stakeholders(void) : itsSmartRoomSystem(NULL) {
    NOTIFY_CONSTRUCTOR(Stakeholders, Stakeholders(), 0, SYSTEM_ANALYSIS_SYSTEM_CONTEXT_Stakeholders_Stakeholders_SERIALIZE);
}

Stakeholders::~Stakeholders(void) {
    NOTIFY_DESTRUCTOR(~Stakeholders, true);
    cleanUpRelations();
}

const SmartRoomSystem* Stakeholders::getItsSmartRoomSystem(void) const {
    return itsSmartRoomSystem;
}

void Stakeholders::setItsSmartRoomSystem(SmartRoomSystem* const p_SmartRoomSystem) {
    if(p_SmartRoomSystem != NULL)
        {
            p_SmartRoomSystem->_setItsStakeholders(this);
        }
    _setItsSmartRoomSystem(p_SmartRoomSystem);
}

void Stakeholders::cleanUpRelations(void) {
    if(itsSmartRoomSystem != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsSmartRoomSystem");
            const Stakeholders* p_Stakeholders = itsSmartRoomSystem->getItsStakeholders();
            if(p_Stakeholders != NULL)
                {
                    itsSmartRoomSystem->__setItsStakeholders(NULL);
                }
            itsSmartRoomSystem = NULL;
        }
}

void Stakeholders::__setItsSmartRoomSystem(SmartRoomSystem* const p_SmartRoomSystem) {
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

void Stakeholders::_setItsSmartRoomSystem(SmartRoomSystem* const p_SmartRoomSystem) {
    if(itsSmartRoomSystem != NULL)
        {
            itsSmartRoomSystem->__setItsStakeholders(NULL);
        }
    __setItsSmartRoomSystem(p_SmartRoomSystem);
}

void Stakeholders::_clearItsSmartRoomSystem(void) {
    NOTIFY_RELATION_CLEARED("itsSmartRoomSystem");
    itsSmartRoomSystem = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedStakeholders::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsSmartRoomSystem", false, true);
    if(myReal->itsSmartRoomSystem)
        {
            aomsRelations->ADD_ITEM(myReal->itsSmartRoomSystem);
        }
}
//#]

IMPLEMENT_META_P(Stakeholders, SYSTEM_ANALYSIS_SYSTEM_CONTEXT, SYSTEM_ANALYSIS::SYSTEM_CONTEXT, false, OMAnimatedStakeholders)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Stakeholders.cpp
*********************************************************************/
