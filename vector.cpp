#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> v;
	vector<int>::iterator i;
	vector<int>::reverse_iterator ir;
	for(int i=1;i<=5;i++)
		v.push_back(i);
	cout << "Output: " << endl;
	for(i=v.begin();i!=v.end();i++)
		cout << *i << endl;

	cout << "Reverse Output: " << endl;
	for(ir=v.rbegin();ir!=v.rend();ir++)
		cout << *ir << endl;	

	return 0;
}