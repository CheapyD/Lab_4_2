#pragma once
#include "Figure.h"

class Circle : public Figure
{
private:
	int R;

public:
	Circle();
	Circle(int R);

	int GetR() { return R; }
	void SetR(int value) { R = value; }

	virtual double Square();
	virtual double Perimeter();
	virtual ostream& Print(ostream& out) const;
};