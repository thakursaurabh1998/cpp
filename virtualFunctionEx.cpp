#include<iostream>
#include<string>
using namespace std;

class Media
{
protected:
	string title;
	int price;
public:
	Media(string a, int p)
	{
		title = a;
		price = p;
		cout << title << endl;
	}
	void virtual display()
	{
		cout << "In media" << endl;
	}
};

class Book : public Media
{
	int pages;
public:
	Book(string a, int p, int pg) : Media(a,p)
	{
		pages = pg;
	}
	void display()
	{
		cout << "Title of the book: " << title << endl;
		cout << "Price of the book: " << price << endl;
		cout << "Number of pages: " << pages << endl;
	}
};

class Tape : public Media
{
	int duration;
public:
	Tape(string a, int p, int d) : Media(a,p)
	{
		duration = d;
	}
	void display()
	{
		cout << "Title of the tape: " << title << endl;
		cout << "Price of the tape: " << price << endl;
		cout << "Duraiton of the tape: " << duration << endl;
	}
};

int main()
{
	Media m1("hello",34),*mptr;
	mptr = &m1;
	mptr->display();
	Book b1("ksajdflk",23,61);
	mptr = &b1;
	mptr->display();
	Tape t1("dksj",54,7);
	mptr = &t1;
	mptr->display();

	return 0;
}