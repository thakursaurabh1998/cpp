#include<iostream>
#include<cstring>

using namespace std;

class Person
{
	char name[25];
	int age;
public:
	Person(char *s, int a)
	{
		strcpy(name,s);
		age=a;
	}
	Person &greater(Person &x)
	{
		if(x.age>=age)
			return x;
		else
		{
			cout<<this;
			return *this;
		}
	}
	void show()
	{
		cout << name <<" is greater";
	}
};

int main()
{
	Person p1("Ahmed",32);
	Person p2("John",40);
	Person p = p1.greater(p2);
	p.show();

	return 0;
}