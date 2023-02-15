#pragma once

#include <string>

class Figure
{
public:
	Figure();
	virtual void printParam();
protected:
	int quantSides;
	std::string name;
};

