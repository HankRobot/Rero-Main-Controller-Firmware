/*******************************************************************************
 * Functions for sensor page in rero GUI.
 *
 * Company: Cytron Technologies Sdn Bhd
 * Website: http://www.cytron.com.my
 * Email:   support@cytron.com.my
 *******************************************************************************/

#ifndef SENSORPAGE_H
#define	SENSORPAGE_H

#include "Microchip/Graphics/Graphics.h"



/*******************************************************************************
 * PUBLIC FUNCTION PROTOTYPES
 *******************************************************************************/

void vCreateSensorPage(void);
WORD usMsgSensorPage(WORD objMsg, OBJ_HEADER *pObj, GOL_MSG *pMsg);
void vUpdateSensorPage(void);



#endif	/* SENSORPAGE_H */
