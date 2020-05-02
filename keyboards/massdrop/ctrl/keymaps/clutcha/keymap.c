#include QMK_KEYBOARD_H

enum ctrl_keycodes {
    L_BRI = SAFE_RANGE, //LED Brightness Increase
    L_BRD,              //LED Brightness Decrease
    L_PTN,              //LED Pattern Select Next
    L_PTP,              //LED Pattern Select Previous
    L_PSI,              //LED Pattern Speed Increase
    L_PSD,              //LED Pattern Speed Decrease
    L_T_MD,             //LED Toggle Mode
    L_T_ONF,            //LED Toggle On / Off
    L_ON,               //LED On
    L_OFF,              //LED Off
    L_T_BR,             //LED Toggle Breath Effect
    L_T_PTD,            //LED Toggle Scrolling Pattern Direction
    U_T_AUTO,           //USB Extra Port Toggle Auto Detect / Always Active
    U_T_AGCR,           //USB Toggle Automatic GCR control
    DBG_TOG,            //DEBUG Toggle On / Off
    DBG_MTRX,           //DEBUG Toggle Matrix Prints
    DBG_KBD,            //DEBUG Toggle Keyboard Prints
    DBG_MOU,            //DEBUG Toggle Mouse Prints
    MD_BOOT,            //Restart into bootloader after hold timeout
    L_I_N,              //LED instruction preset Next
    L_I_P,              //LED instruciton preset Previous
    L_SC_N,             //LED Pattern scroll next
    L_SC_P,             //LED Pattern scroll next
    L_GLITI,            //LED Glitter Speed Increase
    L_GLITD,            //LED Glitter Speed Decrease
    L_GLITSM,           //LED Glitter smooth (glitter vs clouds)
    L_T_GCM,            //LED Toggle Game Color Mode
    L_T_GLIT,           //LED Toggle Glitter Effect
};

#define TG_NKRO MAGIC_TOGGLE_NKRO //Toggle 6KRO / NKRO mode

keymap_config_t keymap_config;

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        KC_ESC,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,             KC_PSCR, KC_SLCK, KC_PAUS, \
        KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC,   KC_INS,  KC_HOME, KC_PGUP, \
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,   KC_DEL,  KC_END,  KC_PGDN, \
        KC_CAPS, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_ENT, \
        KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,                              KC_UP, \
        KC_LCTL, KC_LALT, KC_LGUI,                   KC_SPC,                             KC_RGUI, KC_APP,  MO(1),   KC_RCTL,            KC_LEFT, KC_DOWN, KC_RGHT \
    ),
    [1] = LAYOUT(
        KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,            KC_MUTE, KC_TRNS, KC_TRNS, \
        KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,   KC_MPLY, KC_MSTP, KC_VOLU, \
        L_T_BR,   L_PSD,   L_BRI,   L_PSI,   KC_TRNS, KC_TRNS, KC_TRNS, U_T_AUTO,U_T_AGCR,KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,   KC_MPRV, KC_MNXT, KC_VOLD, \
        L_T_GLIT, L_PTP,   L_BRD,   L_PTN,   L_SC_P,  L_T_PTD, L_SC_P,  L_I_P,   L_I_N,   KC_TRNS, KC_TRNS, KC_TRNS, L_T_GCM, \
        L_GLITSM, L_T_MD,  L_T_ONF, KC_TRNS, KC_TRNS, MD_BOOT, TG_NKRO, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                              KC_F16,  \
        KC_TRNS,  KC_TRNS, KC_TRNS,                   KC_TRNS,                            KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,            KC_F13,  KC_F14,  KC_F15 \
    ),
    /*
    [X] = LAYOUT(
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,            KC_TRNS, KC_TRNS, KC_TRNS, \
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,   KC_TRNS, KC_TRNS, KC_TRNS, \
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,   KC_TRNS, KC_TRNS, KC_TRNS, \
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, \
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, TG_NKRO, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                              KC_TRNS, \
        KC_TRNS, KC_TRNS, KC_TRNS,                   KC_TRNS,                            KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,            KC_TRNS, KC_TRNS, KC_TRNS \
    ),
    */
};

const uint16_t PROGMEM fn_actions[] = {

};

// Runs just one time when the keyboard initializes.
void matrix_init_user(void) {
};

// Runs constantly in the background, in a loop.
void matrix_scan_user(void) {
};

