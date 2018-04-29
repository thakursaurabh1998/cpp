#include <iostream>
#include <map>
#include <string>
using namespace std;

typedef pair<int,string> pairing;
typedef multimap<int,string> mapping;

int main()
{
    mapping mm1;
    int n;
    cin >> n;
    string p;
    for(int i=0;i<n;i++)
    {
        cin >> p;
        mm1.insert(pairing(i,p));
    }

    mm1.insert(pairing(1,"saurabh"));
    mapping::iterator j;
    for(j=mm1.begin();j!=mm1.end();j++)
        cout << (*j).first << (*j).second << endl;

    return 0;
}