#include <clocale>
#include <cstdlib>
#include <iostream>

#include "BadFigure.h"

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

void print_info(Figure *f)
{
	if (f != nullptr)
	{
		f->printParam();
	}	
}
void print_info2(Figure *f)
{
	if (f != nullptr)
	{
		f->printParam();
		delete f;
	}	
}	

#define LIST(MACRO)							 \
MACRO(Triangle, triangle,10,20,30,50,60,80 ) \
MACRO(Triangle, triangle,10,20,30,50,60,70 ) \
MACRO(TriangleRight, triangleRight,10,20,30,50,60,70 ) \
MACRO(TriangleRight, triangleRight,10,20,30,40,50,90 ) \
MACRO(TriangleIsosceles, triangleIsosceles,10,20,30,50,80,50 ) \
MACRO(TriangleIsosceles, triangleIsosceles,10,20,10,50,90,40 ) \
MACRO(TriangleIsosceles, triangleIsosceles,10,20,10,50,80,50 ) \
MACRO(TriangleEquilateral, triangleEquilateral,10,20,30,60,60,60 ) \
MACRO(TriangleEquilateral, triangleEquilateral,10,10,10,50,60,70 ) \
MACRO(TriangleEquilateral, triangleEquilateral,10,10,10,60,60,60 ) \
MACRO(Quadrilateral, quadrilateral,10,20,30,40,80,80,80,130) \
MACRO(Quadrilateral, quadrilateral,10,20,30,40,80,80,80,120) \
MACRO(Rectangle, rectangle,60,40,70,40,90,90,90,90) \
MACRO(Rectangle, rectangle,60,40,60,50,90,90,90,90) \
MACRO(Rectangle, rectangle,60,40,60,40,80,100,90,90) \
MACRO(Rectangle, rectangle,60,40,60,40,90,90,90,90) \
MACRO(Square, square,40,40,40,50,90,90,90,90) \
MACRO(Square, square,40,40,40,40,80,100,90,90) \
MACRO(Square, square,40,40,40,40,90,90,90,90) \
MACRO(Parallelogram, parallelogram,40,60,50,60,80,100,80,100) \
MACRO(Parallelogram, parallelogram,40,60,40,70,80,100,80,100) \
MACRO(Parallelogram, parallelogram,40,60,40,60,85,100,75,100) \
MACRO(Parallelogram, parallelogram,40,60,40,60,80,105,80,95) \
MACRO(Parallelogram, parallelogram,40,60,40,60,80,100,80,100) \
MACRO(Rombus, rombus,40,40,40,50,80,100,80,100) \
MACRO(Rombus, rombus,40,40,40,40,85,100,75,100) \
MACRO(Rombus, rombus,40,40,40,40,80,105,80,95) \
MACRO(Rombus, rombus,40,40,40,40,80,100,80,100) \

#define TRY_FIGURE(type, fig, ...) \
try												\
{												\
	type fig(__VA_ARGS__);print_info(&fig);		\
}												\
catch (const BadFigure &err)					\
{												\
	std::cout << err.what() << std::endl;		\
}

int main()
{
	setlocale(LC_ALL, "RU");
	
	LIST(TRY_FIGURE)

	std::cout << "\nФабричный метод!\n\n";
	
	print_info2(Figure::createFigure(Figures::TRIANGLE, 10, 20, 30, 50, 60, 80));
	print_info2(Figure::createFigure(Figures::TRIANGLE, 10, 20, 30, 50, 60, 70));
	print_info2(Figure::createFigure(Figures::TRIANGLE_R, 10, 20, 30, 50, 60, 70));
	print_info2(Figure::createFigure(Figures::TRIANGLE_R, 10, 20, 30, 40, 50, 90));
	print_info2(Figure::createFigure(Figures::TRIANGLE_IS, 10, 20, 30, 50, 80, 50));
	print_info2(Figure::createFigure(Figures::TRIANGLE_IS, 10, 20, 10, 50, 90, 40));
	print_info2(Figure::createFigure(Figures::TRIANGLE_IS, 10, 20, 10, 50, 80, 50));
	print_info2(Figure::createFigure(Figures::TRIANGLE_EQ, 10, 20, 30, 60, 60, 60));
	print_info2(Figure::createFigure(Figures::TRIANGLE_EQ, 10, 10, 10, 50, 60, 70));
	print_info2(Figure::createFigure(Figures::TRIANGLE_EQ, 10, 10, 10, 60, 60, 60));
	
	print_info2(Figure::createFigure(Figures::QUAD, 10, 20, 30, 40, 80, 80, 80, 130));
	print_info2(Figure::createFigure(Figures::QUAD, 10, 20, 30, 40, 80, 80, 80, 120));
	print_info2(Figure::createFigure(Figures::QUAD_RECT, 60, 40, 70, 40, 90, 90, 90, 90));
	print_info2(Figure::createFigure(Figures::QUAD_RECT, 60, 40, 60, 50, 90, 90, 90, 90));
	print_info2(Figure::createFigure(Figures::QUAD_RECT, 60, 40, 60, 40, 80, 100, 90, 90));
	print_info2(Figure::createFigure(Figures::QUAD_RECT, 60, 40, 60, 40, 90, 90, 90, 90));
	print_info2(Figure::createFigure(Figures::QUAD_SQ, 40, 40, 40, 50, 90, 90, 90, 90));
	print_info2(Figure::createFigure(Figures::QUAD_SQ, 40, 40, 40, 40, 80, 100, 90, 90));
	print_info2(Figure::createFigure(Figures::QUAD_SQ, 40, 40, 40, 40, 90, 90, 90, 90));
	print_info2(Figure::createFigure(Figures::QUAD_PARAL, 40, 60, 50, 60, 80, 100, 80, 100));
	print_info2(Figure::createFigure(Figures::QUAD_PARAL, 40, 60, 40, 70, 80, 100, 80, 100));
	print_info2(Figure::createFigure(Figures::QUAD_PARAL, 40, 60, 40, 60, 85, 100, 75, 100));
	print_info2(Figure::createFigure(Figures::QUAD_PARAL, 40, 60, 40, 60, 80, 105, 80, 95));
	print_info2(Figure::createFigure(Figures::QUAD_PARAL, 40, 60, 40, 60, 80, 100, 80, 100));
	print_info2(Figure::createFigure(Figures::QUAD_ROMB, 40, 40, 40, 50, 80, 100, 80, 100));
	print_info2(Figure::createFigure(Figures::QUAD_ROMB, 40, 40, 40, 40, 85, 100, 75, 100));
	print_info2(Figure::createFigure(Figures::QUAD_ROMB, 40, 40, 40, 40, 80, 105, 80, 95));
	print_info2(Figure::createFigure(Figures::QUAD_ROMB, 40, 40, 40, 40, 80, 100, 80, 100));
		
	system("pause");
}