#define MODS_SHIFT  (keyboard_report->mods & MOD_BIT(KC_LSHIFT) || keyboard_report->mods & MOD_BIT(KC_RSHIFT))
#define MODS_CTRL  (keyboard_report->mods & MOD_BIT(KC_LCTL) || keyboard_report->mods & MOD_BIT(KC_RCTRL))
#define MODS_ALT  (keyboard_report->mods & MOD_BIT(KC_LALT) || keyboard_report->mods & MOD_BIT(KC_RALT))

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    static uint32_t key_timer;

    switch (keycode) {
        case L_BRI:
            if (record->event.pressed) {
                if (LED_GCR_STEP > LED_GCR_MAX - gcr_desired) gcr_desired = LED_GCR_MAX;
                else gcr_desired += LED_GCR_STEP;
                if (led_animation_breathing) gcr_breathe = gcr_desired;
            }
            return false;
        case L_BRD:
            if (record->event.pressed) {
                if (LED_GCR_STEP > gcr_desired) gcr_desired = 0;
                else gcr_desired -= LED_GCR_STEP;
                if (led_animation_breathing) gcr_breathe = gcr_desired;
            }
            return false;
        case L_PTN:
            if (record->event.pressed) {
                if (led_animation_id == led_setups_count - 1) led_animation_id = 0;
                else led_animation_id++;
            }
            return false;
        case L_PTP:
            if (record->event.pressed) {
                if (led_animation_id == 0) led_animation_id = led_setups_count - 1;
                else led_animation_id--;
            }
            return false;
        case L_PSI:
            if (record->event.pressed) {
                led_animation_speed += ANIMATION_SPEED_STEP;
            }
            return false;
        case L_PSD:
            if (record->event.pressed) {
                led_animation_speed -= ANIMATION_SPEED_STEP;
                if (led_animation_speed < 0) led_animation_speed = 0;
            }
            return false;
        case L_T_MD:
            if (record->event.pressed) {
                led_lighting_mode++;
                if (led_lighting_mode > LED_MODE_MAX_INDEX) led_lighting_mode = LED_MODE_NORMAL;
            }
            return false;
        case L_T_ONF:
            if (record->event.pressed) {
                led_enabled = !led_enabled;
                I2C3733_Control_Set(led_enabled);
            }
            return false;
        case L_ON:
            if (record->event.pressed) {
                led_enabled = 1;
                I2C3733_Control_Set(led_enabled);
            }
            return false;
        case L_OFF:
            if (record->event.pressed) {
                led_enabled = 0;
                I2C3733_Control_Set(led_enabled);
            }
            return false;
        case L_T_BR:
            if (record->event.pressed) {
                led_animation_breathing = !led_animation_breathing;
                if (led_animation_breathing) {
                    gcr_breathe = gcr_desired;
                    led_animation_breathe_cur = BREATHE_MIN_STEP;
                    breathe_dir = 1;
                }
            }
            return false;
        case L_T_PTD:
            if (record->event.pressed) {
                led_animation_direction = !led_animation_direction;
            }
            return false;
        case U_T_AUTO:
            if (record->event.pressed && MODS_SHIFT && MODS_CTRL) {
                TOGGLE_FLAG_AND_PRINT(usb_extra_manual, "USB extra port manual mode");
            }
            return false;
        case U_T_AGCR:
            if (record->event.pressed && MODS_SHIFT && MODS_CTRL) {
                TOGGLE_FLAG_AND_PRINT(usb_gcr_auto, "USB GCR auto mode");
            }
            return false;
        case DBG_TOG:
            if (record->event.pressed) {
                TOGGLE_FLAG_AND_PRINT(debug_enable, "Debug mode");
            }
            return false;
        case DBG_MTRX:
            if (record->event.pressed) {
                TOGGLE_FLAG_AND_PRINT(debug_matrix, "Debug matrix");
            }
            return false;
        case DBG_KBD:
            if (record->event.pressed) {
                TOGGLE_FLAG_AND_PRINT(debug_keyboard, "Debug keyboard");
            }
            return false;
        case DBG_MOU:
            if (record->event.pressed) {
                TOGGLE_FLAG_AND_PRINT(debug_mouse, "Debug mouse");
            }
            return false;
        case MD_BOOT:
            if (record->event.pressed) {
                key_timer = timer_read32();
            } else {
                if (timer_elapsed32(key_timer) >= 500) {
                    reset_keyboard();
                }
            }
            return false;
        //custom pleasuretek keycodes
        case L_I_N:
            if (record->event.pressed) {
                (led_instruction_id == led_instruction_count - 1) ? led_instruction_id = 0 : led_instruction_id++;
                set_led_animation_id(led_default_rotate_pattern[led_instruction_id]);
            }
            return false;
        case L_I_P:
            if (record->event.pressed) {
                (led_instruction_id == 0) ? led_instruction_id = led_instruction_count - 1 : led_instruction_id--;
                set_led_animation_id(led_default_rotate_pattern[led_instruction_id]);
            }
            return false;
        case L_SC_N:
            if(record->event.pressed) {
              led_animation_orientation++;
              if (led_animation_orientation > LED_SCROLL_MAX_INDEX) led_animation_orientation = LED_SCROLL_HORIZ;
            }
            return false;
        case L_SC_P:
            if(record->event.pressed) {
              if (led_animation_orientation == 0) led_animation_orientation = LED_SCROLL_MAX_INDEX;
              led_animation_orientation--;
            }
            return false;
        case L_GLITI:
            if (record->event.pressed) {
                if(glitter_step < 16) {
                  glitter_step++;
                }
            }
            return false;
        case L_GLITD:
            if (record->event.pressed) {
                if(glitter_step > 1) {
                  glitter_step--;
                } else {
                  glitter_step = 1;
                }
            }
            return false;
        case L_GLITSM:
            if (record->event.pressed) {
              glitter_smooth = !glitter_smooth;
            }
            return false;
        case L_T_GLIT:
            if (record->event.pressed) {
                led_animation_glittering = !led_animation_glittering;
                if (led_animation_glittering) {
                  uint8_t i;
                  for(i = 0; i < ISSI3733_LED_COUNT; i++) {
                    uint8_t rn = rand() % 255;
                    led_animation_glitter_cur[i] = rn;
                    if(i % 2) glitter_dir[i] = 1;
                    else glitter_dir[i] = -1;
                  }
                }
            }
            return false;
        case L_T_GCM:
            if (record->event.pressed) {
              led_game_colors = !led_game_colors;
            }
            return false;
        default:
            return true; //Process all other keycodes normally
    }
}

// led_instruction_t led_instructions[] = {
//     // { .flags = LED_FLAG_MATCH_ID | LED_FLAG_USE_RGB, .id0 = 10, .id1 = 9, .r = 255, .g = 0, .b = 0 },
//     // { .flags = LED_FLAG_MATCH_ID | LED_FLAG_USE_PATTERN, .id0 = 4, .id1 = 0, .pattern_id = 8 },
//     // { .flags = LED_FLAG_MATCH_ID | LED_FLAG_USE_RGB, .id0 = 8, .id1 = 0, .r = 0, .g = 255, .b = 0 },
//     // { .flags = LED_FLAG_MATCH_ID | LED_FLAG_USE_PATTERN, .id = 16, .id1 = 0, .pattern_id = 9 },
//     // { .flags = LED_FLAG_MATCH_ID | LED_FLAG_USE_RGB, .id0 = 32, .id1 = 0, .r = 0, .g = 0, .b = 255 },
//     // { .flags = LED_FLAG_MATCH_ID | LED_FLAG_USE_ROTATE_PATTERN, .id0 = 64, .id1 = 0},
//     // { .flags = LED_FLAG_MATCH_ID | LED_FLAG_MATCH_LAYER | LED_FLAG_USE_ROTATE_PATTERN, .id0 = 262144, .id1 = 0, .layer = 0 },
//     // { .flags = LED_FLAG_MATCH_ID | LED_FLAG_MATCH_LAYER | LED_FLAG_USE_ROTATE_PATTERN, .id = 16777216, .id1 = 0, .layer = 1 },
//     { .end = 1 }
// };

led_instruction_t led_instructions_default[] = {
{ .flags = LED_FLAG_MATCH_ID | LED_FLAG_USE_ROTATE_PATTERN | LED_FLAG_USE_GLITTER, .id0 = 3221291007, .id1 = 4291297271, .id2 = 4294967295, .id3 = 8388607},
{ .flags = LED_FLAG_MATCH_ID | LED_FLAG_USE_ROTATE_PATTERN,                        .id0 = 1073676288, .id1 = 3670024, .id2 = 0},
{.end = 1 }
};

led_instruction_t led_instructions_pocket[] = {
{ .flags = LED_FLAG_MATCH_LAYER | LED_FLAG_MATCH_ID | LED_FLAG_USE_PATTERN | LED_FLAG_USE_GLITTER, .layer = 0, .id0 = 65535, .id1 = 0, .id2 = 0, .id3 = 0, .pattern_id = 2},   //pattern F row  - rainbow scrolling
{ .flags = LED_FLAG_MATCH_LAYER | LED_FLAG_MATCH_ID | LED_FLAG_USE_PATTERN,                        .layer = 0, .id0 = 1073676288, .id1 = 0, .id2 = 1011712, .id3 = 0, .pattern_id = 3 },  //pattern num row and bottom row - rainbow
{ .flags = LED_FLAG_MATCH_LAYER | LED_FLAG_MATCH_ID | LED_FLAG_USE_RGB | LED_FLAG_USE_GLITTER, .layer = 0, .id0 = 3221225472, .id1 = 1065598945, .id2 = 4293953536, .id3 = 8388607, .r = 255, .g = 255, .b = 255 },  //white
{ .flags = LED_FLAG_MATCH_LAYER | LED_FLAG_MATCH_ID | LED_FLAG_USE_RGB | LED_FLAG_USE_GLITTER, .layer = 0, .id0 = 0, .id1 = 3221504002, .id2 = 1024, .id3 = 0, .r = 0, .g = 0, .b = 255 },  //blue
{ .flags = LED_FLAG_MATCH_LAYER | LED_FLAG_MATCH_ID | LED_FLAG_USE_RGB | LED_FLAG_USE_GLITTER, .layer = 0, .id0 = 0, .id1 = 20, .id2 = 0, .id3 = 0, .r = 255, .g = 0, .b = 255 },  //pink
{ .flags = LED_FLAG_MATCH_LAYER | LED_FLAG_MATCH_ID | LED_FLAG_USE_RGB,                        .layer = 0, .id0 = 0, .id1 = 3670024, .id2 = 0, .id3 = 0, .r = 255, .g = 0, .b = 0 },  //red WASD
{ .flags = LED_FLAG_MATCH_LAYER | LED_FLAG_MATCH_ID | LED_FLAG_USE_RGB | LED_FLAG_USE_GLITTER, .layer = 0, .id0 = 0, .id1 = 4194304, .id2 = 0, .id3 = 0, .r = 0, .g = 255, .b = 0 },  //green
{ .flags = LED_FLAG_MATCH_LAYER | LED_FLAG_MATCH_ID | LED_FLAG_USE_ROTATE_PATTERN | LED_FLAG_USE_GLITTER, .layer = 0, .id0 = 0, .id1 = 0, .id2 = 1023, .id3 = 0},   //pattern z-?  - all patterns
{ .flags = LED_FLAG_MATCH_LAYER | LED_FLAG_MATCH_ID | LED_FLAG_USE_ROTATE_PATTERN | LED_FLAG_USE_GLITTER, .layer = 1, .id0 = 3221291007, .id1 = 4291297271, .id2 = 4294967295, .id3 = 8388607},
{ .flags = LED_FLAG_MATCH_LAYER | LED_FLAG_MATCH_ID | LED_FLAG_USE_ROTATE_PATTERN, .layer = 1, .id0 = 1073676288, .id1 = 3670024, .id2 = 0},
{.end = 1 }
};


