#include "Parallelogram.h"

Parallelogram::Parallelogram(int a, int b, int c, int d, int A, int B, int C, int D) :Quadrilateral(a, b, c, d, A, B, C, D) 
{ 
	if (a!=c)
	{
		throw BadFigure("Ошибка создания параллелограмма. Причина: стороны a и c не равны");
	}
	else if (b!=d)
	{
		throw BadFigure("Ошибка создания параллелограмма. Причина: стороны b и d не равны");
	}
	else if (A!=C)
	{
		throw BadFigure("Ошибка создания параллелограмма. Причина: углы A и C не равны");
	}
	else if (B!=D)
	{
		throw BadFigure("Ошибка создания параллелограмма. Причина: углы B и D не равны");
	}

	name = "Параллелограмм"; 
}
