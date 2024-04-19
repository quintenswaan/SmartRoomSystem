
############# Target type (Debug/Release) ##################
############################################################
CPPCompileDebug= /Zi /Od /D "_DEBUG" $(LIBCRT_FLAG)d  /Fd"$(TARGET_NAME)" 
CPPCompileRelease= /Ox /D"NDEBUG" $(LIBCRT_FLAG) /Fd"$(TARGET_NAME)" 
LinkDebug=
LinkRelease=
BuildSet=Debug
SUBSYSTEM=/SUBSYSTEM:console
RPFrameWorkDll=False
SimulinkLibName=

ConfigurationCPPCompileSwitches=   /I . /I . /I $(OMROOT)\LangCpp /I $(OMROOT)\LangCpp\oxf /nologo /W3 $(ENABLE_EH) $(CRT_FLAGS) $(CPPCompileDebug) /D "_AFXDLL" /D "WIN32" /D "_CONSOLE" /D "_MBCS" /D "_WINDOWS" $(INST_FLAGS) $(INCLUDE_PATH) $(INST_INCLUDES) /c   

SIMULINK_CONFIG=False
!IF "$(SIMULINK_CONFIG)" == "True"
ConfigurationCPPCompileSwitches=$(ConfigurationCPPCompileSwitches) /D "OM_WITH_CLEANUP"
!ENDIF


!IF "$(RPFrameWorkDll)" == "True"
ConfigurationCPPCompileSwitches=$(ConfigurationCPPCompileSwitches) /D "FRAMEWORK_DLL"
!ENDIF

################### Compilation flags ######################
############################################################
INCLUDE_QUALIFIER=/I
DEFINE_QUALIFIER=/D

!IF "False" == "True"
MT_PREFIX=MT
LIBCRT_FLAG=/MT
!ELSE
MT_PREFIX=
LIBCRT_FLAG=/MD
!ENDIF

LIB_PREFIX=MSVC15x86$(MT_PREFIX)

CRT_FLAGS=$(DEFINE_QUALIFIER)_CRT_SECURE_NO_DEPRECATE $(DEFINE_QUALIFIER)_CRT_SECURE_NO_WARNINGS
ENABLE_EH=/EHa

WINMM_LIB=winmm.lib

################### Commands definition #########################
#################################################################
RMDIR = rmdir
LIB_CMD=link.exe -lib
LINK_CMD=link.exe
LIB_FLAGS=$(LinkDebug)  /NOLOGO   
LINK_FLAGS=$(LinkDebug)  /NOLOGO    $(SUBSYSTEM) /MACHINE:x86 

############### Generated macros #################
##################################################

FLAGSFILE=
RULESFILE=
OMROOT="C:\Program Files (x86)\IBM\Rhapsody\9.0\Share"
RHPROOT="C:\Program Files (x86)\IBM\Rhapsody\9.0"
FRAMEWORK_LIB_ROOT="C:\ProgramData\IBM\Rhapsody\9.0\UserShare"

CPP_EXT=.cpp
H_EXT=.h
OBJ_EXT=.obj
EXE_EXT=.exe
LIB_EXT=.lib

INSTRUMENTATION=Animation

TIME_MODEL=RealTime

TARGET_TYPE=Executable

TARGET_NAME=DefaultComponent

all : $(TARGET_NAME)$(EXE_EXT) DefaultComponent.mak

TARGET_MAIN=MainDefaultComponent

LIBS=

INCLUDE_PATH= \
  $(INCLUDE_QUALIFIER)$(OMROOT)/LangCpp/osconfig/WIN32

ADDITIONAL_OBJS=

OBJS= \
  SmartRoomSystem.obj \
  Stakeholders.obj \
  Standards.obj \
  NaturalEnvironment.obj \
  HVAC.obj \
  FireSprinklerSystem.obj \
  RoomSchedularSystem.obj \
  SecurityAndAccesSystem.obj \
  IB_Power.obj \
  IB_Mode.obj \
  RoomUser.obj \
  AirPurifier.obj \
  AirQualitySensor.obj \
  TemperatureSensor.obj \
  USE_CASES.obj \
  SYSTEM_CONTEXT.obj \
  SYSTEM_CONTEXT_AIR_PURIFIER.obj \
  OPERATING_ENVIRONMENT.obj \
  USER_MODEL.obj \
  ProxyPortInterfaces.obj




OBJ_DIR=

