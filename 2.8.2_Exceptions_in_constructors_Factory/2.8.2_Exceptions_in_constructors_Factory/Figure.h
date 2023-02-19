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
protected:
	int quantSides;
	std::string name;
};

