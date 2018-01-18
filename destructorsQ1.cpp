#include<iostream>
#include<cstring>
using namespace std;

int count=1;
class data 
{
    char stri[50];
    int id;
public:
    data(char *a)
    {
        strcpy(stri,a);
        id = count++;
    }
    void show()
    {
        cout << "Data " << id << " = " << stri << endl;
    }
    void compare(data&);
    ~data()
    {
        cout << "Release Memory allocated to " << stri << endl;
    }
};

void data::compare(data &obj)
{
    if(strcmp(obj.stri,stri))
        cout << "Both objects have different text." << endl;
    else
        cout << "Both objects have same text." << endl;
}


int main()
{
    data d1("Obfuscation");
    data d2("Obstruction");
    d1.show();
    d2.show();
    d1.compare(d2);
    return 0;
}