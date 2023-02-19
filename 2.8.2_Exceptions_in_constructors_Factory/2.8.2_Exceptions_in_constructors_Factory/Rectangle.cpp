#include "Rectangle.h"

Rectangle::Rectangle(int a, int b, int c, int d, int A, int B, int C, int D) :Quadrilateral(a, b, c, d, A, B, C, D) 
{
	if (a!=c)
	{
		throw BadFigure("Ошибка создания прямоугольника. Причина: стороны a и c не равны");
	}
	else if (b!=d)
	{
		throw BadFigure("Ошибка создания прямоугольника. Причина: стороны b и d не равны");
	}
	else if (A!=90 || B!=90 || C!=90 || D!=90)
	{
		throw BadFigure("Ошибка создания прямоугольника. Причина: не все углы равны 90");
	}
	name = "Прямоугольник"; 
}
