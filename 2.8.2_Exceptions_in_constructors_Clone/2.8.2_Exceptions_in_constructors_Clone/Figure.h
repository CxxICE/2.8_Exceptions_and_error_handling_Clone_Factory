#pragma once

#include <string>
#include <iostream>
#include <stdarg.h>

#include "ClassEnumFig.h"

class Figure
{
public:
	Figure();
	virtual ~Figure() {};
	virtual void printParam();
	static Figure *createFigure(Figures fNum, ...);
	virtual Figure* clone(int a, int b, int c, int A, int B, int C);
	virtual Figure* clone(int a, int b, int c, int d, int A, int B, int C, int D);
protected:
	int quantSides;
	std::string name;
};

