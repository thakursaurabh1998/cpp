#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int size;
class bill
{
	protected:
		int items[10];
		float price[10];
	public:
		bill(int items[],float price[],int s);
		virtual void total()=0;
		virtual void display()=0;
};
// /STUDENT CODE HERE

bill::bill(int items[],float price[],int s)
{
	size = s;
	for(int i=0;i<size;i++)
	{
		this->items[i] = items[i];
		this->price[i] = price[i];
	}
}

class Cash : public bill
{
	float t;
public:
	Cash(int *i,float *p, int s) : bill(i,p,s){}
	void display()
	{
		cout << "Paid by cash" << endl;
		cout << "Total=" << t << endl;
	}
	void total()
	{
		t=0.0;
		cout << size << "SIZE" << endl;
		for(int i=0;i<size;i++)
		{
			t += price[i];
		}
	}
};

class Cheque : public bill
{
	float t;
	int c_no;
	char bn[30];
public:
	Cheque(int* i,float *p, int c, char *n, int s) : bill(i,p,s)
	{
		strcpy(bn,n);
		c_no = c;
	}
	void display()
	{
		cout << "Paid by cheque" << endl;
		cout << "Cheque number:" << c_no << endl;
		cout << "Name of Bank:" << bn << endl;
		cout << "Total=" << t << endl;
	}
	void total()
	{
		t=0.0;
		for(int i=0;i<size;i++)
			t += price[i];
	}
};

int main()
{	 
	int s;
	cin>>s;
	int item[s];
	for (int i=0;i<s;i++)
		cin>>item[i];
	float price[s];
	for(int i=0;i<s;i++)
		cin>>price[i];	
	int option;
	cin>>option;
	if(option==1)
	{ 	
		int c_no;
		char n[30];
		cin>>c_no;
		cin.ignore();
		cin.getline(n,30);
		Cheque Ch(item,price,c_no,n,s);
		Ch.total();
		Ch.display();
	}
	else if(option==2)
	{
		Cash C(item,price,s);
		C.total();
		C.display();
	}
    return 0;
}
