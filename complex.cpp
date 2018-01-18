// Define a class called complex that represents complex numbers.
// The class should contain data-members that stores real and imaginary parts moreover it should contain member functions
// that can implement the elementary operations(addition, subtraction, multiplication and division) of two complex numbers.
// The class should contain print member function that prints complex numbers and the result of operations on the screen in the form of a+ib.

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

    friend complex addition(complex &o1, complex &o2);

    friend complex subtraction(complex &o1, complex &o2);

    friend complex multiplication(complex &o1, complex &o2);
    
    friend complex division(complex &o1, complex &o2);
};

complex addition(complex &o1, complex &o2)
{
    complex result;
    result.a = o1.a + o2.a;
    result.b = o1.b + o2.b;

    return result;
}
complex subtraction(complex &o1, complex &o2)
{
    complex result;
    result.a = o1.a - o2.a;
    result.b = o1.b - o2.b;

    return result;
}
complex multiplication(complex &o1, complex &o2)
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
complex division(complex &o1, complex &o2)
{
    complex result, p, q, r;

    p = o2;
    p.b = -(p.b);
    q = multiplication(o1,p);
    r = multiplication(o2,p);
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

    result = addition(x,y);
    result.display();
    result = subtraction(x,y);
    result.display();
    result = multiplication(x,y);
    result.display();
    result = division(x,y);
    result.display();

    return 0;
}