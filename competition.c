#pragma config(Motor,  port2,           rightMotor,    tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port3,           leftMotor,     tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port4,           rightMotor1,   tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port5,           leftMotor1,    tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port6,           leftLift,      tmotorVex393_MC29, openLoop, reversed)
#pragma config(Motor,  port7,           rightLift,     tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port8,           leftLift1,     tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port9,           rightLift1,    tmotorVex393_MC29, openLoop)

/*---------------------------------------------------------------------------*/
/*                                                                           */
/*        Description: Competition template for VEX EDR                      */
/*                                                                           */
/*---------------------------------------------------------------------------*/

// This code is for the VEX cortex platform
#pragma platform(VEX2)

// Select Download method as "competition"
#pragma competitionControl(Competition)

//Main competition background code...do not modify!
#include "Vex_Competition_Includes.c"

/*---------------------------------------------------------------------------*/
/*                          Pre-Autonomous Functions                         */
/*                                                                           */
/*  You may want to perform some actions before the competition starts.      */
/*  Do them in the following function.  You must return from this function   */
/*  or the autonomous and usercontrol tasks will not be started.  This       */
/*  function is only called once after the cortex has been powered on and    */
/*  not every time that the robot is disabled.                               */
/*---------------------------------------------------------------------------*/

void pre_auton()
{
  // Set bStopTasksBetweenModes to false if you want to keep user created tasks
  // running between Autonomous and Driver controlled modes. You will need to
  // manage all user created tasks if set to false.
  bStopTasksBetweenModes = true;

	// Set bDisplayCompetitionStatusOnLcd to false if you don't want the LCD
	// used by the competition include file, for example, you might want
	// to display your team name on the LCD in this function.
	// bDisplayCompetitionStatusOnLcd = false;

  // All activities that occur before the competition starts
  // Example: clearing encoders, setting servo positions, ...
}

/*---------------------------------------------------------------------------*/
/*                                                                           */
/*                              Autonomous Task                              */
/*                                                                           */
/*  This task is used to control your robot during the autonomous phase of   */
/*  a VEX Competition.                                                       */
/*                                                                           */
/*  You must modify the code to add your own robot specific commands here.   */
/*---------------------------------------------------------------------------*/

task autonomous()
{
  // ..........................................................................
  // Insert user code here.
  // ..........................................................................

  // Remove this function call once you have "real" code.
  //AutonomousCodePlaceholderForTesting();
}

/*---------------------------------------------------------------------------*/
/*                                                                           */
/*                              User Control Task                            */
/*                                                                           */
/*  This task is used to control your robot during the user control phase of */
/*  a VEX Competition.                                                       */
/*                                                                           */
/*  You must modify the code to add your own robot specific commands here.   */
/*---------------------------------------------------------------------------*/

task usercontrol()
{
  // User control code here, inside the loop

  while (true)
  {
    // This is the main execution loop for the user control program.
    // Each time through the loop your program should update motor + servo
    // values based on feedback from the joysticks.

    // ........................................................................
    // Insert user code here. This is where you use the joystick values to
    // update your motors, etc.
    // ........................................................................

    //if (abs(vexRT[Ch1])>50)//threshold for sideways control
  	//{

			//	motor[leftMotor] = -vexRT[Ch1];
				//motor[rightMotor1] = -vexRT[Ch1];
				//motor[leftMotor1]=vexRT[Ch1];
				//motor[rightMotor] = vexRT[Ch1];

  	//}

  	//else{

   	 motor[leftMotor]  = vexRT[Ch3];   // Left Joystick Y value
     motor[rightMotor] = vexRT[Ch2];   // Right Joystick Y value
   	 motor[leftMotor1]  = vexRT[Ch3];   // Left Joystick Y value
   	 motor[rightMotor1] = vexRT[Ch2];   // Right Joystick Y value
		//}

	//moves 6 bar up and down or stays the same

  if (vexRT[Btn6U]
  {
  	motor[leftLift]  = 127;
    motor[rightLift] = 127;

    motor[leftLift1]  = 127;
    motor[rightLift1] = 127;

	}

	else if (vexRT[Btn6D]
  {
  	motor[leftLift]  = -127;
    motor[rightLift] = -127;

    motor[leftLift1]  = -127;
    motor[rightLift1] = -127;

	}
  /* if (vexRT[Btn8D])
  {
  	motor[leftLift]  = -127;
    motor[rightLift] = -127;

	}*/
	else //if (!vexRT[Btn8D])
  {
  	motor[leftLift]  = 0;
    motor[rightLift] = 0;

    motor[leftLift1]  = 0;
    motor[rightLift1] = 0;

	}
  }
}
