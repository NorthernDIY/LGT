/*
  							  	****************
*******************************  C HEADER FILE  **********************************
** 								**************** 						        **
** 																		        **
** project  : LGT8F88ABSPPrj												    	**
** filename : DrvSYS.h	 	 	   	 											**
** version  : 1.0 													   			**
** date     : April 01, 2013 										   			**
** 			  		 	 												   		**
**********************************************************************************
** 																		   		**
** Copyright (c) 2013, 	LogicGreen techologies									**
** All rights reserved.                                                    		**
**                                                                         		**
**********************************************************************************
VERSION HISTORY:
----------------
Version 	: 1.0
Date 		: April 01, 2013
Revised by 	: LogicGreen Software Group
Description : Original version.
*/

#ifndef _DrvSYS_H_
#define _DrvSYS_H_

/**********************************************************************************
***					            	MODULES USED								***													  	
**********************************************************************************/  
#include "common.h"
#include "avr/io.h"
#include "iolgt8f88a.h"

/**********************************************************************************
***					          	  MACRO AND DEFINTION							***													  	
**********************************************************************************/ 

/**********************************************************************************
***					            TYPEDEF AND STRUCTURE							***													  	
**********************************************************************************/  
typedef enum
{
	E_SMOD_IDLE,	/**< idle mode */
	E_SMOD_ADCNRM,	/**< ADC Noise Reduction mode */
	E_SMOD_PWRDOWN,	/**< power down mode */
	E_SMOD_PWROFF, /**< power off mode */
	//E_SMOD_REV1,
	//E_SMOD_REV2,
	//E_SMOD_STDBY,	/**< standby */
	//E_SMOD_ESTDBY,	/**< extended standby */
}ENUM_SLEEP_MOD;

/**********************************************************************************
***					            	EXPORTED FUNCTIONS							***													  	
**********************************************************************************/ 
void DrvSYS_EnableSMOD(ENUM_SLEEP_MOD eSMod);
void DrvSYS_DisableSMOD();

#endif
/**********************************************************************************
***					            		EOF										***													  	
**********************************************************************************/  

