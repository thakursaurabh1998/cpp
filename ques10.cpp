#include <iostream>
#include <string>
using namespace std;


class Employee
{
protected:
	int id,age,salary;
	string name;
public:
	Employee(int i, string n, int a, int s)
	{
		id = i;
		name = n;
		age = a;
		salary = s;
	}
	virtual void clerk()=0;
	void print_data()
	{
		cout << "Name: " << name << endl;
		cout << "Age: " << age << endl;
		cout << "Salary: " << salary << endl;
	}
	virtual ~Employee(){}
};

class ME : public Employee
{
public:
	ME(int i, string n, int a, int s) : Employee(i,n,a,s){}
	void clerk()
	{
		cout << "Dept: ME" << endl;
		this->print_data();
	}
	~ME(){}
};

class CSE : public Employee
{
public:
	CSE(int i, string n, int a, int s) : Employee(i,n,a,s){}
	void clerk()
	{
		cout << "Dept: CSE" << endl;
		this->print_data();
	}
	~CSE(){}
};

class ECE : public Employee
{
public:
	ECE(int i, string n, int a, int s) : Employee(i,n,a,s){}
	void clerk()
	{
		cout << "Dept: ECE" << endl;
		this->print_data();
	}
	~ECE(){}
};

int main()
{
	Employee *bptr;
	int i,s,a;
	string n;
	cin >> i >> n >> a >> s;
	switch(i)
	{
		case 1:
			bptr = new CSE(i,n,a,s);
			break;
		case 2:
			bptr = new ECE(i,n,a,s);
			break;
		case 3:
			bptr = new ME(i,n,a,s);
	}
	bptr->clerk();
	delete bptr;
	return 0;
}