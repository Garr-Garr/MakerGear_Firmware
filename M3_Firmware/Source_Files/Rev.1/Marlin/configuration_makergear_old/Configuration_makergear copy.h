/* MakerGear defines*/

/******************
 Options
*********************/

#define MAKERGEAR_MODEL "M3 Independent Dual"
#define MAKERGEAR_AUTHOR "MG |Scott, Josh, Kyle, David"

#define M2_X_PULLEY_STEPS 88.8 
#define M3_X_PULLEY_STEPS 80.1

#define M2_Y_PULLEY_STEPS 88.8
#define M3_Y_PULLEY_STEPS 80.1

#define M2_Z_STEPS 1007.7
#define M3_Z_STEPS 1007.7

#define M2_X_MIN 0
#define M3_X_MIN -4
#define M3_DUAL_X_MIN -20

#define M2_Y_MIN 0
#define M3_Y_MIN 0

#define M2_Z_MIN -15
#define M3_Z_MIN -15
#define M3_R1_Z_MIN 0


#define M2_X_MAX 205
#define M3_X_MAX 220
#define M3_DUAL_X_MAX 205


#define M2_Y_MAX 255
#define M3_Y_MAX 242

#define M2_Z_MAX 200
#define M3_Z_MAX 212

#define M3_X2_MIN_OLD_COOLING 70
#define M3_X2_MAX_OLD_COOLING 230

#define M3_X2_MIN_NEW_COOLING 48
#define M3_X2_MAX_NEW_COOLING 254

#define M3_X2_MIN_NEW_COOLING_MIRROR 22
#define M3_X2_MAX_NEW_COOLING_MIRROR 252


#define PRINTED_FILAMENT_MOTOR_CURRENT 95
#define METAL_FILAMENT_MOTOR_CURRENT 135
#define X_MOTOR_CURRENT 100
#define Y_MOTOR_CURRENT 100
#define Z_MOTOR_CURRENT 190
#define E_MOTOR_CURRENT 95


#define RAMBO_SHIELD_11 11
#define RAMBO_SHIELD_12 12
#define RAMBO_SHIELD_13 13
#define RAMBO_SHIELD_14 14
#define RAMBO_SHIELD_15 15

#define M2_PRINTED_FILAMENT_DRIVE true
#define M3_PRINTED_FILAMENT_DRIVE_DIRECTION false


#define M2_X_DIRECTION true
#define M3_X_DIRECTION false


#define M2_Y_DIRECTION false
#define M3_Y_DIRECTION true


#define M2_Z_DIRECTION false
#define M3_Z_DIRECTION true

#define ONE_X_CARRIAGE 1
#define TWO_X_CARRIAGE 2

#define GEARBOX_FILAMENT_MOTOR_STEPS 471.5
#define DIRECT_FILAMENT_MOTOR_STEPS 88.1

#define ENDSTOPS_NC false
#define ENDSTOPS_NO true

#define SECOND_X_PWM 90

#define AUTO_REWRITE_EEPROM	false

#define HOTEND_V5_KP 16.83
#define HOTEND_V5_KI 1.1
#define HOTEND_V5_KD 64.51

#define HBP_KP 159.7
#define HBP_KI 5.59
#define HBP_KD 1141.48


#define TOOLCHANGE_PARK_ZLIFT_DEFAULT   0.1     
#define TOOLCHANGE_UNPARK_ZLIFT_DEFAULT 0.1 

#define TOOLCHANGE_PARK_ZLIFT_TIGHT   0.01     
#define TOOLCHANGE_UNPARK_ZLIFT_TIGHT 0.01       



#define EXT_THRML_PROTECT_PERIOD_STRICT			40
#define EXT_THRML_PROTECT_HYSTERESIS_STRICT		4
#define EXT_WATCH_TEMP_PERIOD_STRICT			20
#define EXT_WATCH_TEMP_INCREASE_STRICT			2

