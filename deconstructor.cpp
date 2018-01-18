#include<iostream>

using namespace std;

int count;

class Test
{
public:
    Test()
    {
        cout << "Object no: " << ++count << " is created" << endl;
    }
    ~Test()
    {
        cout << "Object no: " << count-- << " is destroyed." << endl;
    }
};

int main()
{
    Test t1;
    {
        cout << "Inside scope" << endl;
        Test t2;
        Test t3;
    }
    cout << "Outside scope" << endl;
    return 0;
}