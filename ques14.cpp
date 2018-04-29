#include <iostream>
#include <vector>
using namespace std;

template <class T>
class object
{
    vector <T> arr;
public:
    void get(int n);
    void sort();
    void put();
};

template <class T>
void object<T>::get(int n)
{
    T temp;
    for(int i=0;i<n;i++)
    {
        cin >> temp;
        arr.push_back(temp);
    }
}

template <class T>
void object<T>::sort()
{
    int n = arr.size();
    T temp;
    for(int i=0;i<n;i++)
        for(int j=0;j<n-i-1;j++)
            if(arr[j] > arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
}

template <class T>
void object<T>::put()
{
    int n = arr.size();
    for(int i=0;i<n;i++)
        cout << arr.at(i) << endl;
}

int main()
{
    object<float> i;
    i.get(6);
    i.sort();
    i.put();

    return 0;
}