led_instruction_t led_instructions_one[] = {
  { .flags = LED_FLAG_MATCH_LAYER | LED_FLAG_MATCH_ID | LED_FLAG_USE_ROTATE_PATTERN | LED_FLAG_USE_GLITTER, .layer = 0, .id0 = 3758227455, .id1 = 3221733379, .id2 = 4294966272, .id3 = 8388607 },  //rotate pattern
  { .flags = LED_FLAG_MATCH_LAYER | LED_FLAG_MATCH_ID | LED_FLAG_USE_RGB | LED_FLAG_USE_GLITTER,            .layer = 0, .id0 = 536739840, .id1 = 0, .id2 = 0, .id3 = 0, .r = 0, .g = 255, .b = 255 },          //cyan num row
  { .flags = LED_FLAG_MATCH_LAYER | LED_FLAG_MATCH_ID | LED_FLAG_USE_RGB | LED_FLAG_USE_GLITTER,            .layer = 0, .id0 = 0, .id1 = 562053116, .id2 = 1023, .id3 = 0, .r = 255, .g = 59, .b = 255 },      //light Pink
  { .flags = LED_FLAG_MATCH_LAYER | LED_FLAG_MATCH_ID | LED_FLAG_USE_ROTATE_PATTERN,                        .layer = 0, .id0 = 0, .id1 = 511180800, .id2 = 0, .id3 = 0, .r = 180, .g = 95, .b = 6 },           //asdfjkl; scrolling pattern no glitter
  { .flags = LED_FLAG_MATCH_LAYER | LED_FLAG_MATCH_ID | LED_FLAG_USE_RGB | LED_FLAG_USE_GLITTER,            .layer = 1, .id0 = 1073684479, .id1 = 939556832, .id2 = 8257516, .id3 = 0, .r = 153, .g = 153, .b = 153 },
  { .flags = LED_FLAG_MATCH_LAYER | LED_FLAG_MATCH_ID | LED_FLAG_USE_RGB,                                   .layer = 1, .id0 = 8192, .id1 = 0, .id2 = 0, .id3 = 0, .r = 255, .g = 255, .b = 0 },
  { .flags = LED_FLAG_MATCH_LAYER | LED_FLAG_MATCH_ID | LED_FLAG_USE_RGB,                                   .layer = 1, .id0 = 49152, .id1 = 0, .id2 = 0, .id3 = 0, .r = 0, .g = 0, .b = 0 },
  { .flags = LED_FLAG_MATCH_LAYER | LED_FLAG_MATCH_ID | LED_FLAG_USE_RGB,                                   .layer = 1, .id0 = 1073741824, .id1 = 0, .id2 = 0, .id3 = 0, .r = 0, .g = 255, .b = 0 },
  { .flags = LED_FLAG_MATCH_LAYER | LED_FLAG_MATCH_ID | LED_FLAG_USE_RGB,                                   .layer = 1, .id0 = 2147483648, .id1 = 0, .id2 = 16, .id3 = 0, .r = 255, .g = 0, .b = 0 }, //B key - DFU mode
  { .flags = LED_FLAG_MATCH_LAYER | LED_FLAG_MATCH_ID | LED_FLAG_USE_RGB,                                   .layer = 1, .id0 = 0, .id1 = 2157182987, .id2 = 131072, .id3 = 0, .r = 255, .g = 255, .b = 255 },
  { .flags = LED_FLAG_MATCH_LAYER | LED_FLAG_MATCH_ID | LED_FLAG_USE_RGB,                                   .layer = 1, .id0 = 0, .id1 = 38305796, .id2 = 0, .id3 = 0, .r = 255, .g = 59, .b = 255 },
  { .flags = LED_FLAG_MATCH_LAYER | LED_FLAG_MATCH_ID | LED_FLAG_USE_RGB,                                   .layer = 1, .id0 = 0, .id1 = 86048784, .id2 = 0, .id3 = 0, .r = 0, .g = 255, .b = 255 },
  { .flags = LED_FLAG_MATCH_LAYER | LED_FLAG_MATCH_ID | LED_FLAG_USE_RGB | LED_FLAG_USE_GLITTER,            .layer = 1, .id0 = 0, .id1 = 131072, .id2 = 0, .id3 = 0, .r = 183, .g = 183, .b = 183 },
  { .flags = LED_FLAG_MATCH_LAYER | LED_FLAG_MATCH_ID | LED_FLAG_USE_ROTATE_PATTERN,                        .layer = 1, .id0 = 0, .id1 = 1073741824, .id2 = 4286578688, .id3 = 8388607 },  //rotate pattern
  { .flags = LED_FLAG_MATCH_LAYER | LED_FLAG_MATCH_ID | LED_FLAG_USE_RGB,                                   .layer = 1, .id0 = 0, .id1 = 0, .id2 = 1, .id3 = 0, .r = 0, .g = 0, .b = 255 },  //Z key - LED target (default massdrop)
  { .flags = LED_FLAG_MATCH_LAYER | LED_FLAG_MATCH_ID | LED_FLAG_USE_RGB,                                   .layer = 1, .id0 = 0, .id1 = 0, .id2 = 2, .id3 = 0, .r = 153, .g = 0, .b = 255 },
  {.end = 1}
};

