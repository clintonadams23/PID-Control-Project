#include "PID.h"

using namespace std;

void PID::Init(double Kp, double Ki, double Kd) {
	this->Kp = -Kp;
	this->Ki = -Ki;
	this->Kd = -Kd;
}

void PID::UpdateError(double cte) {
	d_error = cte - p_error;
	p_error = cte;
	i_error += cte;
}

double PID::GetSteeringAngle() {
	double steering_angle = TotalError();

	if (steering_angle > max_steering_angle) {
		steering_angle = max_steering_angle;
	}
	if (steering_angle < -max_steering_angle) {
		steering_angle = -max_steering_angle;
	}

	return steering_angle;
}

double PID::TotalError() {
	return Kp*p_error + Ki*i_error + Kd*d_error;
}

