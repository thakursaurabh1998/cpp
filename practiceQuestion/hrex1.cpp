#include <iostream>
#include <string>
using namespace std;

class find_
{
protected:
	int lb,ub;
public:
	void get(){cin >> lb >> ub;}

};

class der_prime : virtual public find_
{
	int *arr,*digits;
	int p;
public:
	void detect_prime()
	{
		int n = ub - lb;
		arr = new int[n];
		digits = new int[10]();
		this->p=0;
		for(int i=lb;i<=ub;i++)
		{
			int flag=0;
			for(int j=2;j<i;j++)
				if(i%j==0)
				{
					flag=1;
					break;
				}
			if(!flag)
				arr[this->p++] = i;
		}
		int a;
		for(int i=0;i<this->p;i++)
		{
			int num=arr[i];
			do
			{
				a = num%10;
				digits[a-1]++;
				num /= 10;
			}while(num);
		}
	}
	void print_()
	{
		int index=0;
		int max=0;
		for(int i=0;i<10;i++)
			if(digits[i]>=max)
			{	
				max = digits[i];
				index = i;
			}
		cout << index+1 << endl << digits[index] << endl;
	}
};

int main()
{
	static der_prime d1;
	d1.get(); //function in base class to enter lower bound(lb) and upper bound values(ub)  
	d1.detect_prime(); // this function is responible for logic building in derived class(der_prime)
	d1.print_();//print the desired output in derived class
	return 0;
}
