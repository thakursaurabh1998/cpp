#include <iostream>
#include <stack>
using namespace std;

void show(stack<int> g1)
{
	stack<int> g = g1;
	while(!g.empty())
	{
		cout << g.top() << endl;
		g.pop();
	}
}

int main()
{
	stack<int> g2;
	for(int i=1;i<5;i++)
		g2.push(i);
	cout << "Output: " << endl;
	show(g2);

	return 0;
}