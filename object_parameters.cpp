#include<iostream>

using namespace std;

class time
{
public:
    int a, b;
public:
    int c;
    void getData(int x, int y)
    {
        a = x;
        b = y;
    }
    void showData()
    {
        cout << "A : " << a << "B : " << b << " C: " << c << endl;
    }
    friend void sub();
    // {
    //     time a;
    //     a.a=10;
    //     a.b=20;
    //     cout << a.a << a.b << endl;
    // }
};

void sub()
{
    time a;
    a.a=10;
    a.b=20;
    cout << a.a << a.b << endl;
}


time sum(time p, time q)
{
    time c;
    c.c = p.a+q.a;
    return c;
}

int main(){
    time i,j,k;
    i.getData(10,20);
    j.getData(30,40);
    k = sum(i,j);
    cout << k.c << endl;
    sub();
    return 0;
}