#include<iostream>
using namespace std;

class A
{
	int x;
public:
	A(int a)
	{
		cout << "A is initialized" << endl;
		x = a;
	}
};

class B
{
	float y;
public:
	B(float b)
	{
		cout << "B is initialized" << endl;
		y = b;
	}
};

class C //container class
{
	int m;
	A a1;
	B b1;
public:
	C(int p, float q) : a1(p), b1(q)
	{
		cout << "C initialized" << endl;
		m = p;
	}
	int get_m(){return m;}
};

int main()
{
	C c1(100,300.89);
	cout << c1.get_m() << endl;
	return 0;
}