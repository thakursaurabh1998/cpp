#include<iostream>

using namespace std;

class si
{
    float principle;
    float rate,time;
public:
    si(float p, float t, float r=12.3f)
    {
        principle = p;
        time = t;
        rate = r;
    }
    si(si &x)
    {
        principle = x.principle;
        time = x.time;
        rate = x.rate;
    }
    float getSI()
    {
        float total, interest;
        interest = principle*rate*time/100;
        total = principle+interest;
        return total;
    }
};

int main()
{
    si a1(10000,2);
    si a2(20000,1,10);
    si a3(a2);
    si a4=a1;
    cout << a1.getSI() << endl;
    cout << a2.getSI() << endl;
    cout << a3.getSI() << endl;
    cout << a4.getSI() << endl;

    return 0;
}