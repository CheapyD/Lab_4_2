#include "Circle.h"
#include "Rectangle.h"
#include "Trapeze.h"

ostream& operator << (ostream& out, const Figure& r)
{
	return r.Print(out);
}

int main()
{
	Circle A(4);
	cout << A;
	cout << "Square of Circle = " << A.Square() << endl;
	cout << "Perimeter of Circle = " << A.Perimeter() << endl << endl;

	Rectangle B(4, 5);
	cout << B;
	cout << "Square of Rectangle = " << B.Square() << endl;
	cout << "Perimeter of Rectangle = " << B.Perimeter() << endl << endl;

	Trapeze C(7, 5, 3, 4);
	cout << C;
	cout << "Square of Trapeze = " << C.Square() << endl;
	cout << "Perimeter of Trapeze = " << C.Perimeter() << endl << endl;

	Figure* pa = new Circle();
	Figure* pb = new Rectangle();
	Figure* pc = new Trapeze();

	cout << typeid(pa).name() << endl;
	cout << typeid(*pa).name() << endl;
	cout << typeid(pb).name() << endl;
	cout << typeid(*pb).name() << endl;
	cout << typeid(pc).name() << endl;
	cout << typeid(*pc).name() << endl << endl;

	delete pa;
	delete pb;
	delete pc;

	Figure* N[3];

	N[0] = &A;
	N[1] = &B;
	N[2] = &C;

	cout << "Perimter of N[0] = " << N[0]->Perimeter() << endl;
	cout << "Square of N[1] = " << N[1]->Square() << endl;
	cout << "Perimeter of N[2] = " << N[2]->Perimeter() << endl;
}
