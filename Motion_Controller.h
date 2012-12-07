#ifndef Motion_Controller_h
#define Motion_Controller_h

#include "Arduino.h"
#include <pt.h>
#include <math.h>
#include <Consts.h>
#include <Measurements.h>
#include <Wheels_Controller.h>

/* This motion controller moves the rover in linear and curvilinear motion by 
    giving a linear path. Linear path means a set of polar coordinates.
*/

class Motion_Controller{
	private:
		
		static int accelerate_thread(struct *ptt);
		static void add_motor_speed(float dv);

		static struct pt ptPath;
		static struct pt ptSpeed;
		static struct pt ptAccelerate;
		static int path_thread(struct pt *ptt);
		
		static unsigned long calculate(float d,float angle);
		static float motor_linear_speed();
		
		static volatile unsigned long t0;
		static volatile unsigned long tt0;
		static volatile unsigned long dt;
		static volatile int n;
		static volatile float dv;
		
		static unsigned long set_path(float d,float angle,int k);
		
		static volatile bool end_path_option;
		
		static volatile bool accelerate_activate;
		
		static void end_path();
		
		static volatile int path_size;
		static volatile int i;
		static void set_motor_linear_speed(float v1,float v2);
		static int speed_control_thread(struct pt* ptt);
		
		
	public:
		//void accelerate(long t, float f);
		static Wheels_Controller wheels;
		static Consts consts;
		static Measurements measurements;
		//Consts consts;
		Motion_Controller();
		static volatile float theta_p[2];
		static volatile float dist_p[2];
		static volatile unsigned long path_t;
		
		bool speed_control_activated;
		bool path_activate;
		
		static void accelerate(unsigned long t,float vf);
		
		
		void schedule_path();	
		void schedule_speed_control();
		void schedule_acceleration();
};
#endif