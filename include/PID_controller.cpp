/*
*@file PID_controller.cpp
*@Author Zejiang Zeng
*@Copyright 2017.2-2017.5 by Zejiang Zeng (zzeng@terpmail.umd.edu)
*@brief see PID_controller.h
*/

#include"PID_controller.h"
#include<cmath>


/*
*@brief The function that initiate the the p,i,d parameters
*/

void PID_controller::PID_set( double p, double i, double d){

  
}

/**
*@brif A function to implment the PID control method when a setpoint and actual velocity are given
*@param [double] setpoint (desired speed), [double] pv (current speed)
*@return The controlled speed is returned in double
*/

double PID_controller::pid_control( double setpoint, double pv){


return 3000;  // You need to put the PID control method here instead of return a consant number
}