#define BED_THRML_PROTECT_PERIOD_STRICT			120
#define BED_THRML_PROTECT_HYSTERESIS_STRICT		2
#define BED_WATCH_TEMP_PERIOD_STRICT			120
#define BED_WATCH_TEMP_INCREASE_STRICT			2

#define EXT_THRML_PROTECT_PERIOD_SAFE			45
#define EXT_THRML_PROTECT_HYSTERESIS_SAFE		10
#define EXT_WATCH_TEMP_PERIOD_SAFE				40
#define EXT_WATCH_TEMP_INCREASE_SAFE			2

#define BED_THRML_PROTECT_PERIOD_SAFE			150
#define BED_THRML_PROTECT_HYSTERESIS_SAFE		10
#define BED_WATCH_TEMP_PERIOD_SAFE				600
#define BED_WATCH_TEMP_INCREASE_SAFE			2


#define M3_MAX_FEEDRATE_X	300
#define M3_MAX_FEEDRATE_Y	300
#define M3_MAX_FEEDRATE_Z	20
#define M3_MAX_FEEDRATE_E	30

#define M3_MAX_ACCELERATION_X	1200
#define M3_MAX_ACCELERATION_Y	1200
#define M3_MAX_ACCELERATION_Z	10
#define M3_MAX_ACCELERATION_E	2000

#define M3_JERK_X	5.0
#define M3_JERK_Y	5.0
#define M3_JERK_Z	1
#define M3_JERK_E	10


#define M3_DEFAULT_ACCELERATION 		1000
#define M3_DEFAULT_RETRACT_ACCELERATION	2000
#define M3_DEFAULT_TRAVEL_ACCELERATION	1000





/******************
Edit directives below on a per machine basis using the options from above
*********************/

#define CONF_TOOLCHANGE_PARK_ZLIFT   			TOOLCHANGE_PARK_ZLIFT_TIGHT
#define CONF_TOOLCHANGE_UNPARK_ZLIFT 				TOOLCHANGE_UNPARK_ZLIFT_TIGHT

#define CONF_THERMAL_PROTECTION_PERIOD 			EXT_THRML_PROTECT_PERIOD_SAFE
#define CONF_THERMAL_PROTECTION_HYSTERESIS 		EXT_THRML_PROTECT_HYSTERESIS_SAFE
#define CONF_WATCH_TEMP_PERIOD 					EXT_WATCH_TEMP_PERIOD_SAFE
#define CONF_WATCH_TEMP_INCREASE 				EXT_WATCH_TEMP_INCREASE_SAFE
#define CONF_THERMAL_PROTECTION_BED_PERIOD 		BED_THRML_PROTECT_PERIOD_SAFE
#define CONF_THERMAL_PROTECTION_BED_HYSTERESIS 	BED_THRML_PROTECT_HYSTERESIS_SAFE
#define CONF_WATCH_BED_TEMP_PERIOD 				BED_WATCH_TEMP_PERIOD_SAFE
#define CONF_WATCH_BED_TEMP_INCREASE 			BED_WATCH_TEMP_INCREASE_SAFE


#define CONF_X_PULLEY_STEPS 	M3_X_PULLEY_STEPS
#define CONF_Y_PULLEY_STEPS 	M3_Y_PULLEY_STEPS
#define CONF_Z_STEPS			M3_Z_STEPS
#define CONF_FILAMENT_MOTOR_STEPS  	GEARBOX_FILAMENT_MOTOR_STEPS

#define CONF_SHIELD    			RAMBO_SHIELD_13
#define CONF_CARRIAGE  			TWO_X_CARRIAGE
#define CONF_ENDSTOPS  			ENDSTOPS_NC
#define CONF_X_DIRECTION  		M3_X_DIRECTION
#define CONF_Y_DIRECTION  		M3_Y_DIRECTION
#define CONF_Z_DIRECTION  		M3_Z_DIRECTION

