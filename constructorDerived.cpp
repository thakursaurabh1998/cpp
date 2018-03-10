#include<iostream>
using namespace std;

class Alpha
{
	int a;
public:
	Alpha(int x)
	{
		a = x;
		cout << "Alpha initialized" << endl;
	}
	void show_a()
	{
		cout << "a: " << a << endl;
	}
};

class Beta
{
	float b;
public:
	Beta(float y)
	{
		b=y;
		cout << "Beta initialized" << endl;
	}
	void show_b()
	{
		cout << "b: " << b << endl;
	}
};

class Gamma : public Beta, public Alpha
{
	int m,n;
public:
	Gamma(int x, float y, int z) : Alpha(x), Beta(y)
	{
		m=z; n=x;
		cout << "Gamma initialized" << endl;
	}
	void show_mn()
	{
		cout << "m: " << m << endl;
		cout << "n: " << n << endl;
	}
};

int main()
{
	Gamma g(5,7.5,10);
	g.show_a();
	g.show_b();
	g.show_mn();

	return 0;
}