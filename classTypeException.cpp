#include <iostream>
#include <cstring>
using namespace std;

class Error
{
	int err_code;
	char* err_des;
public:
	Error(int c, char const *s)
	{
		err_code = c;
		err_des = new char[strlen(s)];
		strcpy(err_des,s);
	}
	void display()
	{
		cout << "Error Code: " << err_code << endl;
		cout << "Error Description: " << err_des << endl;
	}
};

int main()
{
	char a;
	try
	{
		cout << "Enter any key to catch an exception" << endl;
		cin >> a;
		throw Error(99,"testing an exception");
	}
	catch(Error e)
	{
		cout << "Caught an error" << endl;
		e.display();
	}

	return 0;
}