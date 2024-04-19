/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20235614
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: IB_Power
//!	Generated Date	: Fri, 19, Apr 2024  
	File Path	: DefaultComponent\DefaultConfig\IB_Power.h
*********************************************************************/

#ifndef IB_Power_H
#define IB_Power_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "SYSTEM_CONTEXT.h"
//## package SYSTEM_ANALYSIS::SYSTEM_CONTEXT

//## class IB_Power
class IB_Power {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedIB_Power;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    IB_Power(void);
    
    //## auto_generated
    virtual ~IB_Power(void) = 0;
    
    ////    Operations    ////
    
    //## operation startHVAC()
    virtual void startHVAC(void) = 0;
    
    //## operation stopHVAC()
    virtual void stopHVAC(void) = 0;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedIB_Power : virtual public AOMInstance {
    DECLARE_META(IB_Power, OMAnimatedIB_Power)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\IB_Power.h
*********************************************************************/
