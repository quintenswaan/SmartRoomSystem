/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20174215
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: SmartRoomSystem
//!	Generated Date	: Thu, 18, Apr 2024  
	File Path	: DefaultComponent\DefaultConfig\SmartRoomSystem.h
*********************************************************************/

#ifndef SmartRoomSystem_H
#define SmartRoomSystem_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "SYSTEM_CONTEXT.h"
//## class SmartRoomSystem
#include "int_currentTemp_ProxyFlowPropertyInterface.h"
//## link itsAirPurifier
class AirPurifier;

//## link itsFireSprinklerSystem
class FireSprinklerSystem;

//## link itsHVAC
class HVAC;

//## link itsNaturalEnvironment
class NaturalEnvironment;

//## link itsRoomSchedularSystem
class RoomSchedularSystem;

//## link itsRoomUser
class RoomUser;

//## link itsSecurityAndAccesSystem
class SecurityAndAccesSystem;

//## link itsStakeholders
class Stakeholders;

//## link itsStandards
class Standards;

//## link itsTemperatureSensor
class TemperatureSensor;

//## package SYSTEM_ANALYSIS::SYSTEM_CONTEXT

//## class SmartRoomSystem
class SmartRoomSystem : public int_currentTemp_ProxyFlowPropertyInterface {
public :

//#[ ignore
    //## package SYSTEM_ANALYSIS::SYSTEM_CONTEXT
    class p_SmartRoomSystem_C : public int_currentTemp_ProxyFlowPropertyInterface {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        p_SmartRoomSystem_C(void);
        
        //## auto_generated
        virtual ~p_SmartRoomSystem_C(void);
        
        ////    Operations    ////
        
        //## auto_generated
        void connectSmartRoomSystem(SmartRoomSystem* part);
        
        //## auto_generated
        int_currentTemp_ProxyFlowPropertyInterface* getItsInt_currentTemp_ProxyFlowPropertyInterface(void);
        
        //## auto_generated
        virtual void setCurrentTemp(int p_currentTemp);
        
        ////    Additional operations    ////
        
        //## auto_generated
        void setItsInt_currentTemp_ProxyFlowPropertyInterface(int_currentTemp_ProxyFlowPropertyInterface* const p_int_currentTemp_ProxyFlowPropertyInterface);
    
    protected :
    
        //## auto_generated
        void cleanUpRelations(void);
        
        ////    Attributes    ////
    
    private :
    
        RhpInteger _p_;		//## attribute _p_
        
        ////    Relations and components    ////
        
        int_currentTemp_ProxyFlowPropertyInterface* itsInt_currentTemp_ProxyFlowPropertyInterface;		//## link itsInt_currentTemp_ProxyFlowPropertyInterface
    };
//#]

    ////    Friends    ////
    
#ifdef _OMINSTRUMENT
    friend class OMAnimatedSmartRoomSystem;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    SmartRoomSystem(void);
    
    //## auto_generated
    ~SmartRoomSystem(void);
    
    ////    Operations    ////
    
//#[ ignore
    void setCurrentTemp(int p_currentTemp);
//#]

    ////    Additional operations    ////
    
    //## auto_generated
    p_SmartRoomSystem_C* getP_SmartRoomSystem(void) const;
    
    //## auto_generated
    p_SmartRoomSystem_C* get_p_SmartRoomSystem(void) const;
    
    //## auto_generated
    const bool getHVAC_ON_OFF(void) const;
    
    //## auto_generated
    void setHVAC_ON_OFF(const bool p_HVAC_ON_OFF);
    
    //## auto_generated
    const bool getHVAC_heat_cool(void) const;
    
    //## auto_generated
    void setHVAC_heat_cool(const bool p_HVAC_heat_cool);
    
    //## auto_generated
    const int getCurrentTemp(void) const;
    
    //## auto_generated
    const int getDesiredTemp(void) const;
    
    //## auto_generated
    void setDesiredTemp(const int p_desiredTemp);
    
    //## auto_generated
    const AirPurifier* getItsAirPurifier(void) const;
    
    //## auto_generated
    void setItsAirPurifier(AirPurifier* const p_AirPurifier);
    
    //## auto_generated
    const FireSprinklerSystem* getItsFireSprinklerSystem(void) const;
    
    //## auto_generated
    void setItsFireSprinklerSystem(FireSprinklerSystem* const p_FireSprinklerSystem);
    
    //## auto_generated
    const HVAC* getItsHVAC(void) const;
    
    //## auto_generated
    void setItsHVAC(HVAC* const p_HVAC);
    
    //## auto_generated
    const NaturalEnvironment* getItsNaturalEnvironment(void) const;
    
    //## auto_generated
    void setItsNaturalEnvironment(NaturalEnvironment* const p_NaturalEnvironment);
    
    //## auto_generated
    const RoomSchedularSystem* getItsRoomSchedularSystem(void) const;
    
    //## auto_generated
    void setItsRoomSchedularSystem(RoomSchedularSystem* const p_RoomSchedularSystem);
    
    //## auto_generated
    const RoomUser* getItsRoomUser(void) const;
    
    //## auto_generated
    void setItsRoomUser(RoomUser* const p_RoomUser);
    
    //## auto_generated
    const SecurityAndAccesSystem* getItsSecurityAndAccesSystem(void) const;
    
