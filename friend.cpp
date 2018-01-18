#include<iostream>

using namespace std;

class sample
{
    float a,b;
public:
    void setvalue() {a=25;b=40;}
    friend void mean(sample);
};

void mean(sample o)
{
    float avg = (o.a + o.b)/2.0;
    cout << avg << endl;
}

int main()
{
    sample obj;
    obj.setvalue();
    mean(obj);

    return 0;
}