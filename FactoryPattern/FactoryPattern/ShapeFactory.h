#pragma once
#include <string>
#include "Shape.h"
#include "Circle.h"
#include "Square.h"
#include "Rectangle.h"

class ShapeFactory
{
public:
	ShapeFactory();
	~ShapeFactory();
	Shape* getShape(TypeOfShape type);
};

