#include <iostream>
using namespace std;

template <class T>
void display(T x)
{
	cout << "Template display: " << endl;
	cout << "x = " << x << endl;
}

void display(int x)
{
	cout << "Ordinary Display" << endl;
	cout << "x = " << x << endl;
}

template <class T1, class T2>
void display(T1 a, T2 b)
{
	cout << "Template display with multiple parameters" << endl;
	cout << "a = " << a << " b = " << b << endl;
}

int main()
{
	display(10);
	display(4.5, 'z');
	display(7.5);
	display('c');

	return 0;
}