#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;
    vector<int>::iterator i;

    //Write your code here
    int n,num;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        cin >> num;
        v.push_back(num);
    }
    int old,newv;
    cin >> old >> newv;
    for(i = v.begin();i!=v.end();i++)
    {
        if(*i==old)
        {
            v.erase(i);
            v.insert(i,newv);
        }
    }
    for(i=v.begin();i!=v.end();i++)
        cout << *i << " ";
    return 0;
}
