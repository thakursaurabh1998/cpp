#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream o;
    o.open("file.txt");
    ofstream o2;
    o2.open("file.txt", ios::app);
    char ch;
    while (o.eof()==0)
    {
        o.get(ch);
        o2<<ch;
    }    
    return 0;
}
