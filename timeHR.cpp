#include <cstring>
#include <cstdlib>
#include <iostream>

using namespace std;
class sample
    {
    private: 
    int hours, mins, secs;
    public :
    sample()
    { hours=0; mins=0, secs=0;}
    sample(int hh, int mm, int ss);
    void display();
    sample add(sample);
};


sample::sample(int hh,int mm,int ss)
{
    hours = hh;
    mins = mm;
    secs = ss;
}

sample sample::add(sample &obj)
{
    sample t3;
    t3.secs = secs + obj.secs;
    t3.mins = mins + obj.mins;
    t3.hrs = hrs + obj.hrs;
    if(t3.secs>=60)
    {
        t3.secs -= 60;
        t3.mins++;
    }
    if(t3.mins>=60)
    {
        t3.mins -= 60;
        t3.hrs++;
    }
    t3.display();
    return t3;
}

void sample::display()
{
    cout<<hours<<":"<<mins<<":"<<secs;
}


int main() {
    int a,b,c;
    cin>>a>>b>>c;
    class sample t1(a,b,c);
    cin>>a>>b>>c;
    class sample t2(a,b,c);
     class sample t3=t1.add(t2);
  return 0;
}