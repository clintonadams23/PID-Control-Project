#ifndef PID_H
#define PID_H

class PID {
public:
  double max_steering_angle;
  /*
  * Constructor
  */
  PID() : max_steering_angle(1), p_error(0), i_error(0), d_error(0)  {}

  /*
  * Destructor.
  */
  ~PID() {};

  /*
  * Initialize PID.
  */
  void Init(double Kp, double Ki, double Kd);

  /*
  * Update the PID error variables given cross track error.
  */
  void UpdateError(double cte);

  double GetSteeringAngle();

private: 

	/*
	* Coefficients
	*/
	double Kp;
	double Ki;
	double Kd;

	/*
	* Errors
	*/
	double p_error;
	double i_error;
	double d_error;

	/*
	* Calculate the total PID error.
	*/
	double TotalError();
};

#endif /* PID_H */
