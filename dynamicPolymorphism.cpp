#include<iostream>
using namespace std;

class Base
{
public:
	void virtual show()
	{
		cout << "In Base" << endl;
	}
};

class Derived : public Base
{
public:
	void show()
	{
		cout << "In Derived" << endl;
	}
};

int main()
{
	Base *bptr, b1;
	Derived d1;
	bptr = &b1;
	bptr->show();
	bptr = &d1;
	bptr->show();

	return 0;
}