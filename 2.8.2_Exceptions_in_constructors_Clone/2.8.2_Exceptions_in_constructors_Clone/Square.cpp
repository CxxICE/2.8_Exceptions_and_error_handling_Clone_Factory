#include "Square.h"

Square::Square(int a, int b, int c, int d, int A, int B, int C, int D) :Quadrilateral(a, b, c, d, A, B, C, D) 
{ 
	if (a!=b || a!=c || a!=d || b!=c || b!=d || c!=d)
	{
		throw BadFigure("Ошибка создания квадрата. Причина: не все стороны равны");
	}
	else if (A!=90 || B!=90 || C!=90 || D!=90)
	{
		throw BadFigure("Ошибка создания квадрата. Причина: не все углы равны 90");
	}
	name = "Квадрат"; 
}

Figure* Square::clone(int a, int b, int c, int d, int A, int B, int C, int D)
{
	return new Square(a, b, c, d, A, B, C, D);
}