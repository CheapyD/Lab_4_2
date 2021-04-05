#pragma once
#include <iostream>
#include <typeinfo>

using namespace std;

class Figure
{
public:
	virtual double Square() = 0;
	virtual double Perimeter() = 0;
	virtual ostream& Print(ostream& out) const = 0;
};