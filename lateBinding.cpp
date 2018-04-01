#include <iostream>
using namespace std;

class Numbers
{
protected:
	int a,b;
public:
	Numbers(int a, int b)
	{
		this->a = a;
		this->b = b;
	}
	virtual int calculate()=0;
	virtual ~Numbers(){}
};

class Add : public Numbers
{
public:
	Add(int a,int b) : Numbers(a,b){}
	int calculate()
	{
		return a+b;
	}
	~Add(){}
};

class Subtract : public Numbers
{
public:
	Subtract(int a, int b) : Numbers(a,b){}
	int calculate()
	{
		return a-b;
	}
	~Subtract(){}
};

class Product : public Numbers
{
public:
	Product(int a, int b) : Numbers(a,b){}
	int calculate()
	{
		return a*b;
	}
	~Product(){}
};

int main()
{
	Numbers *bptr;
	int a, b;
	cout << "Enter 2 numbers: ";
	cin >> a >> b;
	cout << "Enter following keys for calculation: " << endl;
	cout << "1 for addition" << endl << "2 for subtraction" << endl << "3 for product" << endl;
	int n;
	cin >> n;
	switch(n)
	{
		case 1:
			bptr = new Add(a,b);
			cout << bptr->calculate() << endl;
			break;
		case 2:
			bptr = new Subtract(a,b);
			cout << bptr->calculate() << endl;
			break;
		case 3:
			bptr = new Product(a,b);
			cout << bptr->calculate() << endl;
			break;
		default:
			cout << "Sorry wrong input" << endl;
	}

	delete bptr;

	return 0;
}