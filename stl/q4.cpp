#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
bool isEven(int i)
{
    return ((i % 2) == 0);
}
int main()
{
    vector<int> v;
    int mycount; //count of even numbers
    int n, num;
    //write code here
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> num;
        v.push_back(num);
    }
    mycount = count_if(v.begin(),v.end(),isEven);

    cout << mycount;
    return 0;
}