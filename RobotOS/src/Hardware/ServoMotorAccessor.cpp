#include <iostream>
#include "ServoMotor.hpp"


ServoMotor::ServoMotor(int pin)
:pin(pin)
{
}

void ServoMotor::setSpeed(int rpm)
{

}

void ServoMotor::stop()
{
	currentSpeed = 0;
}

ServoMotor::~ServoMotor()
{

}
