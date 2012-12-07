#ifndef Consts_h
#define Consts_h

#include "Arduino.h"

class Consts{
	public:
	    Consts();

		const static int MOTOR1_CLOCKWISE=30;          //RED
		const static int MOTOR1_COUNTERCLOCKWISE=31;  //ORANGE
		
		const static int MOTOR2_CLOCKWISE=34;         //GREEN
		const static int MOTOR2_COUNTERCLOCKWISE=35; //YELLOW

		const static int MOTOR1_CHANNEL_A=2;        //YELLOW
		const static int MOTOR1_CHANNEL_B=43;       // WHITE
		
		const static int MOTOR2_CHANNEL_A=3;       //YELLOW
		const static int MOTOR2_CHANNEL_B=45;       //WHITE
		
		const static float center_dist=0.1145;
		const static float radius=0.054;
		
		//linear model param
		const static float alpha0u1=0.00000486;
		const static float alpha1u1=0;
	        const static float alpha0u2=0.00000486;
		const static float alpha1u2=0;
		
		int MOTOR_CHANNELS[4];
		const static long PERIOD_CYCLE=1000L;
		const static int NPPR=32;
		
		const static int NUMBER_PARTITIONS_INTERVAL=1000;
		
		const static int FORWARD=1;
		const static int BACKWARD=2;
};
#endif