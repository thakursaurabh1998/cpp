#include <iostream>
using namespace std;

template <class T1, class T2>
void hello(T1 a, T2 b)
{
	cout << "A: " << a << endl;
	cout << "B: " << b << endl;
}

int main()
{
	hello('a',99);
	hello(87.34, "hello");

	return 0;
}