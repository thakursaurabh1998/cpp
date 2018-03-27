#include <iostream>
#include <string>
using namespace std;


class employee
{
protected:
	int id;
	string name;
	string des;
public:
	void show_emp_data();
	void get_emp_data();
};

void employee::get_emp_data()
{
	cin >> id >> name >> des;
}

void employee::show_emp_data()
{
	cout << id << endl << name << endl << des << endl;
}

class contract : public employee
{
	int hrs;
	float wph;
public:
	void get_cont_data()
	{
		this->get_emp_data();
		cin >> hrs >> wph;
	}
	void show_cont_data()
	{
		this->show_emp_data();
		cout << (float)hrs * wph << endl;
	}
};

class permanent : public employee
{
	float basicPay,HRA,TA;
public:
	void get_per_data()
	{
		cin >> basicPay >> HRA >> TA;
	}
	void show_per_data()
	{
		cout << basicPay+HRA+TA+basicPay*0.1 << endl;
	}
};


int main()
{
	contract c;
	c.get_cont_data();
	permanent p;
	p.get_per_data();
	c.show_cont_data();
	p.show_per_data();
	
	return 0;
}