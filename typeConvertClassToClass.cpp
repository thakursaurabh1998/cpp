#include<iostream>

using namespace std;

class Rectangle;

class Square
{
	int side;
public:
	Square(int s)
	{
		side=s;
	}
	int getside()
	{
		return side;
	}

	/* For conversion by operator overloading */

	// operator Rectangle()
	// {
	// 	Rectangle R(side,side);
	// 	return R;
	// }
	~Square(){};
};

class Rectangle
{
	int length, breadth;
public:
	Rectangle(Square a)
	{
		length=a.getside();
		breadth=a.getside();
	}
	Rectangle(int l, int b)
	{
		length=l;
		breadth=b;
	}
	void show()
	{
		cout<<length<<" "<<breadth<<endl;
	}
	~Rectangle(){};
	
};

int main()
{
	Square s(50)	;
	Rectangle r(0,0);
	r=s;
	r.show();

	return 0;
}