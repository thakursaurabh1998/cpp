#include <iostream>
using namespace std;

template <class T>
T find_min(T *a)
{
	T min = a[0];
	for(int i=1;i<5;i++)
		if(a[i]<min)
			min=a[i];
	return min;
}

int main()
{
	int I_min;
	float F_min;
	char C_min;
	int I[5]={7,80,40,4,9};
	float F[5]={7.6,2.4,6.5,5.2,1.2};
	char C[5]={'a','b','g','c','s'};
	I_min = find_min(I);
	F_min = find_min(F);
	C_min = find_min(C);

	cout << "Integer min: " << I_min << endl;
	cout << "Float min: " << F_min << endl;
	cout << "Char min: " << C_min << endl;

	return 0;
}