led_instruction_t led_game_instructions_one[] = {
  { .flags = LED_FLAG_MATCH_LAYER | LED_FLAG_MATCH_ID | LED_FLAG_USE_RGB,                                   .layer = 0, .id0 = 536879103, .id1 = 1073741824, .id2 = 984064, .id3 = 0, .r = 183, .g = 183, .b = 183 },
  { .flags = LED_FLAG_MATCH_LAYER | LED_FLAG_MATCH_ID | LED_FLAG_USE_RGB,                                   .layer = 0, .id0 = 3749830656, .id1 = 1040449281, .id2 = 4293921664, .id3 = 15, .r = 0, .g = 0, .b = 0 },
  { .flags = LED_FLAG_MATCH_LAYER | LED_FLAG_MATCH_ID | LED_FLAG_USE_RGB,                                   .layer = 0, .id0 = 1966080, .id1 = 2160328930, .id2 = 61463, .id3 = 0, .r = 255, .g = 255, .b = 255 },
  { .flags = LED_FLAG_MATCH_LAYER | LED_FLAG_MATCH_ID | LED_FLAG_USE_RGB,                                   .layer = 0, .id0 = 6291456, .id1 = 16777216, .id2 = 40, .id3 = 0, .r = 217, .g = 217, .b = 217 },
  { .flags = LED_FLAG_MATCH_LAYER | LED_FLAG_MATCH_ID | LED_FLAG_USE_RGB,                                   .layer = 0, .id0 = 0, .id1 = 20, .id2 = 0, .id3 = 0, .r = 255, .g = 59, .b = 255 },                  //light pink qe
  { .flags = LED_FLAG_MATCH_LAYER | LED_FLAG_MATCH_ID | LED_FLAG_USE_RGB,                                   .layer = 0, .id0 = 0, .id1 = 3670024, .id2 = 64, .id3 = 0, .r = 0, .g = 255, .b = 255 },  //cyan wasdm
  { .flags = LED_FLAG_MATCH_LAYER | LED_FLAG_MATCH_ID | LED_FLAG_USE_ROTATE_PATTERN | LED_FLAG_USE_GLITTER, .layer = 0, .id0 = 0, .id1 = 0, .id2 = 0, .id3 = 8388592, .r = 255, .g = 153, .b = 0 },
  { .flags = LED_FLAG_MATCH_LAYER | LED_FLAG_MATCH_ID | LED_FLAG_USE_RGB | LED_FLAG_USE_GLITTER,            .layer = 1, .id0 = 1073684479, .id1 = 939556832, .id2 = 8257516, .id3 = 0, .r = 153, .g = 153, .b = 153 },
  { .flags = LED_FLAG_MATCH_LAYER | LED_FLAG_MATCH_ID | LED_FLAG_USE_RGB,                                   .layer = 1, .id0 = 8192, .id1 = 0, .id2 = 0, .id3 = 0, .r = 255, .g = 255, .b = 0 },
  { .flags = LED_FLAG_MATCH_LAYER | LED_FLAG_MATCH_ID | LED_FLAG_USE_RGB,                                   .layer = 1, .id0 = 49152, .id1 = 0, .id2 = 0, .id3 = 0, .r = 0, .g = 0, .b = 0 },
  { .flags = LED_FLAG_MATCH_LAYER | LED_FLAG_MATCH_ID | LED_FLAG_USE_RGB,                                   .layer = 1, .id0 = 1073741824, .id1 = 0, .id2 = 0, .id3 = 0, .r = 0, .g = 255, .b = 0 },
  { .flags = LED_FLAG_MATCH_LAYER | LED_FLAG_MATCH_ID | LED_FLAG_USE_RGB,                                   .layer = 1, .id0 = 2147483648, .id1 = 0, .id2 = 16, .id3 = 0, .r = 255, .g = 0, .b = 0 }, //B key - DFU mode
  { .flags = LED_FLAG_MATCH_LAYER | LED_FLAG_MATCH_ID | LED_FLAG_USE_RGB,                                   .layer = 1, .id0 = 0, .id1 = 2157182987, .id2 = 131072, .id3 = 0, .r = 255, .g = 255, .b = 255 },
  { .flags = LED_FLAG_MATCH_LAYER | LED_FLAG_MATCH_ID | LED_FLAG_USE_RGB,                                   .layer = 1, .id0 = 0, .id1 = 38305796, .id2 = 0, .id3 = 0, .r = 255, .g = 59, .b = 255 },
  { .flags = LED_FLAG_MATCH_LAYER | LED_FLAG_MATCH_ID | LED_FLAG_USE_RGB,                                   .layer = 1, .id0 = 0, .id1 = 86048784, .id2 = 0, .id3 = 0, .r = 0, .g = 255, .b = 255 },
  { .flags = LED_FLAG_MATCH_LAYER | LED_FLAG_MATCH_ID | LED_FLAG_USE_RGB | LED_FLAG_USE_GLITTER,            .layer = 1, .id0 = 0, .id1 = 131072, .id2 = 0, .id3 = 0, .r = 183, .g = 183, .b = 183 },
  { .flags = LED_FLAG_MATCH_LAYER | LED_FLAG_MATCH_ID | LED_FLAG_USE_ROTATE_PATTERN,                        .layer = 1, .id0 = 0, .id1 = 1073741824, .id2 = 4286578688, .id3 = 8388607 },  //rotate pattern
  { .flags = LED_FLAG_MATCH_LAYER | LED_FLAG_MATCH_ID | LED_FLAG_USE_RGB,                                   .layer = 1, .id0 = 0, .id1 = 0, .id2 = 1, .id3 = 0, .r = 0, .g = 0, .b = 255 },  //Z key - LED target (default massdrop)
  { .flags = LED_FLAG_MATCH_LAYER | LED_FLAG_MATCH_ID | LED_FLAG_USE_RGB,                                   .layer = 1, .id0 = 0, .id1 = 0, .id2 = 2, .id3 = 0, .r = 153, .g = 0, .b = 255 },
  {.end = 1 }
};

