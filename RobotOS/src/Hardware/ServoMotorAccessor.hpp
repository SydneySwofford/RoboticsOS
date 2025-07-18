#pragma once
#include "../include/Hardware/IMotorDriver.hpp"

class ServoMotor : public IMotorDriver {
public:
	int test;

	ServoMotor(int pin);
	~ServoMotor();
	void setSpeed(int rpm);
	void stop();

private:
	int currentSpeed;
	int pin;
};