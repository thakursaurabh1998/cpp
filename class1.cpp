#include<iostream>
using namespace std;

class item
{
    int a;
    float b;
    void hello();
public:
    int i;
    void getdata(int x, float y)
    {
        a = x;
        b = y;
    }
    void display()
    {
        cout << "a = " << a << endl;
        cout << "b = " << b << endl;
        hello();
    }
};

void item::hello()
{
    cout << "Hello World!" << endl;
}

int main()
{
    item obj;
    obj.getdata(100,55.55);
    obj.display();

    return 0;
}
