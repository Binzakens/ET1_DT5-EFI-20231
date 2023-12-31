#ifndef GLOBALDEFINES_H
#define GLOBALDEFINES_H

#define PROJ_DIR "/home/bi/Documents/ET1_DT5-EFI-20231"

/*
 * Comment the line below if you want to debug/compile normal simulation with g++ only.
 * If left default, software will automatically compile and execute under SystemC structure.
 */
#define SYSTEMC

#define STROKE_LENGTH       3.7 // inches
#define BORE_SIZE		    3.4 // inches
#define CYLINDERS		    4   // Number of cylinders
#define CID  			    (3.1416 * STROKE_LENGTH * BORE_SIZE * BORE_SIZE * CYLINDERS) / 4 // Cubic inch displacement				  
#define DIVIDE_PULSE	    1   // Injection divide number for number of injections per engine cycle
#define INJ_FLOW		    32  // lbs/hour
#define INJ_OPEN_TIME	    1.3 // Injector open time in ms
#define NUM_TEETH			60  // Number of teeth on crankshaft
#define NUM_LOST_TEETH		2   // Number of lost teeth on crankshaft
#define VE_ROWS             10
#define VE_COLS             8
#define AFR_ROWS            14
#define AFR_COLS            12
#define WARM_UP_ROWS        2
#define WARM_UP_COLS        10
#define EGO_ROWS            14
#define EGO_COLS            12
#define IGNITION_ROWS       14
#define IGNITION_COLS       12
#define ACCEL_ROWS          2
#define ACCEL_COLS          4
#define COLD_ADVANCE_ROWS   2
#define COLD_ADVANCE_COLS   10
#define MAPSS_ROWS		    2
#define MAPSS_COLS		    11
#define MAP_VFROM		    0.29
#define MAP_VTO			    5.0


#define MAP_DECEL_VFROM		0.29
#define MAP_DECEL_VTO		1.0
#define MAP_IDLE_VFROM		1.0
#define MAP_IDLE_VTO		4.5
#define MAP_ACCEL_VFROM		4.5
#define MAP_ACCEL_VTO		5.0


#define MATSS_ROWS  	    2
#define MATSS_COLS		    18
#define MAT_VFROM		    0.0
#define MAT_VTO			    5.0


#define MAT_DECEL_VFROM		0.0
#define MAT_DECEL_VTO		1.04
#define MAT_IDLE_VFROM		1.04
#define MAT_IDLE_VTO		2.62
#define MAT_ACCEL_VFROM		2.62
#define MAT_ACCEL_VTO		5.0


#define CLTSS_ROWS		    2
#define CLTSS_COLS		    12
#define CLT_VFROM		    0.27
#define CLT_VTO			    3.51


#define CLT_DECEL_VFROM		0.27
#define CLT_DECEL_VTO		1.02
#define CLT_IDLE_VFROM		1.02
#define CLT_IDLE_VTO		2.60
#define CLT_ACCEL_VFROM		2.60
#define CLT_ACCEL_VTO		3.51


#define MAX_COLD_CLT		65
#define EGOSS_ROWS		    2
#define EGOSS_COLS		    22
#define EGO_VFROM		    0.025
#define EGO_VTO			    0.88


#define VE_PATH             "VETable.txt"
#define AFR_PATH            "AFRTable.txt"
#define WARM_UP_PATH        "WarmUpTable.txt"
#define EGO_LOOP_PATH       "OxygenLoopTable.txt"
#define IGNITION_PATH       "IgnitionTable.txt"
#define ACCEL_PATH          "AccelerationTable.txt"
#define COLD_ADVANCE_PATH   "ColdAdvanceTable.txt"
#define MAPSS_PATH  	  	"MAP.txt"
#define MATSS_PATH  	  	"MAT.txt"
#define EGOSS_PATH		  	"EGO.txt"
#define CLTSS_PATH		  	"CLT.txt"
#define TPSSS_PATH		  	"TPS.txt"

#endif
