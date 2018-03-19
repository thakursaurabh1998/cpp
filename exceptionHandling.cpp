#include <iostream>
using namespace std;

int main()
{
	int x,y,z;
	cin >> x >> y >> z;

	try
	{
		if(x-y==0)
			throw (x-y);
		cout << "Result: " << z/x;
	}
	catch(...) //catching any kind of exception
	{
		cout << "Caught an exception." << endl;
	}

	return 0;
}