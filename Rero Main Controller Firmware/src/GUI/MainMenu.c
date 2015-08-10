/*******************************************************************************
 * Functions for main menu in rero GUI.
 *
 * Company: Cytron Technologies Sdn Bhd
 * Website: http://www.cytron.com.my
 * Email:   support@cytron.com.my
 *******************************************************************************/

#include "Variables.h"
#include "GUI/Custom Graphic Object/Battery.h"
#include "GUI/GraphicScreens.h"



/*******************************************************************************
 * PRIVATE DEFINITION
 *******************************************************************************/

// Center line for rero button, settings button and battery icon.
#define GRID_Y1                 28

// Center line for the menu button.
#define GRID_X1                 60
#define GRID_X2                 160
#define GRID_X3                 260

#define GRID_Y2                 93
#define GRID_Y3                 181

// Size for the menu button.
#define BTN_MENU_WIDTH          72
#define BTN_MENU_HEIGHT         72



// Graphic objects size and position.
// L = Left, R = Right, T = Top, B = Bottom.
// Rero button.
#define BTN_RERO_WIDTH          98
#define BTN_RERO_HEIGHT         24
#define BTN_RERO_L              16
#define BTN_RERO_R              (BTN_RERO_L + BTN_RERO_WIDTH)
#define BTN_RERO_T              (GRID_Y1 - (BTN_RERO_HEIGHT / 2))
#define BTN_RERO_B              (BTN_RERO_T + BTN_RERO_HEIGHT)

// Battery icon.
#define BATT_R                  (GetMaxX() - 16)
#define BATT_L                  (BATT_R - BATT_WIDTH)
#define BATT_T                  (GRID_Y1 - (BATT_HEIGHT / 2))
#define BATT_B                  (BATT_T + BATT_HEIGHT)

// Settings button.
#define BTN_SETTINGS_WIDTH      32
#define BTN_SETTINGS_HEIGHT     32
#define BTN_SETTINGS_R          (BATT_L - 15)
#define BTN_SETTINGS_L          (BTN_SETTINGS_R - BTN_SETTINGS_WIDTH)
#define BTN_SETTINGS_T          (GRID_Y1 - (BTN_SETTINGS_HEIGHT / 2))
#define BTN_SETTINGS_B          (BTN_SETTINGS_T + BTN_SETTINGS_HEIGHT)



// Menu button top left.
#define BTN_MENU1_L             (GRID_X1 - (BTN_MENU_WIDTH / 2))
#define BTN_MENU1_R             (BTN_MENU1_L + BTN_MENU_WIDTH)
#define BTN_MENU1_T             (GRID_Y2 - (BTN_MENU_HEIGHT / 2))
#define BTN_MENU1_B             (BTN_MENU1_T + BTN_MENU_HEIGHT)

// Menu button top center.
#define BTN_MENU2_L             (GRID_X2 - (BTN_MENU_WIDTH / 2))
#define BTN_MENU2_R             (BTN_MENU2_L + BTN_MENU_WIDTH)
#define BTN_MENU2_T             (GRID_Y2 - (BTN_MENU_HEIGHT / 2))
#define BTN_MENU2_B             (BTN_MENU2_T + BTN_MENU_HEIGHT)

// Menu button top right.
#define BTN_MENU3_L             (GRID_X3 - (BTN_MENU_WIDTH / 2))
#define BTN_MENU3_R             (BTN_MENU3_L + BTN_MENU_WIDTH)
#define BTN_MENU3_T             (GRID_Y2 - (BTN_MENU_HEIGHT / 2))
#define BTN_MENU3_B             (BTN_MENU3_T + BTN_MENU_HEIGHT)

// Menu button bottom left.
#define BTN_MENU4_L             (GRID_X1 - (BTN_MENU_WIDTH / 2))
#define BTN_MENU4_R             (BTN_MENU4_L + BTN_MENU_WIDTH)
#define BTN_MENU4_T             (GRID_Y3 - (BTN_MENU_HEIGHT / 2))
#define BTN_MENU4_B             (BTN_MENU4_T + BTN_MENU_HEIGHT)

// Menu button bottom center.
#define BTN_MENU5_L             (GRID_X2 - (BTN_MENU_WIDTH / 2))
#define BTN_MENU5_R             (BTN_MENU5_L + BTN_MENU_WIDTH)
#define BTN_MENU5_T             (GRID_Y3 - (BTN_MENU_HEIGHT / 2))
#define BTN_MENU5_B             (BTN_MENU5_T + BTN_MENU_HEIGHT)

// Menu button bottom right.
#define BTN_MENU6_L             (GRID_X3 - (BTN_MENU_WIDTH / 2))
#define BTN_MENU6_R             (BTN_MENU6_L + BTN_MENU_WIDTH)
#define BTN_MENU6_T             (GRID_Y3 - (BTN_MENU_HEIGHT / 2))
#define BTN_MENU6_B             (BTN_MENU6_T + BTN_MENU_HEIGHT)



/*******************************************************************************
 * FUNCTION: vCreateMainMenu
 *
 * PARAMETERS:
 * ~ void
 *
 * RETURN:
 * ~ void
 *
 * DESCRIPTIONS:
 * Create the Bluetooth settings page.
 *
 *******************************************************************************/
