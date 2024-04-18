/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20174215
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: IB_Mode
//!	Generated Date	: Thu, 18, Apr 2024  
	File Path	: DefaultComponent\DefaultConfig\IB_Mode.h
*********************************************************************/

#ifndef IB_Mode_H
#define IB_Mode_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "SYSTEM_CONTEXT.h"
//## package SYSTEM_ANALYSIS::SYSTEM_CONTEXT

//## class IB_Mode
class IB_Mode {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedIB_Mode;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    IB_Mode(void);
    
    //## auto_generated
    virtual ~IB_Mode(void) = 0;
    
    ////    Operations    ////
    
    //## operation modeCool()
    virtual void modeCool(void) = 0;
    
    //## operation modeHeat()
    virtual void modeHeat(void) = 0;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedIB_Mode : virtual public AOMInstance {
    DECLARE_META(IB_Mode, OMAnimatedIB_Mode)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\IB_Mode.h
*********************************************************************/
