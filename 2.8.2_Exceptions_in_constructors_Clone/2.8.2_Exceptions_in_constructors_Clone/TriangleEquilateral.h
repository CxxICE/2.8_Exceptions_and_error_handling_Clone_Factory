#pragma once

#include "Figure.h"
#include "Triangle.h"
#include "BadFigure.h"

class TriangleEquilateral : public Triangle
{
public:
	TriangleEquilateral() {};
	TriangleEquilateral(int a, int b, int c, int A, int B, int Ñ);
	Figure* clone(int a, int b, int c, int A, int B, int C) override;
};