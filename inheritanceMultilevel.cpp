#include<iostream>

using namespace std;

class Student
{
protected:
	int roll;
public:
	void get_roll(int x)
	{
		roll = x;
	}
	void put_roll()
	{
		cout << "Roll No : " << roll << endl;
	}
};

class Test : public Student
{
protected:
	int sub1, sub2;
public:
	void get_marks(int x, int y)
	{
		sub1 = x;
		sub2 = y;
	}
	void put_marks()
	{
		cout << "sub1 = " << sub1 << endl;
		cout << "sub2 = " << sub2 << endl;
	}
};

class Result : public Test
{
	int total;
public:
	void display()
	{
		total = sub1 + sub2;
		put_roll();
		put_marks();
		cout << "Total = " << total << endl;
	}
};

int main()
{
	Result r1;
	r1.get_roll(100);
	r1.get_marks(40, 50);
	r1.display();

	return 0;
}