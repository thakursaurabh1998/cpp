#include<iostream>
using namespace std;

class Teacher
{
	int t;
public:
	Teacher(int a)
	{
		t=a;
		cout << "No of teacher: " << t << endl;
	}
};

class Teacher
{
public:
	
};

class Typist
{
	int typ;
public:
	Typist(int b)
	{
		typ=b;
		cout << "No of Typist: " << typ << endl;
	}
};

class Officer
{
	int off;
public:
	Officer(int c)
	{
		off=c;
		cout << "No. of Officer: " << off << endl;
	}
};

class Staff
{
	int st;
	Teacher t1;
	Typist p1;
	Officer o1;
public:
	Staff(int x, int y, int z) : t1(x), p1(y), o1(z)
	{
		st = x + y + z;
		cout << "Total Staff: " << st << endl;
	}
};

int main()
{
	Staff s1(10,20,30);

	return 0;
}