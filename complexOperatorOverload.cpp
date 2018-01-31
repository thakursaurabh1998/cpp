#include <iostream>

using namespace std;

class complex
{
    float a,b;
public:
    complex(){a=0;b=0;}
    complex(float x, float y)
    {
        a = x;
        b = y;
    }

    void display()
    {
        cout << a << " + i" << b << endl;
    }
     
    friend complex operator +(complex &o1, complex &o2);

    friend complex operator -(complex &o1, complex &o2);

    friend complex operator *(complex &o1, complex &o2);
    
    friend complex operator /(complex &o1, complex &o2);
};

complex operator +(complex &o1, complex &o2)
{
    complex result;
    result.a = o1.a + o2.a;
    result.b = o1.b + o2.b;

    return result;
}
complex operator -(complex &o1, complex &o2)
{
    complex result;
    result.a = o1.a - o2.a;
    result.b = o1.b - o2.b;

    return result;
}
complex operator *(complex &o1, complex &o2)
{
    complex result;
    float p,q,r,s;
    p = o1.a * o2.a;
    q = -(o1.b * o2.b);
    r = o1.a * o2.b;
    s = o1.b * o2.a;

    result.a = p + q;
    result.b = r + s;

    return result;
}
complex operator /(complex &o1, complex &o2)
{
    complex result, p, q, r;

    p = o2;
    p.b = -(p.b);
    q = o1*p;
    r = o2*p;
    result.a = q.a/r.a;
    result.b = q.b/r.a;

    return result;
}

int main()
{
    float a,b,c,d;
    complex result;
    cin >> a >> b >> c >> d;
    complex x(a,b), y(c,d);

    result = x+y;
    result.display();
    result = x-y;
    result.display();
    result = x*y;
    result.display();
    result = x/y;
    result.display();

    return 0;
}