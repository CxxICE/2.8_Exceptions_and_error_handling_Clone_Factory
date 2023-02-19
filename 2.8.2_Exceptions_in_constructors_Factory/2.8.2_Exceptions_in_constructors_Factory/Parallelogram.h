#pragma once

#include "Figure.h"
#include "Quadrilateral.h"
#include "BadFigure.h"

class Parallelogram : public Quadrilateral
{
public:
	Parallelogram(int a, int b, int c, int d, int A, int B, int C, int D);
};