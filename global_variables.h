#ifndef GLOBAL_VARIABLES_H
#define GLOBAL_VARIABLES_H
#include <QDebug>

#define MOTOR_WARNING_ICON 0
#define BATTERY_WARNING_ICON 1
#define LOW_BATTERY_WARNING_ICON 2
#define DAY_LIGHTS_ICON 3
#define NIGHT_LIGHTS_ICON 4
#define CRUISE_CONTROL_ICON 5
#define HORN_ICON 6

#define ICON_COUNT 7

#define SECTION_COUNT 5

enum states { OFF, ON };

enum gears { PARK, DRIVE, NEUTRAL, REVERSE };

enum warnings { BATTERY_FAULT, MOTOR_FAULT, LOW_BATTERY };

enum tires { FRONT_LEFT, FRONT_RIGHT, BACK_LEFT, BACK_RIGHT };

#endif // GLOBAL_VARIABLES_H
