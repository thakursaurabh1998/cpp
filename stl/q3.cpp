#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    int size, value;
    cin >> size;
    vector<int> v;
    vector<int>::iterator i;
    int num;
    //write your code here
    for (int i = 0; i < size; i++)
    {
        cin >> num;
        v.push_back(num);
    }
    vector<int>::reverse_iterator j;
    for (j = v.rbegin(); j != v.rend(); j++)
        cout << *j << " ";
    sort(v.begin(), v.end());
    vector<int>::iterator max, min;
    max = v.end() - 1;
    min = v.begin();
    cout << endl
         << *max << endl
         << *min; //Maximum and Minimum element
    return 0;
}