led_instruction_t led_instructions_two[] = {
  { .flags = LED_FLAG_MATCH_LAYER | LED_FLAG_MATCH_ID | LED_FLAG_USE_PATTERN | LED_FLAG_USE_GLITTER,        .layer = 0, .id0 = 3758227455, .id1 = 3221733379, .id2 = 4294966272, .id3 = 8388607, .pattern_id = 1 },  //modifiers rotate pattern
  { .flags = LED_FLAG_MATCH_LAYER | LED_FLAG_MATCH_ID | LED_FLAG_USE_PATTERN,                               .layer = 0, .id0 = 536739840, .id1 = 0, .id2 = 0, .id3 = 0, .pattern_id = 0 },          //cyan num row
  { .flags = LED_FLAG_MATCH_LAYER | LED_FLAG_MATCH_ID | LED_FLAG_USE_PATTERN | LED_FLAG_USE_GLITTER,        .layer = 0, .id0 = 0, .id1 = 562053116, .id2 = 1023, .id3 = 0, .pattern_id = 1 },       //most keys (not homerow)
  { .flags = LED_FLAG_MATCH_LAYER | LED_FLAG_MATCH_ID | LED_FLAG_USE_PATTERN,                               .layer = 0, .id0 = 0, .id1 = 511180800, .id2 = 0, .id3 = 0, .pattern_id = 0 },          //asdfjkl; scrolling pattern no glitter
  { .flags = LED_FLAG_MATCH_LAYER | LED_FLAG_MATCH_ID | LED_FLAG_USE_RGB | LED_FLAG_USE_GLITTER,            .layer = 1, .id0 = 1073684479, .id1 = 939556832, .id2 = 8257516, .id3 = 0, .r = 153, .g = 153, .b = 153 },
  { .flags = LED_FLAG_MATCH_LAYER | LED_FLAG_MATCH_ID | LED_FLAG_USE_RGB,                                   .layer = 1, .id0 = 8192, .id1 = 0, .id2 = 0, .id3 = 0, .r = 255, .g = 255, .b = 0 },
  { .flags = LED_FLAG_MATCH_LAYER | LED_FLAG_MATCH_ID | LED_FLAG_USE_RGB,                                   .layer = 1, .id0 = 49152, .id1 = 0, .id2 = 0, .id3 = 0, .r = 0, .g = 0, .b = 0 },
  { .flags = LED_FLAG_MATCH_LAYER | LED_FLAG_MATCH_ID | LED_FLAG_USE_RGB,                                   .layer = 1, .id0 = 1073741824, .id1 = 0, .id2 = 0, .id3 = 0, .r = 0, .g = 255, .b = 0 },
  { .flags = LED_FLAG_MATCH_LAYER | LED_FLAG_MATCH_ID | LED_FLAG_USE_RGB,                                   .layer = 1, .id0 = 2147483648, .id1 = 0, .id2 = 16, .id3 = 0, .r = 255, .g = 0, .b = 0 }, //B key - DFU mode
  { .flags = LED_FLAG_MATCH_LAYER | LED_FLAG_MATCH_ID | LED_FLAG_USE_RGB,                                   .layer = 1, .id0 = 0, .id1 = 2157182987, .id2 = 131072, .id3 = 0, .r = 255, .g = 255, .b = 255 },
  { .flags = LED_FLAG_MATCH_LAYER | LED_FLAG_MATCH_ID | LED_FLAG_USE_RGB,                                   .layer = 1, .id0 = 0, .id1 = 38305796, .id2 = 0, .id3 = 0, .r = 255, .g = 59, .b = 255 },
  { .flags = LED_FLAG_MATCH_LAYER | LED_FLAG_MATCH_ID | LED_FLAG_USE_RGB,                                   .layer = 1, .id0 = 0, .id1 = 86048784, .id2 = 0, .id3 = 0, .r = 0, .g = 255, .b = 255 },
  { .flags = LED_FLAG_MATCH_LAYER | LED_FLAG_MATCH_ID | LED_FLAG_USE_RGB | LED_FLAG_USE_GLITTER,            .layer = 1, .id0 = 0, .id1 = 131072, .id2 = 0, .id3 = 0, .r = 183, .g = 183, .b = 183 },
  { .flags = LED_FLAG_MATCH_LAYER | LED_FLAG_MATCH_ID | LED_FLAG_USE_ROTATE_PATTERN,                        .layer = 1, .id0 = 0, .id1 = 1073741824, .id2 = 4286578688, .id3 = 8388607 },  //rotate pattern
  { .flags = LED_FLAG_MATCH_LAYER | LED_FLAG_MATCH_ID | LED_FLAG_USE_RGB,                                   .layer = 1, .id0 = 0, .id1 = 0, .id2 = 1, .id3 = 0, .r = 0, .g = 0, .b = 255 },  //Z key - LED target (default massdrop)
  { .flags = LED_FLAG_MATCH_LAYER | LED_FLAG_MATCH_ID | LED_FLAG_USE_RGB,                                   .layer = 1, .id0 = 0, .id1 = 0, .id2 = 2, .id3 = 0, .r = 153, .g = 0, .b = 255 },
  {.end = 1}
};

led_instruction_t led_game_instructions_two[] = {
  { .flags = LED_FLAG_MATCH_LAYER | LED_FLAG_MATCH_ID | LED_FLAG_USE_RGB,     .layer = 0, .id0 = 536879103, .id1 = 1073741824, .id2 = 984064, .id3 = 0, .r = 183, .g = 183, .b = 183 },
  { .flags = LED_FLAG_MATCH_LAYER | LED_FLAG_MATCH_ID | LED_FLAG_USE_RGB,     .layer = 0, .id0 = 3749830656, .id1 = 1040449281, .id2 = 4293921664, .id3 = 15, .r = 0, .g = 0, .b = 0 },
  { .flags = LED_FLAG_MATCH_LAYER | LED_FLAG_MATCH_ID | LED_FLAG_USE_RGB,     .layer = 0, .id0 = 1966080, .id1 = 2160328930, .id2 = 61463, .id3 = 0, .r = 255, .g = 255, .b = 255 },
  { .flags = LED_FLAG_MATCH_LAYER | LED_FLAG_MATCH_ID | LED_FLAG_USE_RGB,     .layer = 0, .id0 = 6291456, .id1 = 16777216, .id2 = 40, .id3 = 0, .r = 217, .g = 217, .b = 217 },
  { .flags = LED_FLAG_MATCH_LAYER | LED_FLAG_MATCH_ID | LED_FLAG_USE_RGB,     .layer = 0, .id0 = 0, .id1 = 20, .id2 = 0, .id3 = 0, .r = 0, .g = 255, .b = 255 },
  { .flags = LED_FLAG_MATCH_LAYER | LED_FLAG_MATCH_ID | LED_FLAG_USE_PATTERN, .layer = 0, .id0 = 0, .id1 = 3670024, .id2 = 0, .id3 = 0, .pattern_id = 0},    //WASD
  { .flags = LED_FLAG_MATCH_LAYER | LED_FLAG_MATCH_ID | LED_FLAG_USE_RGB,     .layer = 0, .id0 = 0, .id1 = 0, .id2 = 64, .id3 = 0, .r = 255, .g = 59, .b = 255 },
  { .flags = LED_FLAG_MATCH_LAYER | LED_FLAG_MATCH_ID | LED_FLAG_USE_RGB,     .layer = 0, .id0 = 0, .id1 = 0, .id2 = 0, .id3 = 8388592, .r = 255, .g = 153, .b = 0 },
  { .flags = LED_FLAG_MATCH_LAYER | LED_FLAG_MATCH_ID | LED_FLAG_USE_RGB | LED_FLAG_USE_GLITTER,            .layer = 1, .id0 = 1073684479, .id1 = 939556832, .id2 = 8257516, .id3 = 0, .r = 153, .g = 153, .b = 153 },
  { .flags = LED_FLAG_MATCH_LAYER | LED_FLAG_MATCH_ID | LED_FLAG_USE_RGB,                                   .layer = 1, .id0 = 8192, .id1 = 0, .id2 = 0, .id3 = 0, .r = 255, .g = 255, .b = 0 },
  { .flags = LED_FLAG_MATCH_LAYER | LED_FLAG_MATCH_ID | LED_FLAG_USE_RGB,                                   .layer = 1, .id0 = 49152, .id1 = 0, .id2 = 0, .id3 = 0, .r = 0, .g = 0, .b = 0 },
  { .flags = LED_FLAG_MATCH_LAYER | LED_FLAG_MATCH_ID | LED_FLAG_USE_RGB,                                   .layer = 1, .id0 = 1073741824, .id1 = 0, .id2 = 0, .id3 = 0, .r = 0, .g = 255, .b = 0 },
  { .flags = LED_FLAG_MATCH_LAYER | LED_FLAG_MATCH_ID | LED_FLAG_USE_RGB,                                   .layer = 1, .id0 = 2147483648, .id1 = 0, .id2 = 16, .id3 = 0, .r = 255, .g = 0, .b = 0 }, //B key - DFU mode
  { .flags = LED_FLAG_MATCH_LAYER | LED_FLAG_MATCH_ID | LED_FLAG_USE_RGB,                                   .layer = 1, .id0 = 0, .id1 = 2157182987, .id2 = 131072, .id3 = 0, .r = 255, .g = 255, .b = 255 },
  { .flags = LED_FLAG_MATCH_LAYER | LED_FLAG_MATCH_ID | LED_FLAG_USE_RGB,                                   .layer = 1, .id0 = 0, .id1 = 38305796, .id2 = 0, .id3 = 0, .r = 255, .g = 59, .b = 255 },
  { .flags = LED_FLAG_MATCH_LAYER | LED_FLAG_MATCH_ID | LED_FLAG_USE_RGB,                                   .layer = 1, .id0 = 0, .id1 = 86048784, .id2 = 0, .id3 = 0, .r = 0, .g = 255, .b = 255 },
  { .flags = LED_FLAG_MATCH_LAYER | LED_FLAG_MATCH_ID | LED_FLAG_USE_RGB | LED_FLAG_USE_GLITTER,            .layer = 1, .id0 = 0, .id1 = 131072, .id2 = 0, .id3 = 0, .r = 183, .g = 183, .b = 183 },
  { .flags = LED_FLAG_MATCH_LAYER | LED_FLAG_MATCH_ID | LED_FLAG_USE_ROTATE_PATTERN,                        .layer = 1, .id0 = 0, .id1 = 1073741824, .id2 = 4286578688, .id3 = 8388607 },  //rotate pattern
  { .flags = LED_FLAG_MATCH_LAYER | LED_FLAG_MATCH_ID | LED_FLAG_USE_RGB,                                   .layer = 1, .id0 = 0, .id1 = 0, .id2 = 1, .id3 = 0, .r = 0, .g = 0, .b = 255 },  //Z key - LED target (default massdrop)
  { .flags = LED_FLAG_MATCH_LAYER | LED_FLAG_MATCH_ID | LED_FLAG_USE_RGB,                                   .layer = 1, .id0 = 0, .id1 = 0, .id2 = 2, .id3 = 0, .r = 153, .g = 0, .b = 255 },
{.end = 1 }
};

