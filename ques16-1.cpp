/* Write a program that has a class student to store the details of students in a class.*/

#include <iostream>
#include <string>

using namespace std;

class Student
{
	string name;
	int roll;
	string section;
public:
	Student(string n, string s, int r) : name(n), section(s), roll(r){}
	void display()
	{
		cout << "Name: " << name << endl;
		cout << "Section: " << section << endl;
		cout << "Roll No: " << roll << endl;
	}
	~Student(){};
};

int main()
{
	int num;
	string n,s;
	int r;
	cout << "Enter number of students: ";
	cin >> num;
	Student **arr = new Student*[num];
	for (int i = 0; i < num; ++i)
	{
		cout << "Enter Name, Section and Roll No: " << endl;
		cin >> n >> s >> r;
		arr[i] = new Student(n,s,r);
	}
	for (int i = 0; i < num; ++i)
		arr[i]->display();

	return 0;
}