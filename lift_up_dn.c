#pragma config(Hubs,  S1, HTMotor,  HTServo,  HTMotor,  HTMotor)
#pragma config(Sensor, S2,     IRSeeker2,      sensorHiTechnicIRSeeker1200)
#pragma config(Sensor, S3,     HTCOMPASS,      sensorI2CCustom)
#pragma config(Sensor, S4,     lift_down,      sensorTouch)
#pragma config(Motor,  motorA,          lift_en,       tmotorNXT, openLoop, encoder)
#pragma config(Motor,  motorB,           ,             tmotorNXT, openLoop)
#pragma config(Motor,  motorC,           ,             tmotorNXT, openLoop)
#pragma config(Motor,  mtr_S1_C1_1,     lift1,         tmotorTetrix, openLoop)
#pragma config(Motor,  mtr_S1_C1_2,     lift2,         tmotorTetrix, openLoop)
#pragma config(Motor,  mtr_S1_C3_1,     rear_right,    tmotorTetrix, PIDControl, encoder)
#pragma config(Motor,  mtr_S1_C3_2,     rear_left,     tmotorTetrix, PIDControl, reversed, encoder)
#pragma config(Motor,  mtr_S1_C4_1,     front_right,   tmotorTetrix, PIDControl, encoder)
#pragma config(Motor,  mtr_S1_C4_2,     front_left,    tmotorTetrix, PIDControl, reversed, encoder)
#pragma config(Servo,  srvo_S1_C2_1,    scissorb,             tServoStandard)
#pragma config(Servo,  srvo_S1_C2_2,    scissort,             tServoStandard)
#pragma config(Servo,  srvo_S1_C2_3,    bucket,               tServoStandard)
#pragma config(Servo,  srvo_S1_C2_4,    servo4,               tServoNone)
#pragma config(Servo,  srvo_S1_C2_5,    servo5,               tServoNone)
#pragma config(Servo,  srvo_S1_C2_6,    servo6,               tServoNone)

task main()
{
//while (SensorValue(lift_down) == 0)
//	{
//		motor[lift1] = 100;
//		motor[lift2] = -100;
//	}
//motor[lift1] = 0;
	//	motor[lift2] = 0;
//runLift(3200,300,-100);
//wait1Msec(10000);
	nMotorEncoder[lift_en] = 0;
while(true)
{
	nxtDisplayTextLine(1,"lift %d", nMotorEncoder[lift_en]);
if(nNxtButtonPressed == 1)
	{
		motor[lift1] = 100;
		motor[lift2] = -100;
	}
if(nNxtButtonPressed == 2)
{
	motor[lift1] = -100;
		motor[lift2] = 100;
	}
	if(nNxtButtonPressed == -1)
	{
		motor[lift1] = 0;
   motor[lift2] = 0;
 }
}
}
