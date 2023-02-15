#pragma once

#include "Figure.h"
#include "BadFigure.h"

class Quadrilateral : public Figure
{
public:
	Quadrilateral(int a, int b, int c, int d, int A, int B, int C, int D);
	void printParam() override;
protected:
	int a, b, c, d, A, B, C, D;
};