led_instruction_t led_instructions_three[] = {
  { .flags = LED_FLAG_MATCH_ID | LED_FLAG_USE_PATTERN | LED_FLAG_USE_GLITTER, .layer = 0, .id0 = 3758227455, .id1 = 3221733379, .id2 = 4294966272, .id3 = 8388607, .pattern_id = 0 },
  { .flags = LED_FLAG_MATCH_ID | LED_FLAG_USE_PATTERN,                        .layer = 0, .id0 = 536739840, .id1 = 0, .id2 = 0, .id3 = 0, .pattern_id = 0 },
  { .flags = LED_FLAG_MATCH_ID | LED_FLAG_USE_PATTERN | LED_FLAG_USE_GLITTER, .layer = 0, .id0 = 0, .id1 = 562053116, .id2 = 1023, .id3 = 0, .pattern_id = 1 },
  { .flags = LED_FLAG_MATCH_ID | LED_FLAG_USE_PATTERN,                        .layer = 0, .id0 = 0, .id1 = 511180800, .id2 = 0, .id3 = 0, .pattern_id = 1},
  // { .flags = LED_FLAG_MATCH_LAYER | LED_FLAG_MATCH_ID | LED_FLAG_USE_RGB | LED_FLAG_USE_GLITTER,            .layer = 1, .id0 = 1073684479, .id1 = 939556832, .id2 = 8257516, .id3 = 0, .r = 153, .g = 153, .b = 153 },
  // { .flags = LED_FLAG_MATCH_LAYER | LED_FLAG_MATCH_ID | LED_FLAG_USE_RGB,                                   .layer = 1, .id0 = 8192, .id1 = 0, .id2 = 0, .id3 = 0, .r = 255, .g = 255, .b = 0 },
  // { .flags = LED_FLAG_MATCH_LAYER | LED_FLAG_MATCH_ID | LED_FLAG_USE_RGB,                                   .layer = 1, .id0 = 49152, .id1 = 0, .id2 = 0, .id3 = 0, .r = 0, .g = 0, .b = 0 },
  // { .flags = LED_FLAG_MATCH_LAYER | LED_FLAG_MATCH_ID | LED_FLAG_USE_RGB,                                   .layer = 1, .id0 = 1073741824, .id1 = 0, .id2 = 0, .id3 = 0, .r = 0, .g = 255, .b = 0 },
  // { .flags = LED_FLAG_MATCH_LAYER | LED_FLAG_MATCH_ID | LED_FLAG_USE_RGB,                                   .layer = 1, .id0 = 2147483648, .id1 = 0, .id2 = 16, .id3 = 0, .r = 255, .g = 0, .b = 0 }, //B key - DFU mode
  // { .flags = LED_FLAG_MATCH_LAYER | LED_FLAG_MATCH_ID | LED_FLAG_USE_RGB,                                   .layer = 1, .id0 = 0, .id1 = 2157182987, .id2 = 131072, .id3 = 0, .r = 255, .g = 255, .b = 255 },
  // { .flags = LED_FLAG_MATCH_LAYER | LED_FLAG_MATCH_ID | LED_FLAG_USE_RGB,                                   .layer = 1, .id0 = 0, .id1 = 38305796, .id2 = 0, .id3 = 0, .r = 255, .g = 59, .b = 255 },
  // { .flags = LED_FLAG_MATCH_LAYER | LED_FLAG_MATCH_ID | LED_FLAG_USE_RGB,                                   .layer = 1, .id0 = 0, .id1 = 86048784, .id2 = 0, .id3 = 0, .r = 0, .g = 255, .b = 255 },
  // { .flags = LED_FLAG_MATCH_LAYER | LED_FLAG_MATCH_ID | LED_FLAG_USE_RGB | LED_FLAG_USE_GLITTER,            .layer = 1, .id0 = 0, .id1 = 131072, .id2 = 0, .id3 = 0, .r = 183, .g = 183, .b = 183 },
  // { .flags = LED_FLAG_MATCH_LAYER | LED_FLAG_MATCH_ID | LED_FLAG_USE_PATTERN,                        .layer = 1, .id0 = 0, .id1 = 1073741824, .id2 = 4286578688, .id3 = 8388607, .pattern_id = 0 },  //rotate pattern
  // { .flags = LED_FLAG_MATCH_LAYER | LED_FLAG_MATCH_ID | LED_FLAG_USE_RGB,                                   .layer = 1, .id0 = 0, .id1 = 0, .id2 = 1, .id3 = 0, .r = 0, .g = 0, .b = 255 },  //Z key - LED target (default massdrop)
  // { .flags = LED_FLAG_MATCH_LAYER | LED_FLAG_MATCH_ID | LED_FLAG_USE_RGB,                                   .layer = 1, .id0 = 0, .id1 = 0, .id2 = 2, .id3 = 0, .r = 153, .g = 0, .b = 255 },
  {.end = 1}
};

