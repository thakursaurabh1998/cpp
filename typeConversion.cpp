#include<iostream>

using namespace std;

class Time
{
    int hours,mins;
public:
    Time()
    {hours=0;mins=0;}
    Time(int d)
    {
        hours = d/60;
        mins = d%60;
    }
    Time(int h, int m)
    {
        hours = h;
        mins = m;
    }
    operator int()
    {
        return (hours*60 + mins);
    }
    void show()
    {
        cout << hours << ":" << mins << endl;
    }
};

int main()
{
    Time T1;
    int duration,h,m;
    cout << "Enter Duration: ";
    cin >> duration;
    cout << "Enter hours and minutes: ";
    cin >> h >> m;
    Time T2(h,m);
    T1 = duration;
    T1.show();
    duration = T2;
    cout << duration << endl;

    return 0;
}