/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20235614
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Standards
//!	Generated Date	: Fri, 19, Apr 2024  
	File Path	: DefaultComponent\DefaultConfig\Standards.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Standards.h"
//## link itsSmartRoomSystem
#include "SmartRoomSystem.h"
//#[ ignore
#define SYSTEM_ANALYSIS_SYSTEM_CONTEXT_Standards_Standards_SERIALIZE OM_NO_OP
//#]

//## package SYSTEM_ANALYSIS::SYSTEM_CONTEXT

//## class Standards
Standards::Standards(void) : itsSmartRoomSystem(NULL) {
    NOTIFY_CONSTRUCTOR(Standards, Standards(), 0, SYSTEM_ANALYSIS_SYSTEM_CONTEXT_Standards_Standards_SERIALIZE);
}

Standards::~Standards(void) {
    NOTIFY_DESTRUCTOR(~Standards, true);
    cleanUpRelations();
}

const SmartRoomSystem* Standards::getItsSmartRoomSystem(void) const {
    return itsSmartRoomSystem;
}

void Standards::setItsSmartRoomSystem(SmartRoomSystem* const p_SmartRoomSystem) {
    if(p_SmartRoomSystem != NULL)
        {
            p_SmartRoomSystem->_setItsStandards(this);
        }
    _setItsSmartRoomSystem(p_SmartRoomSystem);
}

void Standards::cleanUpRelations(void) {
    if(itsSmartRoomSystem != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsSmartRoomSystem");
            const Standards* p_Standards = itsSmartRoomSystem->getItsStandards();
            if(p_Standards != NULL)
                {
                    itsSmartRoomSystem->__setItsStandards(NULL);
                }
            itsSmartRoomSystem = NULL;
        }
}

void Standards::__setItsSmartRoomSystem(SmartRoomSystem* const p_SmartRoomSystem) {
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

void Standards::_setItsSmartRoomSystem(SmartRoomSystem* const p_SmartRoomSystem) {
    if(itsSmartRoomSystem != NULL)
        {
            itsSmartRoomSystem->__setItsStandards(NULL);
        }
    __setItsSmartRoomSystem(p_SmartRoomSystem);
}

void Standards::_clearItsSmartRoomSystem(void) {
    NOTIFY_RELATION_CLEARED("itsSmartRoomSystem");
    itsSmartRoomSystem = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedStandards::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsSmartRoomSystem", false, true);
    if(myReal->itsSmartRoomSystem)
        {
            aomsRelations->ADD_ITEM(myReal->itsSmartRoomSystem);
        }
}
//#]

IMPLEMENT_META_P(Standards, SYSTEM_ANALYSIS_SYSTEM_CONTEXT, SYSTEM_ANALYSIS::SYSTEM_CONTEXT, false, OMAnimatedStandards)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Standards.cpp
*********************************************************************/
