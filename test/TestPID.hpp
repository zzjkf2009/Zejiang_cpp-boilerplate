/**
*@file PID_test.hpp
*@Author: Zejiang Zeng
*@date Feb, 2017
*@copyright 2017.2-2017.5 by Zejiang Zeng (zzeng@terpmail.umd.edu)
*@biref This is a unit test for the class PID_controller 
*/
#include"PID_controller.h"
#include<assert.h>
class TestPID{
public:
	//PID_controller test_pid;
/**
*@brief A test function to verify if the p,i,d paramaters are      initilized, if not, a message is written to the standard error device 
and abort is called, terminating the program execution
**/
void PIDparam(PID_controller test_pid){
	assert(test_pid.Kp!=NULL);
	assert(test_pid.Ki!=NULL);
	assert(test_pid.Kd!=NULL);
	}
/**
*@brirf A function that purely check the computation result of  pid.control function from PID_controller.cpp. The kp,ki,kd values are given, setpoint and initial velocity are also given. Check after 100 rounds of dt, checck if the speed will decrease to zero
*/	

void PIDcalcu(){
        PID_controller test_pid;
	test_pid.PID_set(0.1,100,-100);
	double current_v=20;
	for(int i=0;i<100;++i){
	double inc=test_pid.pid_control(0,current_v);
	current_v+=inc;
	}

	assert(current_v<0.1); // current speed should close to 0, if it is smaller than 0.1, PASS. Otherwise, Warning!
    }


};
