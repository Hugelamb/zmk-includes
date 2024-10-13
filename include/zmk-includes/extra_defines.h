/*  this file contains extra defines for various keycodes that would normally require
    excessively long codes to call */
#ifndef EP
    #define EP &ext_power
#endif
#ifndef ON 
    #define ON EP_ON
#endif
#ifndef OFF 
    #define OFF EP_OFF
#endif
#ifndef D_LT  
    #define D_LT   LC(LG(LEFT))     // move desktop left
#endif
#ifndef D_RT
    #define D_RT   LC(LG(RIGHT))    // move desktop right   
#endif
#ifndef TAB_RT
    #define TAB_RT LC(TAB)          // tab switcher forward/right
#endif 
#ifndef TAB_LT 
    #define TAB_LT LC(LS(TAB))      // tab switcher left/back 
#endif
#ifndef XXX
    #define XXX &none
#endif
#ifndef ___
    #define ___ &trans
#endif
#ifndef QUICK_TAP_MS
    #define QUICK_TAP_MS 175
#endif
#ifndef CCOPY
    #define CCOPY C_AC_COPY
#endif
#ifndef CPASTE
    #define CPASTE C_AC_PASTE
#endif
#ifndef CUNDO
    #define CUNDO C_AC_UNDO
#endif
#ifndef CREDO
    #define CREDO C_AC_REDO
#endif
// #ifndef
//     #define
// #endif