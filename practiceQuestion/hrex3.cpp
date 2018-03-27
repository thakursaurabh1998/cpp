#include <iostream>
#include <string>
using namespace std;

class country 
{ 
protected: 
    string cname;
    float pprc;
    float Iprc;
    float ratio;
public:
    virtual void disp()=0;
    country(){}
    virtual void getdata()
    {
        // cout<<"Enter Country Name ";
        cin>>cname;
        // cout<<"Enter the %% of Polio ";
        cin>>pprc;
        // cout<<"Enter the %% of Literacy ";
        cin>>Iprc;
    }
    virtual void display()
    {
        cout << "Country Name " << cname << endl;
        cout << "Country Polio% " << pprc << endl;
        cout << "Country Lit. %" << Iprc << endl;
        cout << "The Measure of Interdependency " << float (pprc/Iprc) << endl;
    }
};

class state: public country
{
    string sname;
    float spprc,siprc;
public:
    void disp(){cout<<"Welcome";}
    void getdata()
    {
        cin >> sname >> spprc >> siprc;
    }
    void display()
    {
        cout << "State Name " << sname << endl;
        cout << "%Age of Polio of State " << spprc << endl;
        cout << "%Age of Lite. of State " << siprc << endl;
        cout << "The Measure of Interdependency " << float(spprc/siprc) << endl;
    }

};

int main() {
    state *ptr, ctr;
    state sta;
    ptr = &sta;
    ptr->disp();
    ptr = &ctr;
    ptr->getdata();
    ptr->display();
    ptr = &sta;
    ptr->getdata();
    ptr->display();

    return 0;
}
