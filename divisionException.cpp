#include <iostream>
using namespace std;

void divide(int x,int y,int z)
{
	if(x-y==0)
		throw (x-y);
	cout << "Result: " << z/(x-y) << endl;
}

int main()
{
	try
	{
		divide(10,10,30);
		divide(10,20,30);
	}
	catch(int i)
	{
		cout << "Caught an exception." << endl;
	}
}