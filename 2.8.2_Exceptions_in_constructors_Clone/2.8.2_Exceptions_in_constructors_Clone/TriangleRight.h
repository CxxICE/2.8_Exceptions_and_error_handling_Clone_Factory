#pragma once

#include "Figure.h"
#include "Triangle.h"
#include "BadFigure.h"

class TriangleRight : public Triangle
{
public:
	TriangleRight() {};
	TriangleRight(int a, int b, int c, int A, int B, int Ñ);
	Figure* clone(int a, int b, int c, int A, int B, int C) override;
};


