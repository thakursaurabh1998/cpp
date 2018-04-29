#include <iostream>
#include <deque>
using namespace std;

//deque is similar to vector but it has
//added functionality of adding and removing elements from from
//rest all is same as vector almost

int main()
{
    deque<int> deq;
    for (int a = 1; a <= 10; a++)
        deq.push_back(a); //filling the deque by pushback

    cout << "Accessing first element of deque by reference: " << deq.front() << endl; //returns 1
    cout << "Accessing last element of deque by reference: " << deq.back() << endl;   //returns 10
    deque<int>::iterator i;                                                           //creating an iterator
    i = deq.begin();                                                                  //pointing the iterator to the first element of the deque
    for (i; i != deq.end(); ++i)
        cout << *i << "\t";
    cout << endl;
    deque<int>::reverse_iterator j; //returns reverse iterator
    j = deq.rbegin();               //iterator pointing at the last element of the deque
    for (j; j != deq.rend(); ++j)
        cout << *j << "\t";
    int ik;
    cout << endl;
    cout << "Size of deque: " << deq.size() << endl;
    cout << "Max-size of deque: " << deq.max_size() << endl;

    deq.pop_front();
    deq.push_front(100);

    for (int i = 0; i < deq.size(); i++)
        cout << deq[i] << "\t"; //another way of accessing deque
    cout << endl;

    deq.erase(deq.begin() + 2, deq.end() - 2); //removes elements from index number 2 - 7 inclusive
    cout << "Size left of the deque after erasing: " << deq.size() << endl;
    deq.clear(); //removes all the elements of the deque
    cout << "Size of the deque after clearing all elements: " << deq.size() << endl;
    cout << "Is deque empty: " << deq.empty() << endl; //returns a boolean 1 if empty 0 if not

    return 0;
}