!IF "$(OBJ_DIR)"!=""
CREATE_OBJ_DIR=if not exist $(OBJ_DIR) mkdir $(OBJ_DIR)
CLEAN_OBJ_DIR= if exist $(OBJ_DIR) $(RMDIR) $(OBJ_DIR)
!ELSE
CREATE_OBJ_DIR=
CLEAN_OBJ_DIR=
!ENDIF

######################## Predefined macros ############################
#######################################################################
!IF "$(OBJS)" != ""
$(OBJS) : $(INST_LIBS) $(OXF_LIBS)
!ENDIF

LIB_POSTFIX=
!IF "$(BuildSet)"=="Release"
LIB_POSTFIX=R
!ENDIF

!IF "$(TARGET_TYPE)" == "Executable"
LinkDebug=$(LinkDebug) /DEBUG
LinkRelease=$(LinkRelease) /OPT:NOREF
!ELSEIF "$(TARGET_TYPE)" == "Library"
LinkDebug=$(LinkDebug)
!ENDIF


!IF "$(INSTRUMENTATION)" == "Animation"
INST_FLAGS=/D "OMANIMATOR"
INST_INCLUDES=/I $(OMROOT)\LangCpp\aom /I $(OMROOT)\LangCpp\tom
!IF "$(RPFrameWorkDll)" == "True"
INST_LIBS= 
OXF_LIBS=$(OMROOT)\LangCpp\lib\$(LIB_PREFIX)oxfanimdll$(LIB_POSTFIX)$(LIB_EXT) 
!ELSE
INST_LIBS= $(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)aomanim$(LIB_POSTFIX)$(LIB_EXT) $(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)oxsiminst$(LIB_POSTFIX)$(LIB_EXT)
OXF_LIBS=$(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)oxfinst$(LIB_POSTFIX)$(LIB_EXT) $(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)omComAppl$(LIB_POSTFIX)$(LIB_EXT) $(SimulinkLibName)
!ENDIF
SOCK_LIB=wsock32.lib

!ELSEIF "$(INSTRUMENTATION)" == "Tracing"
INST_FLAGS=/D "OMTRACER"
INST_INCLUDES=/I $(OMROOT)\LangCpp\aom /I $(OMROOT)\LangCpp\tom
!IF "$(RPFrameWorkDll)" == "True"
INST_LIBS=
OXF_LIBS= $(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)oxftracedll$(LIB_POSTFIX)$(LIB_EXT) 
!ELSE
INST_LIBS=$(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)tomtrace$(LIB_POSTFIX)$(LIB_EXT) $(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)aomtrace$(LIB_POSTFIX)$(LIB_EXT) $(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)oxsiminst$(LIB_POSTFIX)$(LIB_EXT)
OXF_LIBS= $(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)oxfinst$(LIB_POSTFIX)$(LIB_EXT) $(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)omComAppl$(LIB_POSTFIX)$(LIB_EXT) $(SimulinkLibName)
!ENDIF
SOCK_LIB=wsock32.lib

!ELSEIF "$(INSTRUMENTATION)" == "None" 
INST_FLAGS=
INST_INCLUDES=
INST_LIBS=
!IF "$(RPFrameWorkDll)" == "True"
OXF_LIBS=$(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)oxfdll$(LIB_POSTFIX)$(LIB_EXT) $(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)oxsim$(LIB_POSTFIX)$(LIB_EXT)
!ELSE
OXF_LIBS=$(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)oxf$(LIB_POSTFIX)$(LIB_EXT) $(SimulinkLibName) $(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)oxsim$(LIB_POSTFIX)$(LIB_EXT)
!ENDIF
SOCK_LIB=

!ELSE
!ERROR An invalid Instrumentation $(INSTRUMENTATION) is specified.
!ENDIF



################## Generated dependencies ########################
##################################################################






SmartRoomSystem.obj : SmartRoomSystem.cpp SmartRoomSystem.h    SYSTEM_CONTEXT.h RoomUser.h Stakeholders.h Standards.h NaturalEnvironment.h HVAC.h FireSprinklerSystem.h RoomSchedularSystem.h SecurityAndAccesSystem.h TemperatureSensor.h AirPurifier.h IB_Power.h IB_Mode.h evHumanPresence_ProxyReceptionInterface.h int_currentTemp_ProxyFlowPropertyInterface.h double_airQualityPPM_ProxyFlowPropertyInterface.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"SmartRoomSystem.obj" "SmartRoomSystem.cpp" 



Stakeholders.obj : Stakeholders.cpp Stakeholders.h    SYSTEM_CONTEXT.h SmartRoomSystem.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Stakeholders.obj" "Stakeholders.cpp" 



