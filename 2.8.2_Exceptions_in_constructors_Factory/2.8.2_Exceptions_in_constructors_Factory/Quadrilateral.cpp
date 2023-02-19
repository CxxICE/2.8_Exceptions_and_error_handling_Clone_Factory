#include "Quadrilateral.h"

#include <iostream>
#include <format>

Quadrilateral::Quadrilateral(int a, int b, int c, int d, int A, int B, int C, int D)
{
	if (A + B + C + D != 360)
	{
		throw BadFigure("Ошибка создания четырехугольника. Причина: сумма углов не равна 360");
	}
	quantSides = 4;
	name = "Четырехугольник";
	this->a = a;
	this->b = b;
	this->c = c;
	this->d = d;
	this->A = A;
	this->B = B;
	this->C = C;
	this->D = D;
}

void Quadrilateral::printParam()
{
	std::cout	<< name	<< " ("
				<< std::format("Стороны: {}, {}, {}, {}; ",a,b,c,d)		//c++20
				<< std::format("Углы: {}, {}, {}, {}) создан\n",A,B,C,D);	//c++20
}
