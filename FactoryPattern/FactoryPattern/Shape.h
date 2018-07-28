#pragma once
#include <iostream>
class Shape
{
public:
	Shape();
	virtual ~Shape();
	virtual void draw() { std::cout << "This is the default class Shape and should never be created" << std::endl; };
private:
};

enum TypeOfShape
{
	circle,
	square,
	rectangle
};