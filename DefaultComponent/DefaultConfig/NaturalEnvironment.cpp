/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20174215
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: NaturalEnvironment
//!	Generated Date	: Thu, 18, Apr 2024  
	File Path	: DefaultComponent\DefaultConfig\NaturalEnvironment.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "NaturalEnvironment.h"
//## link itsSmartRoomSystem
#include "SmartRoomSystem.h"
//#[ ignore
#define SYSTEM_ANALYSIS_SYSTEM_CONTEXT_NaturalEnvironment_NaturalEnvironment_SERIALIZE OM_NO_OP
//#]

//## package SYSTEM_ANALYSIS::SYSTEM_CONTEXT

//## class NaturalEnvironment
NaturalEnvironment::NaturalEnvironment(void) : itsSmartRoomSystem(NULL) {
    NOTIFY_CONSTRUCTOR(NaturalEnvironment, NaturalEnvironment(), 0, SYSTEM_ANALYSIS_SYSTEM_CONTEXT_NaturalEnvironment_NaturalEnvironment_SERIALIZE);
}

NaturalEnvironment::~NaturalEnvironment(void) {
    NOTIFY_DESTRUCTOR(~NaturalEnvironment, true);
    cleanUpRelations();
}

const SmartRoomSystem* NaturalEnvironment::getItsSmartRoomSystem(void) const {
    return itsSmartRoomSystem;
}

void NaturalEnvironment::setItsSmartRoomSystem(SmartRoomSystem* const p_SmartRoomSystem) {
    if(p_SmartRoomSystem != NULL)
        {
            p_SmartRoomSystem->_setItsNaturalEnvironment(this);
        }
    _setItsSmartRoomSystem(p_SmartRoomSystem);
}

void NaturalEnvironment::cleanUpRelations(void) {
    if(itsSmartRoomSystem != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsSmartRoomSystem");
            const NaturalEnvironment* p_NaturalEnvironment = itsSmartRoomSystem->getItsNaturalEnvironment();
            if(p_NaturalEnvironment != NULL)
                {
                    itsSmartRoomSystem->__setItsNaturalEnvironment(NULL);
                }
            itsSmartRoomSystem = NULL;
        }
}

void NaturalEnvironment::__setItsSmartRoomSystem(SmartRoomSystem* const p_SmartRoomSystem) {
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

void NaturalEnvironment::_setItsSmartRoomSystem(SmartRoomSystem* const p_SmartRoomSystem) {
    if(itsSmartRoomSystem != NULL)
        {
            itsSmartRoomSystem->__setItsNaturalEnvironment(NULL);
        }
    __setItsSmartRoomSystem(p_SmartRoomSystem);
}

void NaturalEnvironment::_clearItsSmartRoomSystem(void) {
    NOTIFY_RELATION_CLEARED("itsSmartRoomSystem");
    itsSmartRoomSystem = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedNaturalEnvironment::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsSmartRoomSystem", false, true);
    if(myReal->itsSmartRoomSystem)
        {
            aomsRelations->ADD_ITEM(myReal->itsSmartRoomSystem);
        }
}
//#]

IMPLEMENT_META_P(NaturalEnvironment, SYSTEM_ANALYSIS_SYSTEM_CONTEXT, SYSTEM_ANALYSIS::SYSTEM_CONTEXT, false, OMAnimatedNaturalEnvironment)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\NaturalEnvironment.cpp
*********************************************************************/
