#include<iostream>

using namespace std;

class one;
class two;

class one
{
    int val1;
public:
    void setvalue(int a)
    {
        val1 = a;
    }
    void display(){cout<< val1 << endl;}
    friend void swap(one&, two&);
};

class two
{
    int val2;
public:
    void setvalue(int a)
    {
        val2 = a;
    }
    void display(){cout<< val2 << endl;}
    friend void swap(one&, two&);
};

void swap(one& a, two& b)
{
    int temp;
    temp = a.val1;
    a.val1 = b.val2;
    b.val2 = temp;
}

int main()
{
    one a;
    two b;

    a.setvalue(87);
    b.setvalue(23);

    swap(a,b);

    a.display();
    b.display();

    return 0;
}