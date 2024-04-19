/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20235614
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: AirPurifier
//!	Generated Date	: Fri, 19, Apr 2024  
	File Path	: DefaultComponent\DefaultConfig\AirPurifier.h
*********************************************************************/

#ifndef AirPurifier_H
#define AirPurifier_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "SYSTEM_CONTEXT_AIR_PURIFIER.h"
//## class AirPurifier
#include "double_airQualityPPM_ProxyFlowPropertyInterface.h"
//## class AirPurifier
#include "evHumanPresence_ProxyReceptionInterface.h"
//## link itsAirQualitySensor
class AirQualitySensor;

//## link itsSmartRoomSystem
class SmartRoomSystem;

//## package SYSTEM_ANALYSIS::SYSTEM_CONTEXT::SYSTEM_CONTEXT_AIR_PURIFIER

//## class AirPurifier
class AirPurifier : public double_airQualityPPM_ProxyFlowPropertyInterface, public evHumanPresence_ProxyReceptionInterface {
public :

//#[ ignore
    //## package SYSTEM_ANALYSIS::SYSTEM_CONTEXT::SYSTEM_CONTEXT_AIR_PURIFIER
    class p_AirQualitySensor_C : public double_airQualityPPM_ProxyFlowPropertyInterface {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        p_AirQualitySensor_C(void);
        
        //## auto_generated
        virtual ~p_AirQualitySensor_C(void);
        
        ////    Operations    ////
        
        //## auto_generated
        void connectAirPurifier(AirPurifier* part);
        
        //## auto_generated
        double_airQualityPPM_ProxyFlowPropertyInterface* getItsDouble_airQualityPPM_ProxyFlowPropertyInterface(void);
        
        //## auto_generated
        virtual void setAirQualityPPM(double p_airQualityPPM);
        
        ////    Additional operations    ////
        
        //## auto_generated
        void setItsDouble_airQualityPPM_ProxyFlowPropertyInterface(double_airQualityPPM_ProxyFlowPropertyInterface* const p_double_airQualityPPM_ProxyFlowPropertyInterface);
    
    protected :
    
        //## auto_generated
        void cleanUpRelations(void);
        
        ////    Attributes    ////
    
    private :
    
        RhpInteger _p_;		//## attribute _p_
        
        ////    Relations and components    ////
        
        double_airQualityPPM_ProxyFlowPropertyInterface* itsDouble_airQualityPPM_ProxyFlowPropertyInterface;		//## link itsDouble_airQualityPPM_ProxyFlowPropertyInterface
    };
    
    //## package SYSTEM_ANALYSIS::SYSTEM_CONTEXT::SYSTEM_CONTEXT_AIR_PURIFIER
    class p_AirPurifier_C {
    public :
    
        //## auto_generated
        class InBound_C;
        
        //## auto_generated
        class OutBound_C;
        
        //## package SYSTEM_ANALYSIS::SYSTEM_CONTEXT::SYSTEM_CONTEXT_AIR_PURIFIER
        class InBound_C : public evHumanPresence_ProxyReceptionInterface {
            ////    Constructors and destructors    ////
            
        public :
        
            //## auto_generated
            InBound_C(void);
            
            //## auto_generated
            virtual ~InBound_C(void);
            
            ////    Operations    ////
            
            //## auto_generated
            virtual bool send(IOxfEvent* event, const IOxfEventGenerationParams& params);
            
            //## auto_generated
            virtual bool send(IOxfEvent* event);
            
            ////    Additional operations    ////
            
            //## auto_generated
            void setItsEvHumanPresence_ProxyReceptionInterface(evHumanPresence_ProxyReceptionInterface* const p_evHumanPresence_ProxyReceptionInterface);
            
            //## auto_generated
            p_AirPurifier_C* getPort(void) const;
            
            //## auto_generated
            void setPort(p_AirPurifier_C* const p_p_AirPurifier_C);
        
        protected :
        
            //## auto_generated
            void cleanUpRelations(void);
            
            ////    Relations and components    ////
        
        private :
        
            evHumanPresence_ProxyReceptionInterface* itsEvHumanPresence_ProxyReceptionInterface;		//## link itsEvHumanPresence_ProxyReceptionInterface
            
            p_AirPurifier_C* port;		//## link port
            
            ////    Framework operations    ////
        
        public :
        
            //## auto_generated
            void __setPort(p_AirPurifier_C* const p_p_AirPurifier_C);
            
            //## auto_generated
            void _setPort(p_AirPurifier_C* const p_p_AirPurifier_C);
            
            //## auto_generated
            void _clearPort(void);
        };
        
        //## package SYSTEM_ANALYSIS::SYSTEM_CONTEXT::SYSTEM_CONTEXT_AIR_PURIFIER
        class OutBound_C : public double_airQualityPPM_ProxyFlowPropertyInterface {
            ////    Constructors and destructors    ////
            
