#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector <int> vecArr, vecArr2;
    for(int a=1;a<=10;a++)
        vecArr.push_back(a); //filling the vector by pushback
    
    cout << "Accessing first element of vector by reference: " << vecArr.front() << endl; //returns 1
    cout << "Accessing last element of vector by reference: " << vecArr.back() << endl;   //returns 10
    vector<int>::iterator i; //creating an iterator
    i = vecArr.begin();      //pointing the iterator to the first element of the vector
    for(i;i!=vecArr.end();++i)
        cout << *i << "\t";
    cout << endl;
    vector<int>::reverse_iterator j; //returns reverse iterator
    j = vecArr.rbegin();             //iterator pointing at the last element of the vector
    for(j;j!=vecArr.rend();++j)
        cout << *j << "\t";
    int ik;
    cout << endl;
    cout << "Size of vector: " << vecArr.size() << endl;
    cout << "Max-size of vector: " << vecArr.max_size() << endl;
    cout << "Capacity of vector: " << vecArr.capacity() << endl;

    vecArr.erase(vecArr.begin()+2,vecArr.end()-2); //removes elements from index number 2 - 7 inclusive
    cout << "Size left of the vector after erasing: " << vecArr.size() << endl; 
    vecArr.clear(); //removes all the elements of the vector
    cout << "Size of the vector after clearing all elements: " << vecArr.size() << endl;
    cout << "Is vector empty: " << vecArr.empty() << endl; //returns a boolean 1 if empty 0 if not

    return 0;
}