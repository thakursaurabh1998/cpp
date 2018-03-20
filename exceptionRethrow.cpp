#include <iostream>
using namespace std;

void divide(double x, double y)
{
	try
	{
		if(y==0.0) throw y;
		else cout << "Division: " << x/y << endl;
	}
	catch(double a)
	{
		cout << "Exception in division, 0 value of denominator." << endl;
		throw; //no need to throw the value. Next catch will automatically take the value
	}
}

int main()
{
	try
	{
		divide(5.0,2.0);
		divide(5.0,0.0);
	}
	catch(double a)
	{
		cout << "Error caught in main. Value of denominator: " << a <<endl;
	}

	return 0;
}