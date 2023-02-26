#include "TriangleRight.h"

TriangleRight::TriangleRight(int a, int b, int c, int A, int B, int С) :Triangle(a, b, c, A, B, С) 
{ 
	if (C != 90)
	{
		throw BadFigure("Ошибка создания прямоугольного треугольника. Причина: угол С не равен 90");
	}
	name = "Прямоугольный треугольник"; 
}

Figure* TriangleRight::clone(int a, int b, int c, int A, int B, int C)
{
	return new TriangleRight(a, b, c, A, B, C);
}