    //## auto_generated
    void setItsSecurityAndAccesSystem(SecurityAndAccesSystem* const p_SecurityAndAccesSystem);
    
    //## auto_generated
    const Stakeholders* getItsStakeholders(void) const;
    
    //## auto_generated
    void setItsStakeholders(Stakeholders* const p_Stakeholders);
    
    //## auto_generated
    const Standards* getItsStandards(void) const;
    
    //## auto_generated
    void setItsStandards(Standards* const p_Standards);
    
    //## auto_generated
    const TemperatureSensor* getItsTemperatureSensor(void) const;
    
    //## auto_generated
    void setItsTemperatureSensor(TemperatureSensor* const p_TemperatureSensor);

protected :

    //## auto_generated
    void initRelations(void);
    
    //## auto_generated
    void cleanUpRelations(void);
    
    ////    Attributes    ////

private :

    bool HVAC_ON_OFF;		//## attribute HVAC_ON_OFF
    
    bool HVAC_heat_cool;		//## attribute HVAC_heat_cool
    
    int currentTemp;		//## attribute currentTemp
    
    int desiredTemp;		//## attribute desiredTemp
    
    ////    Relations and components    ////
    
//#[ ignore
    p_SmartRoomSystem_C p_SmartRoomSystem;
//#]

    AirPurifier* itsAirPurifier;		//## link itsAirPurifier
    
    FireSprinklerSystem* itsFireSprinklerSystem;		//## link itsFireSprinklerSystem
    
    HVAC* itsHVAC;		//## link itsHVAC
    
    NaturalEnvironment* itsNaturalEnvironment;		//## link itsNaturalEnvironment
    
    RoomSchedularSystem* itsRoomSchedularSystem;		//## link itsRoomSchedularSystem
    
    RoomUser* itsRoomUser;		//## link itsRoomUser
    
    SecurityAndAccesSystem* itsSecurityAndAccesSystem;		//## link itsSecurityAndAccesSystem
    
    Stakeholders* itsStakeholders;		//## link itsStakeholders
    
    Standards* itsStandards;		//## link itsStandards
    
    TemperatureSensor* itsTemperatureSensor;		//## link itsTemperatureSensor
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsAirPurifier(AirPurifier* const p_AirPurifier);
    
    //## auto_generated
    void _setItsAirPurifier(AirPurifier* const p_AirPurifier);
    
    //## auto_generated
    void _clearItsAirPurifier(void);
    
    //## auto_generated
    void __setItsFireSprinklerSystem(FireSprinklerSystem* const p_FireSprinklerSystem);
    
    //## auto_generated
    void _setItsFireSprinklerSystem(FireSprinklerSystem* const p_FireSprinklerSystem);
    
    //## auto_generated
    void _clearItsFireSprinklerSystem(void);
    
    //## auto_generated
    void __setItsHVAC(HVAC* const p_HVAC);
    
    //## auto_generated
    void _setItsHVAC(HVAC* const p_HVAC);
    
    //## auto_generated
    void _clearItsHVAC(void);
    
    //## auto_generated
    void __setItsNaturalEnvironment(NaturalEnvironment* const p_NaturalEnvironment);
    
    //## auto_generated
    void _setItsNaturalEnvironment(NaturalEnvironment* const p_NaturalEnvironment);
    
    //## auto_generated
    void _clearItsNaturalEnvironment(void);
    
    //## auto_generated
    void __setItsRoomSchedularSystem(RoomSchedularSystem* const p_RoomSchedularSystem);
    
    //## auto_generated
    void _setItsRoomSchedularSystem(RoomSchedularSystem* const p_RoomSchedularSystem);
    
    //## auto_generated
    void _clearItsRoomSchedularSystem(void);
    
    //## auto_generated
    void __setItsRoomUser(RoomUser* const p_RoomUser);
    
    //## auto_generated
    void _setItsRoomUser(RoomUser* const p_RoomUser);
    
    //## auto_generated
    void _clearItsRoomUser(void);
    
    //## auto_generated
    void __setItsSecurityAndAccesSystem(SecurityAndAccesSystem* const p_SecurityAndAccesSystem);
    
    //## auto_generated
    void _setItsSecurityAndAccesSystem(SecurityAndAccesSystem* const p_SecurityAndAccesSystem);
    
    //## auto_generated
    void _clearItsSecurityAndAccesSystem(void);
    
    //## auto_generated
    void __setItsStakeholders(Stakeholders* const p_Stakeholders);
    
    //## auto_generated
    void _setItsStakeholders(Stakeholders* const p_Stakeholders);
    
    //## auto_generated
    void _clearItsStakeholders(void);
    
    //## auto_generated
    void __setItsStandards(Standards* const p_Standards);
    
    //## auto_generated
    void _setItsStandards(Standards* const p_Standards);
    
    //## auto_generated
    void _clearItsStandards(void);
    
    //## auto_generated
    void __setItsTemperatureSensor(TemperatureSensor* const p_TemperatureSensor);
    
    //## auto_generated
    void _setItsTemperatureSensor(TemperatureSensor* const p_TemperatureSensor);
    
    //## auto_generated
    void _clearItsTemperatureSensor(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedSmartRoomSystem : virtual public AOMInstance {
    DECLARE_META(SmartRoomSystem, OMAnimatedSmartRoomSystem)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\SmartRoomSystem.h
*********************************************************************/
