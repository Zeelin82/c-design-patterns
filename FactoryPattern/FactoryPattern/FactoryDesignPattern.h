#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Shape.h"
#include "ShapeFactory.h"

void factoryDesignPattern();
void createNewShape(std::vector<Shape*> &shapes, ShapeFactory &shapeFactory);
void viewAllShapes(std::vector<Shape*> &shapes, ShapeFactory &shapeFactory);
void deleteAllShapes(std::vector<Shape*> &shapes);
int getIntInput();