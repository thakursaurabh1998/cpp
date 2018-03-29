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
//     static void myPtr();

// };

// int main()
// {
//     // void(*ptr)() = &A::myPtr;
//     // ptr();
//     int *ptr = new int[10]();
//     for(int i=0;i<10;i++)
//     	cout << ptr[i] << endl;
//     return 0;
// }

// class A
// {
//     int a;
//     static int b;
//     int* ptr;
// };
// int A::b=0;
// int main()
// {
//     A obj;
//     cout << sizeof(obj) << endl;
//     cout << sizeof(A*) << endl;

//     return 0;
// }

class test
{int a;
  public:
  test()
  {
   a=20;
  }
  void display(){
   cout<<"a="<<a;
  }
  virtual ~test()
  {
   cout<<"object t destroyed";
  }
};
  
int main()
{
  test t;
  t.display();
  return 0;
}