#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;
int main()
{
    stack<int> s;

    //write your code here
    int n, num;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> num;
        s.push(num);
    }
    for (int i=0;i<n;i++)
    {
        cout << s.top() << " ";
        s.pop();
    }
    return 0;
}
