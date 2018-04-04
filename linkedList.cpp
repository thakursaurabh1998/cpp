#include <iostream>
#include <string>
#include <cstdlib>
#include <list>
using namespace std;

void display(list<int> &l)
{
	list<int>::iterator p;
	for(p=l.begin();p!=l.end();p++)
		cout << *p << endl;
}

int main()
{
	list<int> list1;
	list<int> list2(5);
	for(int i=0;i<3;i++)
		list1.push_back(rand()/100);
	list<int>::iterator p;
	for(p=list2.begin();p!=list2.end();p++)
		*p = rand()/100;
	cout << "List1: " << endl;
	display(list1);
	cout << "List2: " << endl;
	display(list2);
	list1.push_front(100);
	list1.push_back(200);
	list2.pop_front();
	cout << "List1: " << endl;
	display(list1);
	cout << "List1: " << endl;
	display(list2);

	return 0;
}