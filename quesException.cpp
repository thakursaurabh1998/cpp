#include <iostream>
#include <string>
#include <cstring>
#include <cstdlib>
using namespace std;

int main()
{
	char x[50];
	cin >> x;
	try
	{
		char *ptr = strstr(x,".");
		if(ptr)
			if(strstr(ptr+1,"."))
				throw "Not a double";
		for(int i=0;i<strlen(x);i++)
			if(x[i]>='a' && x[i]<='z')
				throw "Not a double";

		double num=0.0, p = 10.0;
		int j;
		for(int i=0;i<strlen(x);i++)
		{
			if(x[i]=='.')
			{
				j=i+1;
				break;
			}
			num = num*10.0 + (double)(x[i] - '0');
		}
		for(j;j<strlen(x);j++)
		{
			num += (double)(x[j] - '0')/p;
			p *= 10.0;
		}
		cout << num << endl;

	}
	catch(char const* a)
	{
		cout << "Error: " << a << endl;
	}
	
	return 0;
}