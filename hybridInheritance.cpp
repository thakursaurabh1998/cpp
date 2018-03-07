#include<iostream>
using namespace std;

class Student
{
protected:
	int roll;
public:
	void get_roll(int x){roll=x;}
	void put_roll()
	{
		cout << "Roll No: " << roll << endl;
	}
};

class Test : public Student
{
protected:
	float sub1, sub2;
public:
	void get_marks(float x, float y)
	{
		sub1=x;
		sub2=y;
	}
	void put_marks()
	{
		cout << "Sub1: " << sub1 << endl;
		cout << "Sub2: " << sub2 << endl;
	}
};

class Sports
{
protected:
	float score;
public:
	void get_score(float x){score=x;}
	void put_score()
	{
		cout << "Score: " << score << endl;
	}
};

class Result : public Test, public Sports
{
	float total;
public:
	void display()
	{
		total = sub1+sub2+score;
		put_roll();
		put_marks();
		put_score();
		cout << "Total: " << total << endl;
	}
};

int main()
{
	Result std1;
	std1.get_roll(1001);
	std1.get_marks(40.4,60.6);
	std1.get_score(7.7);
	std1.display();

	return 0;
}