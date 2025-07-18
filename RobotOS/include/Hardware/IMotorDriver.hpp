#pragma once

class IMotorDriver {
public:
	virtual ~IMotorDriver() = default;
	virtual void setSpeed(int rpm) = 0;
	virtual void stop() = 0;
};