#include <iostream>
#include <string>
using namespace std;

template<class T>
class vector
{
	T *v;
	int size;
public:
	vector(int m)
	{
		v = new T[m];
		size = m;
		for(int i=0;i<m;i++)
			v[i] = 0;
	}
	void read()
	{
		for(int i=0;i<size;i++)
			cin >> this->v[i];
	}
	T operator *(vector &y)
	{
		T sum=0;
		for(int i=0;i<size;i++)
			sum+=this->v[i]*y.v[i];
		return sum;
	}
	~vector(){}
};

int main()
{
	int size;
	cout << "Enter size of vector: ";
	cin >> size;
	vector <float> v1(size);
	vector <float> v2(size);
	cout << "Enter values for vector 1: " << endl;
	v1.read();
	cout << "Enter values for vector 2: " << endl;
	v2.read();
	float R = v1*v2;
	cout << "Sum of 2 vectors: " << R << endl;

	return 0;
}