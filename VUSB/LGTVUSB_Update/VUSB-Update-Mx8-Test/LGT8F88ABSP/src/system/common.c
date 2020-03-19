/*
  							  	****************
*******************************  C SOURCE FILE  **********************************
** 								**************** 						        **
** 																		        **
** project  : LGT8F88ABSPPrj											    	**
** filename : common.c			  												**
** version  : 1.0 													   			**
** date     : April 01, 2013 										   			**
** 			  		 	 												   		**
**********************************************************************************
** 																		   		**
** Copyright (c) 2013, 	Logic Green Technologies								**
** All rights reserved.                                                    		**
**                                                                         		**
**********************************************************************************
VERSION HISTORY:
----------------
Version 	: 1.0
Date 		: April 01, 2013
Revised by 	: LGT Software Group
Description : Original version.
*/

/**********************************************************************************
*** 								MODULES USED								*** 													
**********************************************************************************/
#include "common.h"

/**********************************************************************************
*** 								EXPORTED FUNCTIONS							*** 													
**********************************************************************************/
/**
 * @fn u8 common_ascii_to_hex(u8 ascii)
 */
u8 common_ascii_to_hex(u8 ascii)
{
	u8 hex;
	if(('0' <= ascii) && (ascii <= '9'))
		hex = ascii - '0';
	else if(('A' <= ascii) && (ascii <= 'F'))
		hex = ascii - 'A' + 10;
	else if(('a' <= ascii) && (ascii <= 'f'))
		hex = ascii - 'a' + 10;
	else
		hex = ASCII_TO_HEX_FALSE;
	return(hex);
}

/**********************************************************************************
*** 										EOF									*** 													
**********************************************************************************/