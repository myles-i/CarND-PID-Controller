#include "PID.h"
#include <iostream>

using namespace std;

/*
* TODO: Complete the PID class.
*/

PID::PID() {}

PID::~PID() {}

void PID::Init(double Kp0, double Ki0, double Kd0) {
  Kp = Kp0;
  Ki = Ki0;
  Kd = Kd0;
}

void PID::UpdateError(double cte) {
  d_error = cte - p_error;
  i_error = i_error + cte;
  p_error = cte;
}

double PID::TotalError() {
  std::cout << p_error;
  return -(Kp*p_error + Ki*i_error + Kd*d_error);
}

