/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20235614
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: TemperatureSensor
//!	Generated Date	: Fri, 19, Apr 2024  
	File Path	: DefaultComponent\DefaultConfig\TemperatureSensor.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "TemperatureSensor.h"
//## link itsSmartRoomSystem
#include "SmartRoomSystem.h"
//#[ ignore
#define SYSTEM_ANALYSIS_OPERATING_ENVIRONMENT_TemperatureSensor_TemperatureSensor_SERIALIZE OM_NO_OP
//#]

//## package SYSTEM_ANALYSIS::OPERATING_ENVIRONMENT

//## class TemperatureSensor
//#[ ignore
TemperatureSensor::p_TemperatureSensor_C::p_TemperatureSensor_C(void) : int_currentTemp_ProxyFlowPropertyInterface(), _p_(0), itsInt_currentTemp_ProxyFlowPropertyInterface(NULL) {
}

TemperatureSensor::p_TemperatureSensor_C::~p_TemperatureSensor_C(void) {
    cleanUpRelations();
}

int_currentTemp_ProxyFlowPropertyInterface* TemperatureSensor::p_TemperatureSensor_C::getItsInt_currentTemp_ProxyFlowPropertyInterface(void) {
    return this;
}

int_currentTemp_ProxyFlowPropertyInterface* TemperatureSensor::p_TemperatureSensor_C::getOutBound(void) {
    return this;
}

void TemperatureSensor::p_TemperatureSensor_C::setCurrentTemp(int p_currentTemp) {
    
    if (itsInt_currentTemp_ProxyFlowPropertyInterface != NULL) {
        itsInt_currentTemp_ProxyFlowPropertyInterface->setCurrentTemp(p_currentTemp);
    }
    
}

void TemperatureSensor::p_TemperatureSensor_C::setItsInt_currentTemp_ProxyFlowPropertyInterface(int_currentTemp_ProxyFlowPropertyInterface* const p_int_currentTemp_ProxyFlowPropertyInterface) {
    itsInt_currentTemp_ProxyFlowPropertyInterface = p_int_currentTemp_ProxyFlowPropertyInterface;
}

void TemperatureSensor::p_TemperatureSensor_C::cleanUpRelations(void) {
    if(itsInt_currentTemp_ProxyFlowPropertyInterface != NULL)
        {
            itsInt_currentTemp_ProxyFlowPropertyInterface = NULL;
        }
}
//#]

TemperatureSensor::TemperatureSensor(void) : currentTemp(15), itsSmartRoomSystem(NULL) {
    NOTIFY_CONSTRUCTOR(TemperatureSensor, TemperatureSensor(), 0, SYSTEM_ANALYSIS_OPERATING_ENVIRONMENT_TemperatureSensor_TemperatureSensor_SERIALIZE);
}

TemperatureSensor::~TemperatureSensor(void) {
    NOTIFY_DESTRUCTOR(~TemperatureSensor, true);
    cleanUpRelations();
}

//#[ ignore
void TemperatureSensor::setCurrentTemp(int p_currentTemp) {
    if (currentTemp != p_currentTemp)  {
        currentTemp = p_currentTemp;
        FLOW_DATA_SEND(currentTemp, p_TemperatureSensor, setCurrentTemp, x2String);
    }
}
//#]

TemperatureSensor::p_TemperatureSensor_C* TemperatureSensor::getP_TemperatureSensor(void) const {
    return (TemperatureSensor::p_TemperatureSensor_C*) &p_TemperatureSensor;
}

TemperatureSensor::p_TemperatureSensor_C* TemperatureSensor::get_p_TemperatureSensor(void) const {
    return (TemperatureSensor::p_TemperatureSensor_C*) &p_TemperatureSensor;
}

const int TemperatureSensor::getCurrentTemp(void) const {
    return currentTemp;
}

const SmartRoomSystem* TemperatureSensor::getItsSmartRoomSystem(void) const {
    return itsSmartRoomSystem;
}

void TemperatureSensor::setItsSmartRoomSystem(SmartRoomSystem* const p_SmartRoomSystem) {
    if(p_SmartRoomSystem != NULL)
        {
            p_SmartRoomSystem->_setItsTemperatureSensor(this);
        }
    _setItsSmartRoomSystem(p_SmartRoomSystem);
}

void TemperatureSensor::cleanUpRelations(void) {
    if(itsSmartRoomSystem != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsSmartRoomSystem");
            const TemperatureSensor* p_TemperatureSensor = itsSmartRoomSystem->getItsTemperatureSensor();
            if(p_TemperatureSensor != NULL)
                {
                    itsSmartRoomSystem->__setItsTemperatureSensor(NULL);
                }
            itsSmartRoomSystem = NULL;
        }
}

void TemperatureSensor::__setItsSmartRoomSystem(SmartRoomSystem* const p_SmartRoomSystem) {
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

void TemperatureSensor::_setItsSmartRoomSystem(SmartRoomSystem* const p_SmartRoomSystem) {
    if(itsSmartRoomSystem != NULL)
        {
            itsSmartRoomSystem->__setItsTemperatureSensor(NULL);
        }
    __setItsSmartRoomSystem(p_SmartRoomSystem);
}

void TemperatureSensor::_clearItsSmartRoomSystem(void) {
    NOTIFY_RELATION_CLEARED("itsSmartRoomSystem");
    itsSmartRoomSystem = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedTemperatureSensor::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("currentTemp", x2String(myReal->currentTemp));
}

void OMAnimatedTemperatureSensor::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsSmartRoomSystem", false, true);
    if(myReal->itsSmartRoomSystem)
        {
            aomsRelations->ADD_ITEM(myReal->itsSmartRoomSystem);
        }
}
//#]

IMPLEMENT_META_P(TemperatureSensor, SYSTEM_ANALYSIS_OPERATING_ENVIRONMENT, SYSTEM_ANALYSIS::OPERATING_ENVIRONMENT, false, OMAnimatedTemperatureSensor)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\TemperatureSensor.cpp
*********************************************************************/
