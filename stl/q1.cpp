#include <iostream>
#include <list>
#include <algorithm>
using namespace std;

typedef list<int> ls;
int main()
{
    ls arr;
    ls::iterator it;
    int n, num;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> num;
        arr.push_back(num);
    }
    cin >> num;
    cin >> n;
    it = find(arr.begin(), arr.end(), num);
    arr.insert(it, n);

    for (it = arr.begin(); it != arr.end(); it++)
        cout << *it << "\t";

    return 0;
}