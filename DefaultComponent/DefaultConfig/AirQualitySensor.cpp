/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20174215
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: AirQualitySensor
//!	Generated Date	: Fri, 19, Apr 2024  
	File Path	: DefaultComponent\DefaultConfig\AirQualitySensor.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "AirQualitySensor.h"
//## link itsAirPurifier
#include "AirPurifier.h"
//#[ ignore
#define SYSTEM_ANALYSIS_SYSTEM_CONTEXT_SYSTEM_CONTEXT_AIR_PURIFIER_AirQualitySensor_AirQualitySensor_SERIALIZE OM_NO_OP

#define OMAnim_SYSTEM_ANALYSIS_SYSTEM_CONTEXT_SYSTEM_CONTEXT_AIR_PURIFIER_AirQualitySensor_setAirQualityPPM_double_UNSERIALIZE_ARGS OP_UNSER(OMDestructiveString2X,p_airQualityPPM)

#define OMAnim_SYSTEM_ANALYSIS_SYSTEM_CONTEXT_SYSTEM_CONTEXT_AIR_PURIFIER_AirQualitySensor_setAirQualityPPM_double_SERIALIZE_RET_VAL
//#]

//## package SYSTEM_ANALYSIS::SYSTEM_CONTEXT::SYSTEM_CONTEXT_AIR_PURIFIER

//## class AirQualitySensor
//#[ ignore
AirQualitySensor::p_AirQualitySensor_C::p_AirQualitySensor_C(void) : double_airQualityPPM_ProxyFlowPropertyInterface(), _p_(0), itsDouble_airQualityPPM_ProxyFlowPropertyInterface(NULL) {
}

AirQualitySensor::p_AirQualitySensor_C::~p_AirQualitySensor_C(void) {
    cleanUpRelations();
}

double_airQualityPPM_ProxyFlowPropertyInterface* AirQualitySensor::p_AirQualitySensor_C::getItsDouble_airQualityPPM_ProxyFlowPropertyInterface(void) {
    return this;
}

double_airQualityPPM_ProxyFlowPropertyInterface* AirQualitySensor::p_AirQualitySensor_C::getOutBound(void) {
    return this;
}

void AirQualitySensor::p_AirQualitySensor_C::setAirQualityPPM(double p_airQualityPPM) {
    
    if (itsDouble_airQualityPPM_ProxyFlowPropertyInterface != NULL) {
        itsDouble_airQualityPPM_ProxyFlowPropertyInterface->setAirQualityPPM(p_airQualityPPM);
    }
    
}

void AirQualitySensor::p_AirQualitySensor_C::setItsDouble_airQualityPPM_ProxyFlowPropertyInterface(double_airQualityPPM_ProxyFlowPropertyInterface* const p_double_airQualityPPM_ProxyFlowPropertyInterface) {
    itsDouble_airQualityPPM_ProxyFlowPropertyInterface = p_double_airQualityPPM_ProxyFlowPropertyInterface;
}

void AirQualitySensor::p_AirQualitySensor_C::cleanUpRelations(void) {
    if(itsDouble_airQualityPPM_ProxyFlowPropertyInterface != NULL)
        {
            itsDouble_airQualityPPM_ProxyFlowPropertyInterface = NULL;
        }
}
//#]

AirQualitySensor::AirQualitySensor(void) : airQualityPPM(900), itsAirPurifier(NULL) {
    NOTIFY_CONSTRUCTOR(AirQualitySensor, AirQualitySensor(), 0, SYSTEM_ANALYSIS_SYSTEM_CONTEXT_SYSTEM_CONTEXT_AIR_PURIFIER_AirQualitySensor_AirQualitySensor_SERIALIZE);
}

AirQualitySensor::~AirQualitySensor(void) {
    NOTIFY_DESTRUCTOR(~AirQualitySensor, true);
    cleanUpRelations();
}

