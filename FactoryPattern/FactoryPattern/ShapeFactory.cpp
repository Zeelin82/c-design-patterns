#include "ShapeFactory.h"


ShapeFactory::ShapeFactory()
{
}


ShapeFactory::~ShapeFactory()
{
}

Shape* ShapeFactory::getShape(TypeOfShape type)
{
	
	Shape* newShape;
	switch (type)
	{
	case circle:
		newShape = new Circle;
		break;
	case square:
		newShape = new Square;
		break;
	case rectangle:
		newShape = new Rectangle;
		break;
	default:
		newShape = new Circle;
		break;
	}
	return newShape;
}