// led_instruction_t led_game_instructions_three[] = {
//   { .flags = LED_FLAG_MATCH_LAYER | LED_FLAG_MATCH_ID | LED_FLAG_USE_RGB, .layer = 0, .id0 = 536879103, .id1 = 1073741824, .id2 = 984064, .id3 = 0, .r = 183, .g = 183, .b = 183 },
//   { .flags = LED_FLAG_MATCH_LAYER | LED_FLAG_MATCH_ID | LED_FLAG_USE_RGB, .layer = 0, .id0 = 3749830656, .id1 = 1040449281, .id2 = 4293921664, .id3 = 15, .r = 0, .g = 0, .b = 0 },
//   { .flags = LED_FLAG_MATCH_LAYER | LED_FLAG_MATCH_ID | LED_FLAG_USE_RGB, .layer = 0, .id0 = 1966080, .id1 = 2160328930, .id2 = 61463, .id3 = 0, .r = 255, .g = 255, .b = 255 },
//   { .flags = LED_FLAG_MATCH_LAYER | LED_FLAG_MATCH_ID | LED_FLAG_USE_RGB, .layer = 0, .id0 = 6291456, .id1 = 16777216, .id2 = 40, .id3 = 0, .r = 217, .g = 217, .b = 217 },
//   { .flags = LED_FLAG_MATCH_LAYER | LED_FLAG_MATCH_ID | LED_FLAG_USE_PATTERN, .layer = 0, .id0 = 0, .id1 = 20, .id2 = 0, .id3 = 0, .r = 0, .g = 255, .b = 255 , .pattern_id = 2},
//   { .flags = LED_FLAG_MATCH_LAYER | LED_FLAG_MATCH_ID | LED_FLAG_USE_PATTERN | LED_FLAG_USE_GLITTER, .layer = 0, .id0 = 0, .id1 = 3670024, .id2 = 0, .id3 = 0, .pattern_id = 1},   //WASD
//   { .flags = LED_FLAG_MATCH_LAYER | LED_FLAG_MATCH_ID | LED_FLAG_USE_RGB, .layer = 0, .id0 = 0, .id1 = 0, .id2 = 64, .id3 = 0, .r = 255, .g = 59, .b = 255 },
//   { .flags = LED_FLAG_MATCH_LAYER | LED_FLAG_MATCH_ID | LED_FLAG_USE_RGB, .layer = 0, .id0 = 0, .id1 = 0, .id2 = 0, .id3 = 8388592, .r = 255, .g = 153, .b = 0 },
//   { .flags = LED_FLAG_MATCH_LAYER | LED_FLAG_MATCH_ID | LED_FLAG_USE_RGB | LED_FLAG_USE_GLITTER,            .layer = 1, .id0 = 1073684479, .id1 = 939556832, .id2 = 8257516, .id3 = 0, .r = 153, .g = 153, .b = 153 },
//   { .flags = LED_FLAG_MATCH_LAYER | LED_FLAG_MATCH_ID | LED_FLAG_USE_RGB,                                   .layer = 1, .id0 = 8192, .id1 = 0, .id2 = 0, .id3 = 0, .r = 255, .g = 255, .b = 0 },
//   { .flags = LED_FLAG_MATCH_LAYER | LED_FLAG_MATCH_ID | LED_FLAG_USE_RGB,                                   .layer = 1, .id0 = 49152, .id1 = 0, .id2 = 0, .id3 = 0, .r = 0, .g = 0, .b = 0 },
//   { .flags = LED_FLAG_MATCH_LAYER | LED_FLAG_MATCH_ID | LED_FLAG_USE_RGB,                                   .layer = 1, .id0 = 1073741824, .id1 = 0, .id2 = 0, .id3 = 0, .r = 0, .g = 255, .b = 0 },
//   { .flags = LED_FLAG_MATCH_LAYER | LED_FLAG_MATCH_ID | LED_FLAG_USE_RGB,                                   .layer = 1, .id0 = 2147483648, .id1 = 0, .id2 = 16, .id3 = 0, .r = 255, .g = 0, .b = 0 }, //B key - DFU mode
//   { .flags = LED_FLAG_MATCH_LAYER | LED_FLAG_MATCH_ID | LED_FLAG_USE_RGB,                                   .layer = 1, .id0 = 0, .id1 = 2157182987, .id2 = 131072, .id3 = 0, .r = 255, .g = 255, .b = 255 },
//   { .flags = LED_FLAG_MATCH_LAYER | LED_FLAG_MATCH_ID | LED_FLAG_USE_RGB,                                   .layer = 1, .id0 = 0, .id1 = 38305796, .id2 = 0, .id3 = 0, .r = 255, .g = 59, .b = 255 },
//   { .flags = LED_FLAG_MATCH_LAYER | LED_FLAG_MATCH_ID | LED_FLAG_USE_RGB,                                   .layer = 1, .id0 = 0, .id1 = 86048784, .id2 = 0, .id3 = 0, .r = 0, .g = 255, .b = 255 },
//   { .flags = LED_FLAG_MATCH_LAYER | LED_FLAG_MATCH_ID | LED_FLAG_USE_RGB | LED_FLAG_USE_GLITTER,            .layer = 1, .id0 = 0, .id1 = 131072, .id2 = 0, .id3 = 0, .r = 183, .g = 183, .b = 183 },
//   { .flags = LED_FLAG_MATCH_LAYER | LED_FLAG_MATCH_ID | LED_FLAG_USE_PATTERN,                               .layer = 1, .id0 = 0, .id1 = 1073741824, .id2 = 4286578688, .id3 = 8388607, .pattern_id = 0 },  //rotate pattern
//   { .flags = LED_FLAG_MATCH_LAYER | LED_FLAG_MATCH_ID | LED_FLAG_USE_RGB,                                   .layer = 1, .id0 = 0, .id1 = 0, .id2 = 1, .id3 = 0, .r = 0, .g = 0, .b = 255 },  //Z key - LED target (default massdrop)
//   { .flags = LED_FLAG_MATCH_LAYER | LED_FLAG_MATCH_ID | LED_FLAG_USE_RGB,                                   .layer = 1, .id0 = 0, .id1 = 0, .id2 = 2, .id3 = 0, .r = 153, .g = 0, .b = 255 },
//   {.end = 1 }
// };

