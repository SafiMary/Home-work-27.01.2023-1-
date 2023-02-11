#pragma once
#include <iostream>
class Car{
public:
	int getSpeed();
	virtual void drive();
private:
	int _speed;
};

