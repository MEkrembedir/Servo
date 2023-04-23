# Servo Control Used in Laika
The code is a simple example for understanding the method used to control 8 servo motors of a robot dog named Laika. Each servo motor is defined separately using the Servo library and named as servo1, servo2, servo3, servo4, servo5, servo6, servo7, and servo8. The target angles for each servo motor are determined using the "wake" and "step" variables.

The code uses two separate functions called "front_leg" and "back_leg". The "front_leg" function moves 4 servo motors by taking the target angles and writing them to the servo motors. Similarly, the "back_leg" function moves the other 4 servo motors. There is also a "move" function that enables the servo motors to move step by step towards the target angles.

A helper function called "decision" is used in the code to determine the direction of servo motor movement based on the current angle and the target angle.

An "example" function runs a sample scenario by moving the servo motors towards the specified target angles. The "setup" function in the code performs initial configurations such as assigning pin numbers for servo motors and setting the serial communication speed. Then, the "loop" function continuously calls the "example" function to make the servo motors move.


<span style="color:red;"> Servo.h library is required for this code</span>


[GitHub](https://github.com/MEkrembedir) 

[LinkedIn](https://www.linkedin.com/in/mekrembedir)
