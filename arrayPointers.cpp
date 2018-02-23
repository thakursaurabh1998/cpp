// Write a program to display an array of n integers using pointers

#include<iostream>

using namespace std;

int main()
{
	int* a = new int[20];
	int *ptr = a;
	for(int i=0;i<20;i++)
		*(ptr+i)=i;

	for(int i=0;i<20;i++)
		cout << *(ptr+i) << " " << ptr+i << endl;

	return 0;
}