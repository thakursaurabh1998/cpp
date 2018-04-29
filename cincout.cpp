#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    char ch;
    int count=0;
    // do {
    //     ch = cin.get();
    //     cout.put(ch);
    //     count++;
    //     cout << "No. of char: " << count << endl;
    // } while(ch!='0');
    // cout << "Out of loop" << endl;

    // char *str1 = "C++";
    // char *str2 = "Programming";
    // int m = strlen(str1);
    // int n = strlen(str2);
    // for(int i=1;i<=n;i++)
    // {
    //     cout.write(str2,i);
    //     cout << endl;
    // }
    // for(int i=n;i>0;i--)
    // {
    //     cout.write(str2,i);
    //     cout << endl;
    // }
    // cout.write(str1,m).write(str2,n);
    // cout << endl;
    // cout.write(str1,10);

    int x = 155;
    int y = 50;

    cout.width(5);
    cout << x ;
    cout.width(10);
    cout << y << endl;

    return 0;
}