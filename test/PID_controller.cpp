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
  Kp = p;
  Ki = i;
  Kd = d;
 
  
}
double PID_controller::Calcu_error(double setpoint, double pv){

return setpoint - pv;
}

/**
*@brif A function to implment the PID control method when a setpoint and actual velocity are given
*@param [double] setpoint (desired speed), [double] pv (current speed)
*@return The controlled speed is returned in double
*/

double PID_controller::pid_control(double setpoint, double pv){
double err = Calcu_error(setpoint, pv);
  double P = Kp * err;
  double I = Ki * err * dt;
  double prevErr = 0;
  double D = Kd * (err - prevErr) / dt;
  double u = P + I + D;
  return u;


}
