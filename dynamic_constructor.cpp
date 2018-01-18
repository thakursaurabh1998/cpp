#include<iostream>
#include<cstring>

using namespace std;

class stri
{
    char * name;
    int length;
public:
    stri()
    {
        length = 0;
        name = new char[length+1];
    }
    stri(char *s)
    {
        length = strlen(s);
        name = new char[length+1];
        strcpy(name,s);
    }
    void display()
    {
        cout << name << endl;
    }
    void join(stri &a, stri &b)
    {
        length = a.length + b.length;
        delete name;
        name = new char[length+1];
        strcpy(name, a.name);
        strcat(name, b.name);
    }
};

int main()
{
    char *first = "Joseph";
    stri name1(first);
    stri name2("Louis");
    stri name3("Lagrange");
    stri s1, s2;
    s1.join(name1, name2);
    s2.join(s1, name3);
    name1.display();
    name2.display();
    name3.display();
    s1.display();
    s2.display();

    return 0;
}