#include "TriangleIsosceles.h"

TriangleIsosceles::TriangleIsosceles(int a, int b, int c, int A, int B, int C) :Triangle(a, b, c, A, B, C) 
{ 
	if (a != c)
	{
		throw BadFigure("Ошибка создания равнобедренного треугольника. Причина: стороны a и c не равны");
	}
	else if (A != C)
	{
		throw BadFigure("Ошибка создания равнобедренного треугольника. Причина: углы A и C не равны");
	}
	name = "Равнобедренный треугольник"; 
}
