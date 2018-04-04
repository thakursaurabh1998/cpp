#include <iostream>
#include <string>
#include <map>
using namespace std;

typedef map<string, int> phonemap;
int main()
{
	string name;
	int number;
	phonemap phone;
	cout << "Enter 3 names and number" << endl;

	for(int i=0;i<3;i++)
	{
		cin >> name >> number;
		phone[name] = number;
	}

	phone["abc"] = 1111;
	phone.insert(pair<string,int>("Bose", 5555));

	int n = phone.size();
	cout << n << endl;
	cout << "List of numbers: " << endl;
	phonemap::iterator p;
	for(p=phone.begin();p!=phone.end();p++)
		cout << (*p).first << " : " << (*p).second << endl;
	cout << "Enter Name: ";
	cin >> name;
	cout << phone[name];

	return 0;
}