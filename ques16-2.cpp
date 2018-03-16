/*Create a class marks and student. Initialize marks of three subjects in marks class using constructor and initialize roll number, student name and course name in student class. The member functions of marks class is total which returns sum of all subjects and also define member functions of student calss that is get_rollno, get_name and get_course. They return rollno,, name, and course of the student. Derive a result class ftom marks and student using cnstructor of result initialize marks and student data. Also define display function that shows rollno, name, coutse and total marks of the student*/
#include <iostream>
#include <string>
using namespace std;

class Marks
{
	int* marks;
	int totalMarks;
public:
	Marks()
	{
		marks = new int[3];
		for (int i = 0; i < 3; ++i)
		{
			cout << "Enter Marks of subject " << i+1 << endl;
			cin >> marks[i];
		}
	}
	int total()
	{
		totalMarks = 0;
		for (int i = 0; i < 3; ++i)
		{
			totalMarks += marks[0];
		}
		return totalMarks;
	}
	~Marks()
	{
		delete[] marks;
	}
	
};

class Student
{
	string name;
	int roll;
	string course;
public:
	Student(string n, string s, int r) : name(n), course(s), roll(r){}
	void display()
	{
		cout << "Name: " << name << endl;
		cout << "Section: " << course << endl;
		cout << "Roll No: " << roll << endl;
	}
	string get_name(){return name;}
	string get_course(){return course;}
	int get_rollno(){return roll;}
	~Student(){};
};

class Result : public Marks, public Student
{
public:
	Result(string n, string s, int r):Student(n,s,r),Marks(){}
	~Result(){}
};

int main()
{
	Result r("Saurabh Thakur", "OOP",16101783);
	r.display();
	cout << r.total();
	return 0;
}