        public :
        
            //## auto_generated
            OutBound_C(void);
            
            //## auto_generated
            virtual ~OutBound_C(void);
            
            ////    Operations    ////
            
            //## auto_generated
            virtual void setAirQualityPPM(double p_airQualityPPM);
            
            ////    Additional operations    ////
            
            //## auto_generated
            void setItsDouble_airQualityPPM_ProxyFlowPropertyInterface(double_airQualityPPM_ProxyFlowPropertyInterface* const p_double_airQualityPPM_ProxyFlowPropertyInterface);
        
        protected :
        
            //## auto_generated
            void cleanUpRelations(void);
            
            ////    Relations and components    ////
        
        private :
        
            double_airQualityPPM_ProxyFlowPropertyInterface* itsDouble_airQualityPPM_ProxyFlowPropertyInterface;		//## link itsDouble_airQualityPPM_ProxyFlowPropertyInterface
        };
        
        ////    Constructors and destructors    ////
        
        //## auto_generated
        p_AirPurifier_C(void);
        
        //## auto_generated
        virtual ~p_AirPurifier_C(void);
        
        ////    Operations    ////
        
        //## auto_generated
        void connectAirPurifier(AirPurifier* part);
        
        //## auto_generated
        double_airQualityPPM_ProxyFlowPropertyInterface* getItsDouble_airQualityPPM_ProxyFlowPropertyInterface(void);
        
        //## auto_generated
        evHumanPresence_ProxyReceptionInterface* getItsEvHumanPresence_ProxyReceptionInterface(void);
        
        //## auto_generated
        void setItsDouble_airQualityPPM_ProxyFlowPropertyInterface(double_airQualityPPM_ProxyFlowPropertyInterface* const p_double_airQualityPPM_ProxyFlowPropertyInterface);
        
        //## auto_generated
        void setItsEvHumanPresence_ProxyReceptionInterface(evHumanPresence_ProxyReceptionInterface* const p_evHumanPresence_ProxyReceptionInterface);
        
        ////    Additional operations    ////
        
        //## auto_generated
        InBound_C* getInBound(void) const;
        
        //## auto_generated
        OutBound_C* getOutBound(void) const;
    
    protected :
    
        //## auto_generated
        void initRelations(void);
        
        ////    Attributes    ////
    
    private :
    
        RhpInteger _p_;		//## attribute _p_
        
        ////    Relations and components    ////
        
        InBound_C InBound;		//## classInstance InBound
        
        OutBound_C OutBound;		//## classInstance OutBound
        
        ////    Framework operations    ////
    
    public :
    
        //## auto_generated
        virtual void destroy(void);
    };
//#]

    ////    Friends    ////
    
#ifdef _OMINSTRUMENT
    friend class OMAnimatedAirPurifier;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    explicit AirPurifier(IOxfActive* const theActiveContext = NULL);
    
    //## auto_generated
    virtual ~AirPurifier(void);
    
    ////    Operations    ////
    
    //## operation indicateSystemStatus()
    virtual void indicateSystemStatus(void);
    
    //## operation printAirQuality()
    virtual void printAirQuality(void);
    
    //## operation purifyAir()
    virtual void purifyAir(void);
    
//#[ ignore
    void setAirQualityPPM(double p_airQualityPPM);
//#]

    //## operation systemCheck()
    virtual void systemCheck(void);
    
    ////    Additional operations    ////
    
    //## auto_generated
    p_AirQualitySensor_C* getP_AirQualitySensor(void) const;
    
    //## auto_generated
    p_AirQualitySensor_C* get_p_AirQualitySensor(void) const;
    
    //## auto_generated
    p_AirPurifier_C* getP_AirPurifier(void) const;
    
    //## auto_generated
    p_AirPurifier_C* get_p_AirPurifier(void) const;
    
    //## auto_generated
    const double getAirQualityPPM(void) const;
    
    //## auto_generated
    const double getDesiredAQPPM(void) const;
    
    //## auto_generated
    void setDesiredAQPPM(const double p_desiredAQPPM);
    
    //## auto_generated
    const double getPurifyRatePerSec(void) const;
    
    //## auto_generated
    void setPurifyRatePerSec(const double p_purifyRatePerSec);
    
    //## auto_generated
    const bool getSystemOperational(void) const;
    
    //## auto_generated
    void setSystemOperational(const bool p_systemOperational);
    
    //## auto_generated
    const AirQualitySensor* getItsAirQualitySensor(void) const;
    
    //## auto_generated
    void setItsAirQualitySensor(AirQualitySensor* const p_AirQualitySensor);
    
