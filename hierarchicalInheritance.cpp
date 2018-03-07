#include<iostream>
using namespace std;

class Student
{
protected:
	int roll;
	float fees;
public:
	void get_data(int x, float y){roll=x;fees=y;}
	void put_data()
	{
		cout << "Roll No: " << roll << endl;
		cout << "Fees: " << fees << endl;
	}
};

class Arts : public Student
{
	float history;
public:
	void get_h(float x){history=x;}
	void put_h()
	{
		cout << "History: " << history << endl;
	}
};

class Engginering : public Student
{
	float oop;
public:
	void get_o(float x){oop=x;}
	void put_o()
	{
		cout << "OOP: " << oop << endl;
	}
};

int main()
{
	Arts as1;
	as1.get_data(100,7400.50);
	as1.get_h(89.00);
	Engginering es1;
	es1.get_data(200,8400.50);
	es1.get_o(75.40);
	as1.put_data();
	as1.put_h();
	es1.put_data();
	es1.put_o();

	return 0;
}