#define CONF_EXTRUDER_MOTOR_CURRENT PRINTED_FILAMENT_MOTOR_CURRENT


#define CONF_EXTRUDER0_DIRECTION  M3_PRINTED_FILAMENT_DRIVE_DIRECTION
#define CONF_EXTRUDER1_DIRECTION  M3_PRINTED_FILAMENT_DRIVE_DIRECTION

#define CONF_X_MAX 				M3_DUAL_X_MAX
#define CONF_Y_MAX 				M3_Y_MAX
#define CONF_Z_MAX 				M3_Z_MAX
#define CONF_X_MIN 				M3_DUAL_X_MIN
#define CONF_Y_MIN 				M3_Y_MIN
#define CONF_Z_MIN 				M3_R1_Z_MIN

#define CONF_X2_MAX M3_X2_MAX_NEW_COOLING_MIRROR
#define CONF_X2_MIN M3_X2_MIN_NEW_COOLING_MIRROR


#define CONF_HOTEND_KP HOTEND_V5_KP
#define CONF_HOTEND_KI HOTEND_V5_KI
#define CONF_HOTEND_KD HOTEND_V5_KD


#define CONF_HBP_KP HBP_KP
#define CONF_HBP_KI HBP_KI
#define CONF_HBP_KD HBP_KD


#define CONF_THERMAL_PROTECTION_PERIOD 			EXT_THRML_PROTECT_PERIOD_SAFE
#define CONF_THERMAL_PROTECTION_HYSTERESIS 		EXT_THRML_PROTECT_HYSTERESIS_SAFE
#define CONF_WATCH_TEMP_PERIOD 					EXT_WATCH_TEMP_PERIOD_SAFE
#define CONF_WATCH_TEMP_INCREASE 				EXT_WATCH_TEMP_INCREASE_SAFE
#define CONF_THERMAL_PROTECTION_BED_PERIOD 		BED_THRML_PROTECT_PERIOD_SAFE
#define CONF_THERMAL_PROTECTION_BED_HYSTERESIS 	BED_THRML_PROTECT_HYSTERESIS_SAFE
#define CONF_WATCH_BED_TEMP_PERIOD 				BED_WATCH_TEMP_PERIOD_SAFE
#define CONF_WATCH_BED_TEMP_INCREASE 			BED_WATCH_TEMP_INCREASE_SAFE



#define CONF_MAX_FEEDRATE_X 	M3_MAX_FEEDRATE_X
#define CONF_MAX_FEEDRATE_Y		M3_MAX_FEEDRATE_Y
#define CONF_MAX_FEEDRATE_Z		M3_MAX_FEEDRATE_Z
#define CONF_MAX_FEEDRATE_E		M3_MAX_FEEDRATE_E

#define CONF_MAX_ACCELERATION_X		M3_MAX_ACCELERATION_X
#define CONF_MAX_ACCELERATION_Y		M3_MAX_ACCELERATION_Y
#define CONF_MAX_ACCELERATION_Z		M3_MAX_ACCELERATION_Z
#define CONF_MAX_ACCELERATION_E		M3_MAX_ACCELERATION_E

#define CONF_JERK_X		M3_JERK_X
#define CONF_JERK_Y		M3_JERK_Y
#define CONF_JERK_Z		M3_JERK_Z
#define CONF_JERK_E		M3_JERK_E


#define CONF_DEFAULT_ACCELERATION 			M3_DEFAULT_ACCELERATION
#define CONF_DEFAULT_RETRACT_ACCELERATION	M3_DEFAULT_RETRACT_ACCELERATION
#define CONF_DEFAULT_TRAVEL_ACCELERATION	M3_DEFAULT_TRAVEL_ACCELERATION


// DXC_FULL_CONTROL_MODE OR DXC_AUTO_PARK_MODE
#define CONF_DEFAULT_DUAL_X_CARRIAGE_MODE DXC_FULL_CONTROL_MODE 


//#define LIN_ADVANCE
//#define SDSUPPORT


