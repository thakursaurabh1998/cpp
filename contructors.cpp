#include<iostream>

using namespace std;

class integer
{
    int m,n;
public:
    integer()
    {
        m=0;n=0;
    }
    integer(int a)
    {
        m = 0;
        n = a;
    }
    void display()
    {
        cout << m << n << endl;
    }
};

int main()
{
    integer i1,i2(400);
    i1.display();
    i2.display();

    return 0;
}