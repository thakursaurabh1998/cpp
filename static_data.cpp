#include<iostream>

using namespace std;

class Test
{
    static int count;
    int b1;
public:
    void setData(int a)
    {
        b1 = a;
        count++;
    }
    void showData()
    {
        cout << count << endl << b1 << endl;
    }
};
int Test::count;
int main()
{
    Test obj,obj2;
    obj.showData();
    obj.setData(200);
    obj.showData();
    obj2.setData(300);
    obj2.showData();

    return 0;
}