#ifndef _DEVO8_TARGET_H_
#define _DEVO8_TARGET_H_

//Protocols
#define PROTO_HAS_A7105
#define PROTO_HAS_CYRF6936

//#define ENABLE_SCANNER 1
#define HAS_TOUCH 1
#define HAS_VIBRATINGMOTOR 0
#define HAS_LOGICALVIEW 0
#define MIN_BRIGHTNESS 0
#define DEFAULT_BATTERY_ALARM 4000
#define DEFAULT_BATTERY_CRITICAL 3800

#define NUM_OUT_CHANNELS 12
#define NUM_VIRT_CHANNELS 10

#define NUM_TRIMS 6
#define MAX_POINTS 13
#define NUM_MIXERS ((NUM_OUT_CHANNELS + NUM_VIRT_CHANNELS) * 4)

#define INP_HAS_CALIBRATION 4

#define CHAN_ButtonMask(btn) (btn ? (1 << (btn - 1)) : 0)

#define BUTTON_MAP { 'A', 'Q', 'D', 'E', 'S', 'W', 'F', 'R', 'G', 'T', 'H', 'Y', FL_Left, FL_Right, FL_Down, FL_Up, 13/*FL_Enter*/, FL_Escape, 0 }

#endif //_DEVO8_TARGET_H_
