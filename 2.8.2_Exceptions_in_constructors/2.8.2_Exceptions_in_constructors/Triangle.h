#pragma once

#include "Figure.h"
#include "BadFigure.h"

class Triangle : public Figure
{
public:
	Triangle(int a, int b, int c, int A, int B, int C);
	void printParam() override;
protected:
	int a, b, c, A, B, C;
};