void vCreateMainMenu(void)
{
    // Clear the GOL objects and screen.
    GOLFree();
    SetColor(pxDefaultScheme->CommonBkColor);
    ClearDevice();


    // Create the window frame outline.
    WndCreate( GID_WINDOW,
               0,         0,
               GetMaxX(), GetMaxY(),
               WND_DRAW, NULL, NULL, pxMainWndScheme );
    
    

    // Create rero button.
    BtnCreate( GID_MAIN_BTN_RERO,
               BTN_RERO_L, BTN_RERO_T,
               BTN_RERO_R, BTN_RERO_B,
               0, BTN_DRAW | BTN_NOPANEL, "/theme/icon/rero.ico", NULL, pxImgBtnScheme );
    
    // Create Settings button.
    BtnCreate( GID_MAIN_BTN_SETTINGS,
               BTN_SETTINGS_L, BTN_SETTINGS_T,
               BTN_SETTINGS_R, BTN_SETTINGS_B,
               0, BTN_DRAW | BTN_NOPANEL, "/theme/icon/settings.ico", NULL, pxImgBtnScheme );

    // Create battery indicator.
    BattCreate( GID_BATT_ICON,
                BATT_L, BATT_T,
                BATT_R, BATT_B,
                BATT_DRAW, pxDefaultScheme );
    
    

    // Create bluetooth programming button.
    BtnCreate( GID_MAIN_BTN_BTPROGRAM,
               BTN_MENU1_L, BTN_MENU1_T,
               BTN_MENU1_R, BTN_MENU1_B,
               0, BTN_DRAW | BTN_TEXTBOTTOM | BTN_NOPANEL, "/theme/icon/bluetooth.ico", "PROGRAM", pxImgBtnScheme );

    // Create Servo button.
    BtnCreate( GID_MAIN_BTN_SERVO,
               BTN_MENU2_L, BTN_MENU2_T,
               BTN_MENU2_R, BTN_MENU2_B,
               0, BTN_DRAW | BTN_TEXTBOTTOM | BTN_NOPANEL, "/theme/icon/servo.ico", "SERVO", pxImgBtnScheme );

    // Create Sensor button.
    BtnCreate( GID_MAIN_BTN_SENSOR,
               BTN_MENU3_L, BTN_MENU3_T,
               BTN_MENU3_R, BTN_MENU3_B,
               0, BTN_DRAW | BTN_TEXTBOTTOM | BTN_NOPANEL, "/theme/icon/sensor.ico", "SENSOR", pxImgBtnScheme );

    // Create Teach button.
    BtnCreate( GID_MAIN_BTN_TEACH,
               BTN_MENU4_L, BTN_MENU4_T,
               BTN_MENU4_R, BTN_MENU4_B,
               0, BTN_DRAW | BTN_TEXTBOTTOM | BTN_NOPANEL, "/theme/icon/teach.ico", "TEACH", pxImgBtnScheme );

    // Create Play button.
    BtnCreate( GID_MAIN_BTN_PLAY,
               BTN_MENU5_L, BTN_MENU5_T,
               BTN_MENU5_R, BTN_MENU5_B,
               0, BTN_DRAW | BTN_TEXTBOTTOM | BTN_NOPANEL, "/theme/icon/play.ico", "PLAY", pxImgBtnScheme );

    // Create Remote button.
    BtnCreate( GID_MAIN_BTN_REMOTE,
               BTN_MENU6_L, BTN_MENU6_T,
               BTN_MENU6_R, BTN_MENU6_B,
               0, BTN_DRAW | BTN_TEXTBOTTOM | BTN_NOPANEL, "/theme/icon/remote.ico", "REMOTE", pxImgBtnScheme );
}



/*******************************************************************************
 * FUNCTION: usMsgMainMenu
 *
 * PARAMETERS:
 * ~ objMsg     - Translated message for the object.
 * ~ pObj       - Pointer to the object.
 * ~ pMsg       - Pointer to the non-translated, raw GOL message.
 *
 * RETURN:
 * ~ If the function returns non-zero, the message will be processed by default.
 *
 * DESCRIPTIONS:
 * Handle the touchscreen event of the main menu.
 *
 *******************************************************************************/
WORD usMsgMainMenu(WORD objMsg, OBJ_HEADER *pObj)
{
    // When the button is released...
    if (objMsg == BTN_MSG_RELEASED) {
        switch(GetObjID(pObj)) {
            case GID_MAIN_BTN_RERO:         vSetGuiPage(PAGE_WALLPAPER);    break;
            case GID_MAIN_BTN_BTPROGRAM:    vSetGuiPage(PAGE_BT_PROGRAM);   break;
            case GID_MAIN_BTN_SENSOR:       vSetGuiPage(PAGE_SENSOR);       break;
            case GID_MAIN_BTN_PLAY:         vSetGuiPage(PAGE_PLAY);         break;
            case GID_MAIN_BTN_TEACH:        vSetGuiPage(PAGE_TEACH);        break;
            case GID_MAIN_BTN_SETTINGS:     vSetGuiPage(PAGE_SETTINGS);     break;
            case GID_MAIN_BTN_SERVO:        vSetGuiPage(PAGE_SERVO);        break;
            case GID_MAIN_BTN_REMOTE:       vSetGuiPage(PAGE_BT_REMOTE);    break;
        }
    }

    return 1;
}
