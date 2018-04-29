#include <iostream>
#include <algorithm>
#include <map>
using namespace std;
int main()
{
    map<int, string> m;
    map<int, string>::iterator i;
    // write your code here
    int n,r;
    string name;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> name;
        m.insert(pair<int, string>(i, name));
    }
    cin >> r;
    i = m.find(r);
    cout << (*i).second;
    return 0;
}
