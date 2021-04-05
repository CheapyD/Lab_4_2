#pragma once
#include "Figure.h"

class Rectangle : public Figure
{
private:
	int a, b;

public:
	Rectangle();
	Rectangle(int a, int b);

	int GetA() { return a; }
	int GetB() { return b; }
	void SetA(int value) { a = value; }
	void SetB(int value) { b = value; }

	virtual double Square();
	virtual double Perimeter();
	virtual ostream& Print(ostream& out) const;
};