//12345 pink
//M flip from QE
led_instruction_t led_game_instructions_three[] = {
  { .flags = LED_FLAG_MATCH_LAYER | LED_FLAG_MATCH_ID | LED_FLAG_USE_RGB, .layer = 0, .id0 = 536879103, .id1 = 1073741824, .id2 = 984064, .id3 = 0, .r = 183, .g = 183, .b = 183 },
  { .flags = LED_FLAG_MATCH_LAYER | LED_FLAG_MATCH_ID | LED_FLAG_USE_RGB, .layer = 0, .id0 = 3749830656, .id1 = 1040449281, .id2 = 4293921664, .id3 = 15, .r = 0, .g = 0, .b = 0 },
  { .flags = LED_FLAG_MATCH_LAYER | LED_FLAG_MATCH_ID | LED_FLAG_USE_RGB, .layer = 0, .id0 = 1966080, .id1 = 2160328930, .id2 = 61463, .id3 = 0, .r = 255, .g = 255, .b = 255 },
  { .flags = LED_FLAG_MATCH_LAYER | LED_FLAG_MATCH_ID | LED_FLAG_USE_RGB, .layer = 0, .id0 = 6291456, .id1 = 16777216, .id2 = 40, .id3 = 0, .r = 217, .g = 217, .b = 217 },
  { .flags = LED_FLAG_MATCH_LAYER | LED_FLAG_MATCH_ID | LED_FLAG_USE_PATTERN, .layer = 0, .id0 = 0, .id1 = 20, .id2 = 0, .id3 = 0, .r = 0, .g = 255, .b = 255 , .pattern_id = 1},    //QE
  { .flags = LED_FLAG_MATCH_LAYER | LED_FLAG_MATCH_ID | LED_FLAG_USE_RGB | LED_FLAG_USE_GLITTER, .layer = 0, .id0 = 0, .id1 = 3670024, .id2 = 0, .id3 = 0, .r = 255, .g = 0, .b = 0, .pattern_id = 1},   //WASD
  { .flags = LED_FLAG_MATCH_LAYER | LED_FLAG_MATCH_ID | LED_FLAG_USE_PATTERN, .layer = 0, .id0 = 0, .id1 = 0, .id2 = 64, .id3 = 0, .r = 255, .g = 59, .b = 255, .pattern_id = 2 },   //M
  { .flags = LED_FLAG_MATCH_LAYER | LED_FLAG_MATCH_ID | LED_FLAG_USE_PATTERN, .layer = 0, .id0 = 0, .id1 = 0, .id2 = 0, .id3 = 8388592, .r = 255, .g = 153, .b = 0, .pattern_id = 12 },  //dumbass here is the bullshit I have been overlooking for hours
  { .flags = LED_FLAG_MATCH_LAYER | LED_FLAG_MATCH_ID | LED_FLAG_USE_RGB | LED_FLAG_USE_GLITTER,            .layer = 1, .id0 = 1073684479, .id1 = 939556832, .id2 = 8257516, .id3 = 0, .r = 153, .g = 153, .b = 153 },
  { .flags = LED_FLAG_MATCH_LAYER | LED_FLAG_MATCH_ID | LED_FLAG_USE_RGB,                                   .layer = 1, .id0 = 8192, .id1 = 0, .id2 = 0, .id3 = 0, .r = 255, .g = 255, .b = 0 },
  { .flags = LED_FLAG_MATCH_LAYER | LED_FLAG_MATCH_ID | LED_FLAG_USE_RGB,                                   .layer = 1, .id0 = 49152, .id1 = 0, .id2 = 0, .id3 = 0, .r = 0, .g = 0, .b = 0 },
  { .flags = LED_FLAG_MATCH_LAYER | LED_FLAG_MATCH_ID | LED_FLAG_USE_RGB,                                   .layer = 1, .id0 = 1073741824, .id1 = 0, .id2 = 0, .id3 = 0, .r = 0, .g = 255, .b = 0 },
  { .flags = LED_FLAG_MATCH_LAYER | LED_FLAG_MATCH_ID | LED_FLAG_USE_RGB,                                   .layer = 1, .id0 = 2147483648, .id1 = 0, .id2 = 16, .id3 = 0, .r = 255, .g = 0, .b = 0 }, //B key - DFU mode
  { .flags = LED_FLAG_MATCH_LAYER | LED_FLAG_MATCH_ID | LED_FLAG_USE_RGB,                                   .layer = 1, .id0 = 0, .id1 = 2157182987, .id2 = 131072, .id3 = 0, .r = 255, .g = 255, .b = 255 },
  { .flags = LED_FLAG_MATCH_LAYER | LED_FLAG_MATCH_ID | LED_FLAG_USE_RGB,                                   .layer = 1, .id0 = 0, .id1 = 38305796, .id2 = 0, .id3 = 0, .r = 255, .g = 59, .b = 255 },
  { .flags = LED_FLAG_MATCH_LAYER | LED_FLAG_MATCH_ID | LED_FLAG_USE_RGB,                                   .layer = 1, .id0 = 0, .id1 = 86048784, .id2 = 0, .id3 = 0, .r = 0, .g = 255, .b = 255 },
  { .flags = LED_FLAG_MATCH_LAYER | LED_FLAG_MATCH_ID | LED_FLAG_USE_RGB | LED_FLAG_USE_GLITTER,            .layer = 1, .id0 = 0, .id1 = 131072, .id2 = 0, .id3 = 0, .r = 183, .g = 183, .b = 183 },
  { .flags = LED_FLAG_MATCH_LAYER | LED_FLAG_MATCH_ID | LED_FLAG_USE_PATTERN,                               .layer = 1, .id0 = 0, .id1 = 1073741824, .id2 = 4286578688, .id3 = 8388607, .pattern_id = 0 },  //rotate pattern
  { .flags = LED_FLAG_MATCH_LAYER | LED_FLAG_MATCH_ID | LED_FLAG_USE_RGB,                                   .layer = 1, .id0 = 0, .id1 = 0, .id2 = 1, .id3 = 0, .r = 0, .g = 0, .b = 255 },  //Z key - LED target (default massdrop)
  { .flags = LED_FLAG_MATCH_LAYER | LED_FLAG_MATCH_ID | LED_FLAG_USE_RGB,                                   .layer = 1, .id0 = 0, .id1 = 0, .id2 = 2, .id3 = 0, .r = 153, .g = 0, .b = 255 },
  {.end = 1 }
};

led_instruction_t led_instructions_dark_side_of_the_moon[] = {
  { .flags = LED_FLAG_MATCH_ID | LED_FLAG_USE_RGB, .id0 = 12582944, .id1 = 66847168, .id2 = 1879081084, .id3 = 110, .r = 255, .g = 255, .b = 255 },
  { .flags = LED_FLAG_MATCH_ID | LED_FLAG_USE_RGB | LED_FLAG_USE_GLITTER | LED_FLAG_USE_PATTERN, .id0 = 65472, .id3= 1040384, .r = 255, .g = 0, .b = 0 },
  { .flags = LED_FLAG_MATCH_ID | LED_FLAG_USE_RGB | LED_FLAG_USE_GLITTER | LED_FLAG_USE_PATTERN, .id0 = 4278190080, .id1 = 1, .id3 = 1048576, .r = 232, .g = 97, .b = 0 },
  { .flags = LED_FLAG_MATCH_ID | LED_FLAG_USE_RGB | LED_FLAG_USE_GLITTER | LED_FLAG_USE_PATTERN, .id1 = 261632, .id3 = 2097152, .r = 255, .g = 255, .b = 0 },
  { .flags = LED_FLAG_MATCH_ID | LED_FLAG_USE_RGB | LED_FLAG_USE_GLITTER | LED_FLAG_USE_PATTERN, .id1 = 2080374784, .id3 = 4194304, .r = 0, .g = 255, .b = 0 },
  { .flags = LED_FLAG_MATCH_ID | LED_FLAG_USE_RGB | LED_FLAG_USE_GLITTER | LED_FLAG_USE_PATTERN, .id2 = 3968, .r = 0, .g = 0, .b = 255 },
  { .flags = LED_FLAG_MATCH_ID | LED_FLAG_USE_RGB | LED_FLAG_USE_GLITTER | LED_FLAG_USE_PATTERN, .id2 = 8323072, .id2 = 268369920, .r = 128, .g = 0, .b = 128 },
  {.end = 1 }
};

void *led_instruction_list[] = {
    led_instructions_three,
    led_instructions_dark_side_of_the_moon,
    led_instructions_default,
};

void *led_game_instruction_list[] = {
    led_game_instructions_three,
    led_game_instructions_three
};

const uint8_t led_instruction_count = sizeof(led_instruction_list) / sizeof(led_instruction_list[0]);

uint8_t led_default_rotate_pattern[3] = {  //each instruction group in led_instruction_list can have a default rotate pattern to set on change
    0,
    0,
    3,
};


//this runs once when keyboard is plugged in
void rgb_matrix_init_user(void) {
    //Set which from led_instruction_list should be default
    uint8_t index = 0;    // led_instructions_pleasuretek  is position 0 in led_instruction_list  -- change this number to match in led_instruction_list to set default
    led_instruction_id = index;
    set_led_animation_id(led_default_rotate_pattern[index]);
}
