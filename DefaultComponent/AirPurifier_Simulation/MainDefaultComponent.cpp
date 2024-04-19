/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20235614
	Component	: DefaultComponent 
	Configuration 	: AirPurifier_Simulation
	Model Element	: AirPurifier_Simulation
//!	Generated Date	: Thu, 18, Apr 2024  
	File Path	: DefaultComponent\AirPurifier_Simulation\MainDefaultComponent.cpp
*********************************************************************/

//## auto_generated
#include "MainDefaultComponent.h"
RhpInteger main( void) {
    RhpInteger status = 0;
    try {
        if(OXF::initialize(0,NULL))
            {
                AirPurifier p_AirPurifier;
                p_AirPurifier.setShouldDelete(false);
                (void) p_AirPurifier.startBehavior();
                //#[ configuration DefaultComponent::AirPurifier_Simulation 
                //#]
                OXF::start();
                status = 0;
            }
        else
            {
                status = 1;
            }
    }
    catch (...)
    {
        status = 0;
    }
    return status;
}

/*********************************************************************
	File Path	: DefaultComponent\AirPurifier_Simulation\MainDefaultComponent.cpp
*********************************************************************/
