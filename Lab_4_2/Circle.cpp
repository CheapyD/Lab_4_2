#include "Circle.h"

Circle::Circle()
	: R(0)
{}

Circle::Circle(int R)
	: R(R)
{}

double Circle::Square()
{
	const double PI = atan(1) * 4;
	double S = PI * R * R;
	return S;
}


double Circle::Perimeter()
{
	const double PI = atan(1) * 4;
	double P = 2 * PI * R;
	return P;
}

ostream& Circle::Print(ostream& out) const
{
	out << "Radius = " << R << endl;
	out << "Circle is visible" << endl;
	return out;
}