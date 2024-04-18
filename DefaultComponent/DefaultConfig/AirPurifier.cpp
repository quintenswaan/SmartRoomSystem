/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20174215
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: AirPurifier
//!	Generated Date	: Thu, 18, Apr 2024  
	File Path	: DefaultComponent\DefaultConfig\AirPurifier.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "AirPurifier.h"
//## link itsSmartRoomSystem
#include "SmartRoomSystem.h"
//#[ ignore
#define SYSTEM_ANALYSIS_SYSTEM_CONTEXT_AirPurifier_AirPurifier_SERIALIZE OM_NO_OP
//#]

//## package SYSTEM_ANALYSIS::SYSTEM_CONTEXT

//## class AirPurifier
AirPurifier::AirPurifier(void) : itsSmartRoomSystem(NULL) {
    NOTIFY_CONSTRUCTOR(AirPurifier, AirPurifier(), 0, SYSTEM_ANALYSIS_SYSTEM_CONTEXT_AirPurifier_AirPurifier_SERIALIZE);
}

AirPurifier::~AirPurifier(void) {
    NOTIFY_DESTRUCTOR(~AirPurifier, true);
    cleanUpRelations();
}

const SmartRoomSystem* AirPurifier::getItsSmartRoomSystem(void) const {
    return itsSmartRoomSystem;
}

void AirPurifier::setItsSmartRoomSystem(SmartRoomSystem* const p_SmartRoomSystem) {
    if(p_SmartRoomSystem != NULL)
        {
            p_SmartRoomSystem->_setItsAirPurifier(this);
        }
    _setItsSmartRoomSystem(p_SmartRoomSystem);
}

void AirPurifier::cleanUpRelations(void) {
    if(itsSmartRoomSystem != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsSmartRoomSystem");
            const AirPurifier* p_AirPurifier = itsSmartRoomSystem->getItsAirPurifier();
            if(p_AirPurifier != NULL)
                {
                    itsSmartRoomSystem->__setItsAirPurifier(NULL);
                }
            itsSmartRoomSystem = NULL;
        }
}

void AirPurifier::__setItsSmartRoomSystem(SmartRoomSystem* const p_SmartRoomSystem) {
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

void AirPurifier::_setItsSmartRoomSystem(SmartRoomSystem* const p_SmartRoomSystem) {
    if(itsSmartRoomSystem != NULL)
        {
            itsSmartRoomSystem->__setItsAirPurifier(NULL);
        }
    __setItsSmartRoomSystem(p_SmartRoomSystem);
}

void AirPurifier::_clearItsSmartRoomSystem(void) {
    NOTIFY_RELATION_CLEARED("itsSmartRoomSystem");
    itsSmartRoomSystem = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedAirPurifier::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsSmartRoomSystem", false, true);
    if(myReal->itsSmartRoomSystem)
        {
            aomsRelations->ADD_ITEM(myReal->itsSmartRoomSystem);
        }
}
//#]

IMPLEMENT_META_P(AirPurifier, SYSTEM_ANALYSIS_SYSTEM_CONTEXT, SYSTEM_ANALYSIS::SYSTEM_CONTEXT, false, OMAnimatedAirPurifier)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\AirPurifier.cpp
*********************************************************************/
