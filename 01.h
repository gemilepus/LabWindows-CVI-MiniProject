/**************************************************************************/
/* LabWindows/CVI User Interface Resource (UIR) Include File              */
/*                                                                        */
/* WARNING: Do not add to, delete from, or otherwise modify the contents  */
/*          of this include file.                                         */
/**************************************************************************/

#include <userint.h>

#ifdef __cplusplus
    extern "C" {
#endif

     /* Panels and Controls: */

#define  PANEL                            1
#define  PANEL_LED_22                     2       /* control type: LED, callback function: (none) */
#define  PANEL_LED_23                     3       /* control type: LED, callback function: (none) */
#define  PANEL_LED_24                     4       /* control type: LED, callback function: (none) */
#define  PANEL_LED_25                     5       /* control type: LED, callback function: (none) */
#define  PANEL_LED_26                     6       /* control type: LED, callback function: (none) */
#define  PANEL_LED_27                     7       /* control type: LED, callback function: (none) */
#define  PANEL_LED_28                     8       /* control type: LED, callback function: (none) */
#define  PANEL_LED_15                     9       /* control type: LED, callback function: (none) */
#define  PANEL_LED_16                     10      /* control type: LED, callback function: (none) */
#define  PANEL_LED_17                     11      /* control type: LED, callback function: (none) */
#define  PANEL_LED_18                     12      /* control type: LED, callback function: (none) */
#define  PANEL_LED_19                     13      /* control type: LED, callback function: (none) */
#define  PANEL_LED_20                     14      /* control type: LED, callback function: (none) */
#define  PANEL_LED_21                     15      /* control type: LED, callback function: (none) */
#define  PANEL_LED_8                      16      /* control type: LED, callback function: (none) */
#define  PANEL_LED_9                      17      /* control type: LED, callback function: (none) */
#define  PANEL_LED_10                     18      /* control type: LED, callback function: (none) */
#define  PANEL_LED_11                     19      /* control type: LED, callback function: (none) */
#define  PANEL_LED_12                     20      /* control type: LED, callback function: (none) */
#define  PANEL_LED_13                     21      /* control type: LED, callback function: (none) */
#define  PANEL_LED_14                     22      /* control type: LED, callback function: (none) */
#define  PANEL_LED_6                      23      /* control type: LED, callback function: (none) */
#define  PANEL_LED_5                      24      /* control type: LED, callback function: (none) */
#define  PANEL_LED_3                      25      /* control type: LED, callback function: (none) */
#define  PANEL_LED_2                      26      /* control type: LED, callback function: (none) */
#define  PANEL_LED_4                      27      /* control type: LED, callback function: (none) */
#define  PANEL_LED_7                      28      /* control type: LED, callback function: (none) */
#define  PANEL_LED                        29      /* control type: LED, callback function: (none) */
#define  PANEL_COMMANDBUTTON              30      /* control type: command, callback function: QUIT */
#define  PANEL_COMMANDBUTTON_14           31      /* control type: command, callback function: BUTTON0C */
#define  PANEL_COMMANDBUTTON_13           32      /* control type: command, callback function: BUTTON0B */
#define  PANEL_COMMANDBUTTON_12           33      /* control type: command, callback function: BUTTON0A */
#define  PANEL_COMMANDBUTTON_15           34      /* control type: command, callback function: BUTTON0D */
#define  PANEL_COMMANDBUTTON_11           35      /* control type: command, callback function: BUTTON09 */
#define  PANEL_COMMANDBUTTON_10           36      /* control type: command, callback function: BUTTON08 */
#define  PANEL_COMMANDBUTTON_9            37      /* control type: command, callback function: BUTTON07 */
#define  PANEL_COMMANDBUTTON_8            38      /* control type: command, callback function: BUTTON06 */
#define  PANEL_COMMANDBUTTON_7            39      /* control type: command, callback function: BUTTON05 */
#define  PANEL_COMMANDBUTTON_6            40      /* control type: command, callback function: BUTTON04 */
#define  PANEL_COMMANDBUTTON_5            41      /* control type: command, callback function: BUTTON03 */
#define  PANEL_COMMANDBUTTON_4            42      /* control type: command, callback function: BUTTON02 */
#define  PANEL_TIMER                      43      /* control type: timer, callback function: TIMEFUNCTION */
#define  PANEL_COMMANDBUTTON_16           44      /* control type: command, callback function: BUTTON00 */
#define  PANEL_COMMANDBUTTON_3            45      /* control type: command, callback function: BUTTON01 */
#define  PANEL_NUMERIC                    46      /* control type: numeric, callback function: (none) */
#define  PANEL_TEXTMSG_2                  47      /* control type: textMsg, callback function: (none) */
#define  PANEL_DECORATION                 48      /* control type: deco, callback function: (none) */
#define  PANEL_TEXTMSG                    49      /* control type: textMsg, callback function: (none) */
#define  PANEL_DECORATION_2               50      /* control type: deco, callback function: (none) */
#define  PANEL_TEXTMSG_3                  51      /* control type: textMsg, callback function: (none) */
#define  PANEL_TEXTMSG_5                  52      /* control type: textMsg, callback function: (none) */
#define  PANEL_TEXTMSG_7                  53      /* control type: textMsg, callback function: (none) */
#define  PANEL_TEXTMSG_6                  54      /* control type: textMsg, callback function: (none) */
#define  PANEL_TEXTMSG_4                  55      /* control type: textMsg, callback function: (none) */


     /* Control Arrays: */

#define  CTRLARRAY                        1
#define  CTRLARRAY_2                      2

     /* Menu Bars, Menus, and Menu Items: */

          /* (no menu bars in the resource file) */


     /* Callback Prototypes: */

int  CVICALLBACK BUTTON00(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK BUTTON01(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK BUTTON02(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK BUTTON03(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK BUTTON04(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK BUTTON05(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK BUTTON06(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK BUTTON07(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK BUTTON08(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK BUTTON09(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK BUTTON0A(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK BUTTON0B(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK BUTTON0C(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK BUTTON0D(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK QUIT(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK TIMEFUNCTION(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);


#ifdef __cplusplus
    }
#endif
