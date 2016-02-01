/* ************************************************************************** */
/** Descriptive File Name

  @Company
    Company Name

  @File Name
    timerCallBack.c

  @Summary
    Brief description of the file.

  @Description
    Describe the purpose of this file.
 */
/* ************************************************************************** */

/* ************************************************************************** */
/* ************************************************************************** */
/* Section: Included Files                                                    */
/* ************************************************************************** */
/* ************************************************************************** */

/* This section lists the other files that are included in this file.
 */
#include "timerCallBack.h"
#include "debug.h"
#include "queue.h"

/* ************************************************************************** */
/* ************************************************************************** */
/* Section: File Scope or Global Data                                         */
/* ************************************************************************** */
/* ************************************************************************** */




/* ************************************************************************** */
/* ************************************************************************** */
// Section: Local Functions                                                   */
/* ************************************************************************** */
/* ************************************************************************** */

/*  A brief description of a section can be given directly below the section
    banner.
 */

/* ************************************************************************** */



/* ************************************************************************** */
/* ************************************************************************** */
// Section: Interface Functions                                               */
/* ************************************************************************** */
/* ************************************************************************** */

/*  Holds all the callbacks for the app
 */

// *****************************************************************************


/** 
  @Function
    void vAppTimerCallback ( TimerHandle_t xTimer ) 

  @Summary
    Callback for the app1 timer.

  @Remarks
    Refer to the timerCallBack.h interface header for function usage details.
 */
void vAppTimerCallback( TimerHandle_t xTimer){
    appMessage myNewMessage;
    myNewMessage.messID = 0x0;
    myNewMessage.message[0] = 'y';
    myNewMessage.message[1] = 'e';
    myNewMessage.message[2] = 'a';
    myNewMessage.message[3] = 'h';
   
    xQueueSend( queueHandle, &myNewMessage, portMAX_DELAY );
    
}
/* *****************************************************************************
 End of File
 */
