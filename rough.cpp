#include<iostream>

using namespace std;

// class A
// {
//     // static int a;
//     // int b;
// };

// // int A::a=0;

// int main()
// {
//     A obj;
//     cout << sizeof(obj);

//     return 0;
// }


// class A
// {
// public:
//     static void myPtr(){}

// };

// int main()
// {
//     void(*ptr)() = &A::myPtr;
//     return 0;
// }

class A
{
    int a;
    static int b;
    int* ptr;
};
int A::b=0;
int main()
{
    A obj;
    cout << sizeof(obj) << endl;
    cout << sizeof(A*) << endl;

    return 0;
}