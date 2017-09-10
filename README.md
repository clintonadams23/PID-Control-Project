[image1]: ./Example/understeer.gif  "Understeer"
[image2]: ./Example/oscillation.gif "Oscillation"
[image3]: ./Example/final_tuning.gif "Final Tuning"
# CarND-Controls-PID
Self-Driving Car Engineer Nanodegree Program

---
This project uses [PID control](https://en.wikipedia.org/wiki/PID_controller) to steer a vehicle around a simulated test track. As a summary, The P (Proportional) term is proportional to the distance the vehicle is from the reference path, otherwise known as cross track error or CTE.
The I (Integral) term is the sum of all previous deviations from reference and is used to remove persistent biases which may be caused by, for example, bad vehicle alignment. The D (Derivative) term is used to dampen oscillations and make the vehicle turn more smoothly.

## Parameter Tuning
Manual parameter tuning was used for this project. Modifying the simualtor to simply output CTE and run faster than real time would enable more efficient tuning methods such as gradient descent. 

The P term was initialized to a low value (0.01) and adjusted up until the car did not understeer as seen below. 0.3 worked well for this. 
![alt text][image1] 

The I term was found to be unnecessary as there were no persistent biases in this controlled simulation. 

The D term was incremented up to 7.0 where oscillations (shown below) were sufficiently damped as to not cause discomfort.
![alt text][image2] 

This is what the final tuning looked like
![alt text][image3] 

## Dependencies

* cmake >= 3.5
 * All OSes: [click here for installation instructions](https://cmake.org/install/)
* make >= 4.1
  * Linux: make is installed by default on most Linux distros
  * Mac: [install Xcode command line tools to get make](https://developer.apple.com/xcode/features/)
  * Windows: [Click here for installation instructions](http://gnuwin32.sourceforge.net/packages/make.htm)
* gcc/g++ >= 5.4
  * Linux: gcc / g++ is installed by default on most Linux distros
  * Mac: same deal as make - [install Xcode command line tools]((https://developer.apple.com/xcode/features/)
  * Windows: recommend using [MinGW](http://www.mingw.org/)
* [uWebSockets](https://github.com/uWebSockets/uWebSockets)
  * Run either `./install-mac.sh` or `./install-ubuntu.sh`.
  * If you install from source, checkout to commit `e94b6e1`, i.e.
    ```
    git clone https://github.com/uWebSockets/uWebSockets 
    cd uWebSockets
    git checkout e94b6e1
    ```
    Some function signatures have changed in v0.14.x. See [this PR](https://github.com/udacity/CarND-MPC-Project/pull/3) for more details.
* Simulator. You can download these from the [project intro page](https://github.com/udacity/self-driving-car-sim/releases) in the classroom.

There's an experimental patch for windows in this [PR](https://github.com/udacity/CarND-PID-Control-Project/pull/3)

## Build Instructions

1. Clone this repo.
2. Make a build directory: `mkdir build && cd build`
3. Compile: `cmake .. && make`
4. Run it: `./pid`. 