AirQualitySensor::p_AirQualitySensor_C* AirQualitySensor::getP_AirQualitySensor(void) const {
    return (AirQualitySensor::p_AirQualitySensor_C*) &p_AirQualitySensor;
}

AirQualitySensor::p_AirQualitySensor_C* AirQualitySensor::get_p_AirQualitySensor(void) const {
    return (AirQualitySensor::p_AirQualitySensor_C*) &p_AirQualitySensor;
}

const double AirQualitySensor::getAirQualityPPM(void) const {
    return airQualityPPM;
}

const AirPurifier* AirQualitySensor::getItsAirPurifier(void) const {
    return itsAirPurifier;
}

void AirQualitySensor::setItsAirPurifier(AirPurifier* const p_AirPurifier) {
    if(p_AirPurifier != NULL)
        {
            p_AirPurifier->_setItsAirQualitySensor(this);
        }
    _setItsAirPurifier(p_AirPurifier);
}

void AirQualitySensor::cleanUpRelations(void) {
    if(itsAirPurifier != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsAirPurifier");
            const AirQualitySensor* p_AirQualitySensor = itsAirPurifier->getItsAirQualitySensor();
            if(p_AirQualitySensor != NULL)
                {
                    itsAirPurifier->__setItsAirQualitySensor(NULL);
                }
            itsAirPurifier = NULL;
        }
}

void AirQualitySensor::__setItsAirPurifier(AirPurifier* const p_AirPurifier) {
    itsAirPurifier = p_AirPurifier;
    if(p_AirPurifier != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsAirPurifier", p_AirPurifier, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsAirPurifier");
        }
}

void AirQualitySensor::_setItsAirPurifier(AirPurifier* const p_AirPurifier) {
    if(itsAirPurifier != NULL)
        {
            itsAirPurifier->__setItsAirQualitySensor(NULL);
        }
    __setItsAirPurifier(p_AirPurifier);
}

void AirQualitySensor::_clearItsAirPurifier(void) {
    NOTIFY_RELATION_CLEARED("itsAirPurifier");
    itsAirPurifier = NULL;
}

//#[ ignore
void AirQualitySensor::setAirQualityPPM(double p_airQualityPPM) {
    if (airQualityPPM != p_airQualityPPM)  {
        airQualityPPM = p_airQualityPPM;
        FLOW_DATA_SEND(airQualityPPM, p_AirQualitySensor, setAirQualityPPM, x2String);
    }
}
//#]

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedAirQualitySensor::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("airQualityPPM", x2String(myReal->airQualityPPM));
}

void OMAnimatedAirQualitySensor::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsAirPurifier", false, true);
    if(myReal->itsAirPurifier)
        {
            aomsRelations->ADD_ITEM(myReal->itsAirPurifier);
        }
}
//#]

IMPLEMENT_META_P(AirQualitySensor, SYSTEM_ANALYSIS_SYSTEM_CONTEXT_SYSTEM_CONTEXT_AIR_PURIFIER, SYSTEM_ANALYSIS::SYSTEM_CONTEXT::SYSTEM_CONTEXT_AIR_PURIFIER, false, OMAnimatedAirQualitySensor)

IMPLEMENT_META_OP(OMAnimatedAirQualitySensor, SYSTEM_ANALYSIS_SYSTEM_CONTEXT_SYSTEM_CONTEXT_AIR_PURIFIER_AirQualitySensor_setAirQualityPPM_double, "setAirQualityPPM", FALSE, "setAirQualityPPM(double)", 1)

IMPLEMENT_OP_CALL(SYSTEM_ANALYSIS_SYSTEM_CONTEXT_SYSTEM_CONTEXT_AIR_PURIFIER_AirQualitySensor_setAirQualityPPM_double, AirQualitySensor, setAirQualityPPM(p_airQualityPPM), NO_OP())
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\AirQualitySensor.cpp
*********************************************************************/
