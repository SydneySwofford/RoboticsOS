//SENSOR CONTRACT
#ifndef ISENSORACCESSOR_HPP
#define ISENSORACCESSOR_HPP


class ISensorAccessor
{
public:

	virtual ~ISensorAccessor() = default;
	virtual void i2c_start() = 0;
	virtual unsigned char i2c_rx(char ack) = 0;
	virtual bool i2c_tx(unsigned char d) = 0;
	virtual void i2c_stop() = 0;
};





#endif ISENSORACCESSOR_HPP
