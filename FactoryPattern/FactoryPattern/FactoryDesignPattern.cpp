
#include "FactoryDesignPattern.h"



void factoryDesignPattern() {
	std::cout << "This is a factory design pattern for c++" << std::endl;
	ShapeFactory shapefactory;
	std::vector<Shape*> shapes;
	bool notDone = true;
	
	while (notDone){
		std::cout	<< "enter 1 to create a new shape" << std::endl
					<< "enter 2 to view all created shapes" << std::endl
					<< "enter 3 to delete all created shapes" << std::endl
					<< "enter 4 to exit" << std::endl;
		
		switch (getIntInput())
		{
		case 1:
			createNewShape(shapes, shapefactory); break;
		case 2:
			viewAllShapes(shapes, shapefactory); break;
		case 3:
			deleteAllShapes(shapes); break;
		case 4:
			notDone = false; break;
		default:
			break;
		}
	}
}

void createNewShape(std::vector<Shape*> &shapes, ShapeFactory &shapeFactory) {
	std::cout	<< "1. Create new shape" << std::endl
				<< "	enter 1 to create a Circle" << std::endl
				<< "	enter 2 to create a Square" << std::endl
				<< "	enter 3 to create a Rectangle" << std::endl;
	Shape *newShape;
	switch (getIntInput()) {
	case 1:
		newShape = shapeFactory.getShape(circle);
		newShape->draw();
		shapes.push_back(newShape);
		break;
	case 2:
		newShape = shapeFactory.getShape(square);
		newShape->draw();
		shapes.push_back(newShape);
		break;
	case 3:
		newShape = shapeFactory.getShape(rectangle);
		newShape->draw();
		shapes.push_back(newShape);
	default:
		break;
	}
}

void viewAllShapes(std::vector<Shape*> &shapes, ShapeFactory &shapeFactory) {
	std::cout	<< "2. view all shapes" << std::endl
				<< "	There are currently " << shapes.size() << " shapes saved." << std::endl;

	for (auto &shape : shapes) {
		std::cout << "		";
		shape->draw();
	}
}

void deleteAllShapes(std::vector<Shape*> &shapes) {
	std::cout << "3. All shapes will be deleted" << std::endl;
	for (auto &shape : shapes) {
		delete shape;
	}
	for (auto &shape : shapes) {
		shapes.pop_back();
	}
	std::cout << "	All shapes have been deleted" << std::endl;
}

int getIntInput() {
	int choice;
	if (std::cin >> choice);
	else {
		std::cin.clear();
		std::cin.ignore(1000, '\n');
		std::cout << "invalid input" << std::endl;
		choice = -1;
	}
	
	return choice;
}
