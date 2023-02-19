#pragma once

#include <stdexcept>

class BadFigure : public std::domain_error
{
public:
	BadFigure(std::string err);
};

