#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int> a(8, 10);                   //fills a list 4 places with 10
    list<int> mylist(a.begin(), a.end()); //copies a to mylist
    list<int>::iterator i;
    for (i = mylist.begin(); i != mylist.end(); ++i) //begin and end function works similar to the vector
        cout << *i << "\t";
    // front and back function also work similar to the vector functions
    mylist.pop_front();    //remove from the front of the list
    mylist.pop_back();     //remove from the back of the list
    mylist.push_front(20); //inserts value to the front of the list
    mylist.push_back(30);  //insetts value to the back of the list

    cout << endl;
    for (i = mylist.begin(); i != mylist.end(); ++i)
        cout << *i << "\t";

    cout << endl;

    for (int p = 0; p < 8; p++)
        cout << mylist[p] << "\t";
    cout << endl;

    mylist.sort();
    mylist.reverse();
    for (i = mylist.begin(); i != mylist.end(); ++i)
        cout << *i << "\t";
    return 0;
}