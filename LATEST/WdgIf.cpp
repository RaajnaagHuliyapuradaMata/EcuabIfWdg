/******************************************************************************/
/* File   : WdgIf.cpp                                                         */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "Module.hpp"
#include "WdgIf.hpp"
#include "infWdgIf_Imp.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define WDGIF_AR_RELEASE_VERSION_MAJOR                                         4
#define WDGIF_AR_RELEASE_VERSION_MINOR                                         3

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/
#if(WDGIF_AR_RELEASE_VERSION_MAJOR != STD_AR_RELEASE_VERSION_MAJOR)
   #error "Incompatible WDGIF_AR_RELEASE_VERSION_MAJOR!"
#endif

#if(WDGIF_AR_RELEASE_VERSION_MINOR != STD_AR_RELEASE_VERSION_MINOR)
   #error "Incompatible WDGIF_AR_RELEASE_VERSION_MINOR!"
#endif

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/
CONSTP2VAR(infEcuMClient, WDGIF_VAR, WDGIF_CONST) gptrinfEcuMClient_WdgIf = &WdgIf;

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
VAR(module_WdgIf, WDGIF_VAR) WdgIf;

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
FUNC(void, WDGIF_CODE) module_WdgIf::InitFunction(
   CONSTP2CONST(CfgModule_TypeAbstract, WDGIF_CONFIG_DATA, WDGIF_APPL_CONST) lptrCfgModule
){
#if(STD_ON == WdgIf_InitCheck)
   if(
         E_OK
      != IsInitDone
   ){
#endif
      if(NULL_PTR != lptrCfgModule){
         lptrCfg = lptrCfgModule;
      }
      else{
#if(STD_ON == WdgIf_DevErrorDetect)
         Det_ReportError(
               0 //TBD: IdModule
            ,  0 //TBD: IdInstance
            ,  0 //TBD: IdApi
            ,  0 //TBD: IdError
         );
#endif
      }
#if(STD_ON == WdgIf_InitCheck)
      IsInitDone = E_OK;
   }
   else{
#if(STD_ON == WdgIf_DevErrorDetect)
      Det_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  WDGIF_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, WDGIF_CODE) module_WdgIf::DeInitFunction(
   void
){
#if(STD_ON == WdgIf_InitCheck)
   if(
         E_OK
      == IsInitDone
   ){
#endif
#if(STD_ON == WdgIf_InitCheck)
      IsInitDone = E_NOT_OK;
   }
   else{
#if(STD_ON == WdgIf_DevErrorDetect)
      Det_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  WDGIF_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, WDGIF_CODE) module_WdgIf::MainFunction(
   void
){
#if(STD_ON == WdgIf_InitCheck)
   if(
         E_OK
      == IsInitDone
   ){
#endif
#if(STD_ON == WdgIf_InitCheck)
   }
   else{
#if(STD_ON == WdgIf_DevErrorDetect)
      Det_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  WDGIF_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, WDGIF_CODE) module_WdgIf::SetMode(
   void
){
}

FUNC(void, WDGIF_CODE) module_WdgIf::SetTriggerCondition(
   void
){
}

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

