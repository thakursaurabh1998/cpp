#include <iostream>
using namespace std;

template <class T, int size>
class array
{
	T a[size];
public:
	array();
	void read();
	void show();
	T operator *(array &y);
};

template <class T, int size>
array<T,size>::array()
{
	for(int i=0;i<size;i++)
		a[i]=0;
}

template <class T, int size>
void array<T,size>::read()
{
	for(int i=0;i<size;i++)
		cin >> a[i];
}

template <class T, int size>
void array<T,size>::show()
{
	for(int i=0;i<size;i++)
		cout << a[i] << endl;
}

template <class T, int size>
T array<T,size>::operator *(array &y)
{
	T sum=0;
	for(int i=0;i<size;i++)
		sum+=this->a[i] * y.a[i];

	return sum;
}

int main()
{
	array <int,5>*o1= new array<int,5>();
	array <float,5> o2;
	cout << "Enter integer array: " << endl;
	o1->read();
	cout << "Enter float array: " << endl;
	o2.read();
	cout << "Ingeger array" << endl;
	o1->show();
	cout << "Float array" << endl;
	o2.show();
	cout << "Result: " << o2*o2 << endl;

	return 0;
}