#include <iostream>
#include <vector>
#include <windows.h>
#include "Car.h"
#include "Van.h"




int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	std::cout << "������� 1\n" << std::endl;
	double  i = 32200030001.1;
	//int a = static_cast<int>(std::round(i));
	//int a = static_cast<int>(i + 0.5 - (i < 0));
	//int a = int(i);
	//int a = i;//���� ��������� ����� ��� ��������� �������� ����, �������������� �������� � ��������������� ���������.
	//std::cout << a << std::endl;

	std::cout << "������� 2\n" << std::endl;
	double c = 5.8;
	const double* pc = &c;
	double* s = const_cast<double*>(pc);
	std::cout << *s << std::endl;
	*s = 6.7;
	std::cout << *s << std::endl;

	std::cout << "������� 3\n" << std::endl;
	Car car;
	Van van;
	//upcast
	Car* pCar = &van;
	pCar->drive();//Van drive
	
	//downcast
	Van* pVan = (Van*)&car;
	pVan->drive();//Car drive

	//��������� downcast
	//Van* pVan2 = (Van*)&pCar;//UB �������� ����� ����������
	//pVan2->drive();
	// 
	//Van* pVan2 = &�ar;
	//pVan2->stop();//������ �������� ������ � ������� ��������� ������



}