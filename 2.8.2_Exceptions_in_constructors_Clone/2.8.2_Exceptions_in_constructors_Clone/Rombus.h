#pragma once

#include "Figure.h"
#include "Quadrilateral.h"
#include "BadFigure.h"

class Rombus : public Quadrilateral
{
public:
	Rombus() {};
	Rombus(int a, int b, int c, int d, int A, int B, int C, int D);
	Figure* clone(int a, int b, int c, int d, int A, int B, int C, int D) override;
};