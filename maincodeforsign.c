#pragma config(Sensor, dgtl1,  button1,        sensorTouch)
#pragma config(Motor,  port1,           motor1,        tmotorVex393_HBridge, openLoop)


task main()
{

repeat(forever)
{

untilTouch(button1);
startMotor(motor1, 15);
wait(8);
stopMotor(motor1);
wait(5);
startMotor(motor1, -25);
wait(10);
stopMotor(motor1);




}


}
//Speed for motor can be from -127 to 127, negative = opposite direction