Standards.obj : Standards.cpp Standards.h    SYSTEM_CONTEXT.h SmartRoomSystem.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Standards.obj" "Standards.cpp" 



NaturalEnvironment.obj : NaturalEnvironment.cpp NaturalEnvironment.h    SYSTEM_CONTEXT.h SmartRoomSystem.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"NaturalEnvironment.obj" "NaturalEnvironment.cpp" 



HVAC.obj : HVAC.cpp HVAC.h    SYSTEM_CONTEXT.h SmartRoomSystem.h IB_Power.h IB_Mode.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"HVAC.obj" "HVAC.cpp" 



FireSprinklerSystem.obj : FireSprinklerSystem.cpp FireSprinklerSystem.h    SYSTEM_CONTEXT.h SmartRoomSystem.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"FireSprinklerSystem.obj" "FireSprinklerSystem.cpp" 



RoomSchedularSystem.obj : RoomSchedularSystem.cpp RoomSchedularSystem.h    SYSTEM_CONTEXT.h SmartRoomSystem.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"RoomSchedularSystem.obj" "RoomSchedularSystem.cpp" 



SecurityAndAccesSystem.obj : SecurityAndAccesSystem.cpp SecurityAndAccesSystem.h    SYSTEM_CONTEXT.h SmartRoomSystem.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"SecurityAndAccesSystem.obj" "SecurityAndAccesSystem.cpp" 



IB_Power.obj : IB_Power.cpp IB_Power.h    SYSTEM_CONTEXT.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"IB_Power.obj" "IB_Power.cpp" 



IB_Mode.obj : IB_Mode.cpp IB_Mode.h    SYSTEM_CONTEXT.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"IB_Mode.obj" "IB_Mode.cpp" 



RoomUser.obj : RoomUser.cpp RoomUser.h    SYSTEM_CONTEXT.h SmartRoomSystem.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"RoomUser.obj" "RoomUser.cpp" 



AirPurifier.obj : AirPurifier.cpp AirPurifier.h    SYSTEM_CONTEXT_AIR_PURIFIER.h AirQualitySensor.h SmartRoomSystem.h double_airQualityPPM_ProxyFlowPropertyInterface.h SYSTEM_CONTEXT.h evHumanPresence_ProxyReceptionInterface.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"AirPurifier.obj" "AirPurifier.cpp" 



AirQualitySensor.obj : AirQualitySensor.cpp AirQualitySensor.h    SYSTEM_CONTEXT_AIR_PURIFIER.h AirPurifier.h double_airQualityPPM_ProxyFlowPropertyInterface.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"AirQualitySensor.obj" "AirQualitySensor.cpp" 



TemperatureSensor.obj : TemperatureSensor.cpp TemperatureSensor.h    OPERATING_ENVIRONMENT.h SmartRoomSystem.h int_currentTemp_ProxyFlowPropertyInterface.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"TemperatureSensor.obj" "TemperatureSensor.cpp" 



USE_CASES.obj : USE_CASES.cpp USE_CASES.h    
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"USE_CASES.obj" "USE_CASES.cpp" 



SYSTEM_CONTEXT.obj : SYSTEM_CONTEXT.cpp SYSTEM_CONTEXT.h    SmartRoomSystem.h Stakeholders.h Standards.h NaturalEnvironment.h HVAC.h FireSprinklerSystem.h RoomSchedularSystem.h SecurityAndAccesSystem.h IB_Power.h IB_Mode.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"SYSTEM_CONTEXT.obj" "SYSTEM_CONTEXT.cpp" 



SYSTEM_CONTEXT_AIR_PURIFIER.obj : SYSTEM_CONTEXT_AIR_PURIFIER.cpp SYSTEM_CONTEXT_AIR_PURIFIER.h    AirPurifier.h AirQualitySensor.h SYSTEM_CONTEXT.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"SYSTEM_CONTEXT_AIR_PURIFIER.obj" "SYSTEM_CONTEXT_AIR_PURIFIER.cpp" 



OPERATING_ENVIRONMENT.obj : OPERATING_ENVIRONMENT.cpp OPERATING_ENVIRONMENT.h    TemperatureSensor.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"OPERATING_ENVIRONMENT.obj" "OPERATING_ENVIRONMENT.cpp" 



USER_MODEL.obj : USER_MODEL.cpp USER_MODEL.h    HVAC.h TemperatureSensor.h SmartRoomSystem.h AirPurifier.h AirQualitySensor.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"USER_MODEL.obj" "USER_MODEL.cpp" 



