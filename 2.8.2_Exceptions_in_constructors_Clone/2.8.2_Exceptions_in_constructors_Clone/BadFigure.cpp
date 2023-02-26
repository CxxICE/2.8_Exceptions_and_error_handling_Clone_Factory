#include "BadFigure.h"

BadFigure::BadFigure(std::string err) : std::domain_error(err) {};
