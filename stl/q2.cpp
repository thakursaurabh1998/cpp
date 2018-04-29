#include <iostream>
#include <algorithm>
#include <deque>
using namespace std;
int main()
{
    deque<int> deq;
    //WRITE YOUR CODE HERE
    int n, num;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> num;
        deq.push_front(num);
    }
    deq.pop_front();
    for (int i = 0; i < deq.size(); i++)
        cout << deq[i] << " ";
    return 0;
}
