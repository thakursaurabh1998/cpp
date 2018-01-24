#include<iostream>
using namespace std;

class space
{
    float x,y,z;
public:
    space(int a,int b,int c){x=a;y=b;z=c;}
    friend void operator -(space&);
    void display()
    {
        cout << "x : " << x << endl << "y : " << y << endl << "z : " << z << endl;
    }
};

void operator -(space &s)
{
    s.x = -s.x;
    s.y = -s.y;
    s.z = -s.z;
}

int main()
{
    float x,y,z;
    cin >> x >> y >> z;
    space sp(x,y,z);
    sp.display();
    -sp;
    sp.display();

    return 0;
}