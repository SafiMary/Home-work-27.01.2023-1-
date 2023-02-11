#pragma once
#include "Car.h"
class Van: public Car{
public:
	void drive()override;
	void stop();
private:
	int _speed;

};