    //## auto_generated
    const SmartRoomSystem* getItsSmartRoomSystem(void) const;
    
    //## auto_generated
    void setItsSmartRoomSystem(SmartRoomSystem* const p_SmartRoomSystem);
    
    //## auto_generated
    virtual bool cancelTimeout(const IOxfTimeout* arg);
    
    //## auto_generated
    virtual bool startBehavior(void);

protected :

    //## auto_generated
    void initRelations(void);
    
    //## auto_generated
    void initStatechart(void);
    
    //## auto_generated
    void cleanUpRelations(void);
    
    //## auto_generated
    void cancelTimeouts(void);
    
    ////    Attributes    ////

private :

    double airQualityPPM;		//## attribute airQualityPPM
    
    double desiredAQPPM;		//## attribute desiredAQPPM
    
    double purifyRatePerSec;		//## attribute purifyRatePerSec
    
    bool systemOperational;		//## attribute systemOperational
    
    ////    Relations and components    ////
    
//#[ ignore
    p_AirQualitySensor_C p_AirQualitySensor;
    
    p_AirPurifier_C p_AirPurifier;
//#]

    AirQualitySensor* itsAirQualitySensor;		//## link itsAirQualitySensor
    
    SmartRoomSystem* itsSmartRoomSystem;		//## link itsSmartRoomSystem
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsAirQualitySensor(AirQualitySensor* const p_AirQualitySensor);
    
    //## auto_generated
    void _setItsAirQualitySensor(AirQualitySensor* const p_AirQualitySensor);
    
    //## auto_generated
    void _clearItsAirQualitySensor(void);
    
    //## auto_generated
    void __setItsSmartRoomSystem(SmartRoomSystem* const p_SmartRoomSystem);
    
    //## auto_generated
    void _setItsSmartRoomSystem(SmartRoomSystem* const p_SmartRoomSystem);
    
    //## auto_generated
    void _clearItsSmartRoomSystem(void);
    
    // rootState:
    //## statechart_method
    inline RhpBoolean rootState_IN(void) const;
    
    // SystemFault:
    //## statechart_method
    inline RhpBoolean SystemFault_IN(void) const;
    
    // SystemCheck:
    //## statechart_method
    inline RhpBoolean SystemCheck_IN(void) const;
    
    //## statechart_method
    IOxfReactive::TakeEventStatus SystemCheck_handleEvent(void);
    
    // On:
    //## statechart_method
    inline RhpBoolean On_IN(void) const;
    
    //## statechart_method
    void On_entDef(void);
    
    //## statechart_method
    void OnEntDef(void);
    
    //## statechart_method
    void On_exit(void);
    
    //## statechart_method
    void On_entShallowHist(void);
    
    //## statechart_method
    IOxfReactive::TakeEventStatus On_handleEvent(void);
    
    // Purifying:
    //## statechart_method
    inline RhpBoolean Purifying_IN(void) const;
    
    // Off:
    //## statechart_method
    inline RhpBoolean Off_IN(void) const;

protected :

    //## statechart_method
    virtual void rootState_entDef(void);
    
    //## statechart_method
    virtual IOxfReactive::TakeEventStatus rootState_processEvent(void);
    
    ////    Framework    ////
    
//#[ ignore
    enum AirPurifier_Enum {
        OMNonState = 0,
        SystemFault = 1,
        SystemCheck = 2,
        On = 3,
        Purifying = 4,
        Off = 5
    };
//#]

private :

//#[ ignore
    AirPurifier_Enum rootState_subState;
    
    AirPurifier_Enum rootState_active;
    
    AirPurifier_Enum On_subState;
    
    AirPurifier_Enum On_lastState;
    
    IOxfTimeout* On_timeout;
//#]
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedAirPurifier : virtual public AOMInstance {
    DECLARE_REACTIVE_META(AirPurifier, OMAnimatedAirPurifier)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
    
    //## statechart_method
    void rootState_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void SystemFault_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void SystemCheck_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void On_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Purifying_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Off_serializeStates(AOMSState* aomsState) const;
};
//#]
#endif // _OMINSTRUMENT

inline RhpBoolean AirPurifier::rootState_IN(void) const {
    return true;
}

inline RhpBoolean AirPurifier::SystemFault_IN(void) const {
    return rootState_subState == SystemFault;
}

inline RhpBoolean AirPurifier::SystemCheck_IN(void) const {
    return rootState_subState == SystemCheck;
}

inline RhpBoolean AirPurifier::On_IN(void) const {
    return rootState_subState == On;
}

inline RhpBoolean AirPurifier::Purifying_IN(void) const {
    return On_subState == Purifying;
}

inline RhpBoolean AirPurifier::Off_IN(void) const {
    return rootState_subState == Off;
}

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\AirPurifier.h
*********************************************************************/
