/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20174215
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: IB_Power
//!	Generated Date	: Fri, 19, Apr 2024  
	File Path	: DefaultComponent\DefaultConfig\IB_Power.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "IB_Power.h"
//#[ ignore
#define SYSTEM_ANALYSIS_SYSTEM_CONTEXT_IB_Power_IB_Power_SERIALIZE OM_NO_OP

#define SYSTEM_ANALYSIS_SYSTEM_CONTEXT_IB_Power_startHVAC_SERIALIZE OM_NO_OP

#define SYSTEM_ANALYSIS_SYSTEM_CONTEXT_IB_Power_stopHVAC_SERIALIZE OM_NO_OP
//#]

//## package SYSTEM_ANALYSIS::SYSTEM_CONTEXT

//## class IB_Power
IB_Power::IB_Power(void) {
    NOTIFY_CONSTRUCTOR(IB_Power, IB_Power(), 0, SYSTEM_ANALYSIS_SYSTEM_CONTEXT_IB_Power_IB_Power_SERIALIZE);
}

IB_Power::~IB_Power(void) {
    NOTIFY_DESTRUCTOR(~IB_Power, true);
}

#ifdef _OMINSTRUMENT
IMPLEMENT_META_P(IB_Power, SYSTEM_ANALYSIS_SYSTEM_CONTEXT, SYSTEM_ANALYSIS::SYSTEM_CONTEXT, false, OMAnimatedIB_Power)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\IB_Power.cpp
*********************************************************************/
