// Create a base class shape and store two double type values used to compute area of figures.
// Derive two classes triangle and rectangle from the base shape.
// Use get_data() method in base class to initialize the data members and display area to compute and display the area of figures.
// Make this function virtual and redefine it in derived classes to display their area.

#include <iostream>
using namespace std;

class Shape
{
protected:
	double length, breadth, area;
public:
	// Shape(double l, double b)
	// {
	// 	length = l;
	// 	breadth = b;
	// }
	void get_data()
	{
		cout << "Enter 2 sides: " << endl;
		cin >> length >> breadth;
		// length = l;
		// breadth = b;
	}
	void virtual display()
	{
		area = length * breadth;
		cout << area << endl;
	}
	// ~Shape();
	
};

class Rectangle : public Shape
{
public:
	// Rectangle();
	void display()
	{
		area = length * breadth;
		cout << "Area of rectangle: " << area << endl;
	}
	// ~Rectangle();
};

class Triangle : public Shape
{
public:
	// Square();
	void display()
	{
		area = length * breadth / 2.0;
		cout << "Area of triangle: " << area << endl;
	}
	// ~Square();
};

int main()
{
	Shape *ptr;
	Rectangle r;
	ptr = &r;
	ptr->get_data();
	ptr->display();
	Triangle t;
	ptr = &t;
	ptr->get_data();
	ptr->display();

	return 0;
}