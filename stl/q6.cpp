#include <iostream>
#include <algorithm>
#include <set>
using namespace std;
int main()
{
    multiset<int> m;
    multiset<int>::iterator i;
    int n,num;
    cin >> n;
    for(int j=0;j<n;j++)
    {
        cin >> num;
        m.insert(num);
    }
    cin >> num;
    m.erase(num);
    for(i = m.begin(); i != m.end(); ++i)
        cout << *i << " ";
    return 0;
}
