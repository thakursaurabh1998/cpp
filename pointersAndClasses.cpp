#include<iostream>
#include<cstring>

using namespace std;

class Base
{
public:
	int b;
	void show()
	{
		cout << b << endl;
	}
};

class Derived:public Base
{
public:
	int d;
	void show()
	{
		cout << d << endl;
	}
};

int main()
{
	Base b1, *bptr;
	bptr = &b1;
	bptr->b=100;
	// bptr->d=200; Not possible(Derived class cant be accesed from base class)
	Derived *dptr,d1;
	dptr = &d1;
	dptr->b = 100;
	dptr->d = 200;
	// If we want to use same pointer to point at different classes
	// Then we can typecast it to different class
	(*Derived) bptr->d = 200; //Pointer is typecasted to the derived class

	return 0;
}