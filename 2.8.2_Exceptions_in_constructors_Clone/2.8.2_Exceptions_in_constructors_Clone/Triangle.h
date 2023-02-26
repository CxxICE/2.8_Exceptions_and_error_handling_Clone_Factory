#pragma once

#include "Figure.h"
#include "BadFigure.h"

class Triangle : public Figure
{
public:
	Triangle() {};
	Triangle(int a, int b, int c, int A, int B, int C);
	void printParam() override;
	Figure* clone(int a, int b, int c, int A, int B, int C) override;
protected:
	int a, b, c, A, B, C;
};

