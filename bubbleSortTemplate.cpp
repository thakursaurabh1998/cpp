#include <iostream>
using namespace std;

template<class T>
void bubble(T *a, int n)
{
	for(int i=0;i<n-1;i++)
		for(int j=n-1;i<j;j--)
			if(a[j]<a[j-1])
				swap(a[j],a[j-1]);
}

template<class X>
void swap(X &a, X &b)
{
	X temp = a;
	a = b;
	b = temp;
}

int main()
{
	int x[5] = {10,20,80,40,20};
	float y[6] = {1.2,1.4,5.6,1.1,2.3,0.3};

	bubble(x,5);
	bubble(y,6);

	cout << "Sorted X-array of int: ";
	for (int i = 0; i < 5; ++i)
		cout << x[i] << " ";

	cout << endl;

	cout << "Sorted Y-array of float: ";
	for (int i = 0; i < 6; ++i)
		cout << y[i] << " ";
	cout << endl;

	return 0;
}