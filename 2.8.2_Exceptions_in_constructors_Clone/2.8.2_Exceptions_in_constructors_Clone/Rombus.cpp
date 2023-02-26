#include "Rombus.h"

Rombus::Rombus(int a, int b, int c, int d, int A, int B, int C, int D) :Quadrilateral(a, b, c, d, A, B, C, D) 
{ 
	if (a!=b || a!=c || a!=d || b!=c || b!=d || c!=d)
	{
		throw BadFigure("Ошибка создания ромба. Причина: не все стороны равны");
	}
	else if (A!=C)
	{
		throw BadFigure("Ошибка создания ромба. Причина: углы A и C не равны");
	}
	else if (B!=D)
	{
		throw BadFigure("Ошибка создания ромба. Причина: углы B и D не равны");
	}
	name = "Ромб"; 
}

Figure* Rombus::clone(int a, int b, int c, int d, int A, int B, int C, int D)
{
	return new Rombus(a, b, c, d, A, B, C, D);
}

