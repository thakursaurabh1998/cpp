#include <iostream>
#include <fstream>
using namespace std;
int main() 
{
    ifstream o;
    o.open("file.txt", ios::in);
    char ch ;
    int n = 0;
    while (!o.eof() )
    {
        o.get(ch);
        if (ch == '\n')
            n++;
    }
    cout<< "No. of lines: " <<n<<endl;
    return 0;
}
