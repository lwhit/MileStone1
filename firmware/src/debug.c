/* ************************************************************************** */
/** Descriptive File Name

  @Company
    Company Name

  @File Name
    filename.c

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

#include "debug.h"
#include "system\ports\sys_ports.h"     /* Only Ports System Services. */
/* This section lists the other files that are included in this file.
 */

/* TODO:  Include other files here if needed. */


/* ************************************************************************** */
/* ************************************************************************** */
/* Section: File Scope or Global Data                                         */
/* ************************************************************************** */
/* ************************************************************************** */

/*  A brief description of a section can be given directly below the section
    banner.
 */

/* ************************************************************************** */
/** Descriptive Data Item Name

  @Summary
    Brief one-line summary of the data item.
    
  @Description
    Full description, explaining the purpose and usage of data item.
    <p>
    Additional description in consecutive paragraphs separated by HTML 
    paragraph breaks, as necessary.
    <p>
    Type "JavaDoc" in the "How Do I?" IDE toolbar for more information on tags.
    
  @Remarks
    Any additional remarks
 */

#define PIN30 PORTS_BIT_POS_7
#define PIN31 PORTS_BIT_POS_6
#define PIN32 PORTS_BIT_POS_5
#define PIN33 PORTS_BIT_POS_4
#define PIN34 PORTS_BIT_POS_3
#define PIN35 PORTS_BIT_POS_2
#define PIN36 PORTS_BIT_POS_1
#define PIN37 PORTS_BIT_POS_0
//this LED is the only LED that has its own direct PIN to the PIC32
#define LEDPIN86 PORTS_BIT_POS_1
int global_data;


/* ************************************************************************** */
/* ************************************************************************** */
// Section: Local Functions                                                   */
/* ************************************************************************** */
/* ************************************************************************** */

/*  A brief description of a section can be given directly below the section
    banner.
 */

/* ************************************************************************** */

/** 
  @Function
    int ExampleLocalFunctionName ( int param1, int param2 ) 

  @Summary
    Brief one-line description of the function.

  @Description
    Full description, explaining the purpose and usage of the function.
    <p>
    Additional description in consecutive paragraphs separated by HTML 
    paragraph breaks, as necessary.
    <p>
    Type "JavaDoc" in the "How Do I?" IDE toolbar for more information on tags.

  @Precondition
    List and describe any required preconditions. If there are no preconditions,
    enter "None."

  @Parameters
    @param param1 Describe the first parameter to the function.
    
    @param param2 Describe the second parameter to the function.

  @Returns
    List (if feasible) and describe the return values of the function.
    <ul>
      <li>1   Indicates an error occurred
      <li>0   Indicates an error did not occur
    </ul>

  @Remarks
    Describe any special behavior not described above.
    <p>
    Any additional remarks.

  @Example
    @code
    if(ExampleFunctionName(1, 2) == 0)
    {
        return 3;
    }
 */
static int ExampleLocalFunction(int param1, int param2) {
    return 0;
}


/* ************************************************************************** */
/* ************************************************************************** */
// Section: Interface Functions                                               */
/* ************************************************************************** */
/* ************************************************************************** */

/*  A brief description of a section can be given directly below the section
    banner.
 */

// *****************************************************************************

/** 
  @Function
    int ExampleInterfaceFunctionName ( int param1, int param2 ) 

  @Summary
    Brief one-line description of the function.

  @Remarks
    Refer to the example_file.h interface header for function usage details.
 */
void toggleLED() {
    SYS_PORTS_PinToggle ( PORTS_ID_0, PORT_CHANNEL_C, LEDPIN86 );
}

void setupDebug(){
    //setup port E to talk to the debugger
    if(!setup){
    //First make all the pins output
        SYS_PORTS_PinDirectionSelect(PORTS_ID_0, SYS_PORTS_DIRECTION_OUTPUT, PORT_CHANNEL_E, PIN30);
        SYS_PORTS_PinDirectionSelect(PORTS_ID_0, SYS_PORTS_DIRECTION_OUTPUT, PORT_CHANNEL_E, PIN31);
        SYS_PORTS_PinDirectionSelect(PORTS_ID_0, SYS_PORTS_DIRECTION_OUTPUT, PORT_CHANNEL_E, PIN32);
        SYS_PORTS_PinDirectionSelect(PORTS_ID_0, SYS_PORTS_DIRECTION_OUTPUT, PORT_CHANNEL_E, PIN33);
        SYS_PORTS_PinDirectionSelect(PORTS_ID_0, SYS_PORTS_DIRECTION_OUTPUT, PORT_CHANNEL_E, PIN34);
        SYS_PORTS_PinDirectionSelect(PORTS_ID_0, SYS_PORTS_DIRECTION_OUTPUT, PORT_CHANNEL_E, PIN35);
        SYS_PORTS_PinDirectionSelect(PORTS_ID_0, SYS_PORTS_DIRECTION_OUTPUT, PORT_CHANNEL_E, PIN36);
        SYS_PORTS_PinDirectionSelect(PORTS_ID_0, SYS_PORTS_DIRECTION_OUTPUT, PORT_CHANNEL_E, PIN37);
        SYS_PORTS_PinDirectionSelect(PORTS_ID_0, SYS_PORTS_DIRECTION_OUTPUT, PORT_CHANNEL_C, LEDPIN86);
        
        //set them all low
        SYS_PORTS_PinWrite ( PORTS_ID_0, PORT_CHANNEL_E, PIN30, 0 );
        SYS_PORTS_PinWrite ( PORTS_ID_0, PORT_CHANNEL_E, PIN31, 0 );
        SYS_PORTS_PinWrite ( PORTS_ID_0, PORT_CHANNEL_E, PIN32, 0 );
        SYS_PORTS_PinWrite ( PORTS_ID_0, PORT_CHANNEL_E, PIN33, 0 );
        SYS_PORTS_PinWrite ( PORTS_ID_0, PORT_CHANNEL_E, PIN34, 0 );
        SYS_PORTS_PinWrite ( PORTS_ID_0, PORT_CHANNEL_E, PIN35, 0 );
        SYS_PORTS_PinWrite ( PORTS_ID_0, PORT_CHANNEL_E, PIN36, 0 );
        SYS_PORTS_PinWrite ( PORTS_ID_0, PORT_CHANNEL_E, PIN37, 0 );
        SYS_PORTS_PinWrite ( PORTS_ID_0, PORT_CHANNEL_C, LEDPIN86, 0 );
    }

    setup = true;
    
}

/* *****************************************************************************
 End of File
 */