ProxyPortInterfaces.obj : ProxyPortInterfaces.cpp ProxyPortInterfaces.h    int_currentTemp_ProxyFlowPropertyInterface.h evHumanPresence_ProxyReceptionInterface.h double_airQualityPPM_ProxyFlowPropertyInterface.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"ProxyPortInterfaces.obj" "ProxyPortInterfaces.cpp" 






$(TARGET_MAIN)$(OBJ_EXT) : $(TARGET_MAIN)$(CPP_EXT) $(OBJS) 
	$(CPP) $(ConfigurationCPPCompileSwitches) /Fo"$(TARGET_MAIN)$(OBJ_EXT)" $(TARGET_MAIN)$(CPP_EXT)

########################## Linking instructions ###############################
###############################################################################
$(TARGET_NAME)$(EXE_EXT): $(OBJS) $(ADDITIONAL_OBJS) $(TARGET_MAIN)$(OBJ_EXT) DefaultComponent.mak 
	@echo Linking $(TARGET_NAME)$(EXE_EXT)
	$(LINK_CMD)  $(TARGET_MAIN)$(OBJ_EXT) $(OBJS) $(ADDITIONAL_OBJS) \
	$(LIBS) \
	$(INST_LIBS) \
	$(OXF_LIBS) \
	$(SOCK_LIB) \
	$(WINMM_LIB) \
	$(LINK_FLAGS) /out:$(TARGET_NAME)$(EXE_EXT)
	if exist $(TARGET_NAME)$(EXE_EXT).manifest mt.exe -manifest $@.manifest -outputresource:$(TARGET_NAME)$(EXE_EXT);1



$(TARGET_NAME)$(LIB_EXT) : $(OBJS) $(ADDITIONAL_OBJS) DefaultComponent.mak
	@echo Building library $@
	$(LIB_CMD) $(LIB_FLAGS) /out:$(TARGET_NAME)$(LIB_EXT) $(OBJS) $(ADDITIONAL_OBJS) $(LIBS)

clean:
	@echo Cleanup
	if exist SmartRoomSystem.obj erase SmartRoomSystem.obj
	if exist Stakeholders.obj erase Stakeholders.obj
	if exist Standards.obj erase Standards.obj
	if exist NaturalEnvironment.obj erase NaturalEnvironment.obj
	if exist HVAC.obj erase HVAC.obj
	if exist FireSprinklerSystem.obj erase FireSprinklerSystem.obj
	if exist RoomSchedularSystem.obj erase RoomSchedularSystem.obj
	if exist SecurityAndAccesSystem.obj erase SecurityAndAccesSystem.obj
	if exist IB_Power.obj erase IB_Power.obj
	if exist IB_Mode.obj erase IB_Mode.obj
	if exist RoomUser.obj erase RoomUser.obj
	if exist AirPurifier.obj erase AirPurifier.obj
	if exist AirQualitySensor.obj erase AirQualitySensor.obj
	if exist TemperatureSensor.obj erase TemperatureSensor.obj
	if exist USE_CASES.obj erase USE_CASES.obj
	if exist SYSTEM_CONTEXT.obj erase SYSTEM_CONTEXT.obj
	if exist SYSTEM_CONTEXT_AIR_PURIFIER.obj erase SYSTEM_CONTEXT_AIR_PURIFIER.obj
	if exist OPERATING_ENVIRONMENT.obj erase OPERATING_ENVIRONMENT.obj
	if exist USER_MODEL.obj erase USER_MODEL.obj
	if exist ProxyPortInterfaces.obj erase ProxyPortInterfaces.obj
	if exist $(TARGET_MAIN)$(OBJ_EXT) erase $(TARGET_MAIN)$(OBJ_EXT)
	if exist *$(OBJ_EXT) erase *$(OBJ_EXT)
	if exist $(TARGET_NAME).pdb erase $(TARGET_NAME).pdb
	if exist $(TARGET_NAME)$(LIB_EXT) erase $(TARGET_NAME)$(LIB_EXT)
	if exist $(TARGET_NAME).ilk erase $(TARGET_NAME).ilk
	if exist $(TARGET_NAME)$(EXE_EXT) erase $(TARGET_NAME)$(EXE_EXT)
	if exist $(TARGET_NAME)$(EXE_EXT).manifest erase $(TARGET_NAME)$(EXE_EXT).manifest
	$(CLEAN_OBJ_DIR)
	
