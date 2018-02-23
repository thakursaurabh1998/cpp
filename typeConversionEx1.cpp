#include<iostream>

using namespace std;

class invent1;

class invent2
{
	int code;
	float value;
public:
	invent2(){code=0;
		value=0;};
	invent2(int c,float val)
	{
		code=c;
		value=val;
	}
	// invent2(invent1 i)
	// {
	// 	code = i.getCode();
	// 	value = i.getItems() * i.getPrice();
	// }
	void show()
	{
		cout << "Code: " << code << endl;
		cout << "Value: " << value << endl;
	}
};

class invent1
{
	int code, items;
	float price;
public:
	invent1(int c, int i, float p)
	{
		code=c;
		items=i;
		price=p;
	}
	operator invent2()
	{

		invent2 ii2(code,items*price);
		return ii2;
	}
	float getPrice()
	{
		return price;
	}
	int getCode()
	{
		return code;
	}
	int getItems()
	{
		return items;
	}
};



int main()
{
	invent1 i1(100,10,50);
	invent2 i2;
	i2=i1;
	i2.show();

	return 0;
}	