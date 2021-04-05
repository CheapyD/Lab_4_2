#pragma once
#include "Figure.h"

class Trapeze : public Figure
{
private:
	int a, b, c, d;

public:
	Trapeze();
	Trapeze(int a, int b, int c, int d);

	int GetA() { return a; }
	int GetB() { return b; }
	int GetC() { return c; }
	int GetD() { return d; }

	void SetA(int value) { a = value; }
	void SetB(int value) { b = value; }
	void SetC(int value) { c = value; }
	void SetD(int value) { d = value; }

	virtual double Square();
	virtual double Perimeter();
	virtual ostream& Print(ostream& out) const;
};