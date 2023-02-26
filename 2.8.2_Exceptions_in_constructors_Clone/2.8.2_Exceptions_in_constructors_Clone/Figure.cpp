#include "Figure.h"
#include "Triangle.h"
#include "TriangleRight.h"
#include "TriangleEquilateral.h"
#include "TriangleIsosceles.h"
#include "Quadrilateral.h"
#include "Rectangle.h"
#include "Square.h"
#include "Parallelogram.h"
#include "Rombus.h"

Figure::Figure()
{
	quantSides = 0;
	name = "Фигура";
}

void Figure::printParam() {};
Figure* Figure::clone(int a, int b, int c, int A, int B, int C) { return new Figure(); };
Figure* Figure::clone(int a, int b, int c, int d, int A, int B, int C, int D) { return new Figure(); };

Figure *Figure::createFigure(Figures fNum, ...)
{
	Figure *figure_new = nullptr;
	const int N = 8;
	int args[N] {};
	int s = 0;
	va_list factor;
	va_start(factor, fNum);

	for (int i = 0; i < N; ++i)
	{
		args[i] = va_arg(factor, int);
	}
	va_end(factor);
	try
	{
		switch (fNum)
		{
		case Figures::TRIANGLE:
			figure_new = new Triangle(args[0], args[1], args[2], args[3], args[4], args[5]);
			break;
		case Figures::TRIANGLE_R:
			figure_new = new TriangleRight(args[0], args[1], args[2], args[3], args[4], args[5]);
			break;
		case Figures::TRIANGLE_IS:
			figure_new = new TriangleIsosceles(args[0], args[1], args[2], args[3], args[4], args[5]);
			break;
		case Figures::TRIANGLE_EQ:
			figure_new = new TriangleEquilateral(args[0], args[1], args[2], args[3], args[4], args[5]);
			break;
		case Figures::QUAD:
			figure_new = new Quadrilateral(args[0], args[1], args[2], args[3], args[4], args[5], args[6], args[7]);
			break;
		case Figures::QUAD_RECT:
			figure_new = new Rectangle(args[0], args[1], args[2], args[3], args[4], args[5], args[6], args[7]);
			break;
		case Figures::QUAD_SQ:
			figure_new = new Square(args[0], args[1], args[2], args[3], args[4], args[5], args[6], args[7]);
			break;
		case Figures::QUAD_PARAL:
			figure_new = new Parallelogram(args[0], args[1], args[2], args[3], args[4], args[5], args[6], args[7]);
			break;
		case Figures::QUAD_ROMB:
			figure_new = new Rombus(args[0], args[1], args[2], args[3], args[4], args[5], args[6], args[7]);
			break;		
		}
	}
	catch (const BadFigure &err)
	{
		std::cout << err.what() << std::endl;
		//throw; //проброс исключения далее если потребуется
	}	
	return figure_new;
}
