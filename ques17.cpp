#include<iostream>
#include<vector>
#include<string>
#include<list>
using namespace std;

// class data
// {
// public:
//     string name, address, carN, carM, date;
//     void get()
//     {
//         cin.ignore();
//         getline(cin,name);
//         getline(cin,address);
//         getline(cin,carN);
//         getline(cin,carM);
//         getline(cin,date);
//     }
//     void put()
//     {
//         cout << "Name: " << name << endl;
//         cout << "Address: " << address << endl;
//         cout << "Car Name: " << carN << endl;
//         cout << "Car Model: " << carM << endl;
//         cout << "Date: " << date << endl;
//     }
// };

// void sameCar(vector<data*> objs,int n)
// {
//     cout << "Same car in same year employees: " << endl;
//     for(int i=0;i<n;i++)
//         for(int j=0;j<n;j++)
//             if(objs[j]->carN==objs[i]->carN && objs[i]->date==objs[j]->date && i!=j)
//                 cout << "Name: " << objs[j]->name << endl;
// }

// int main()
// {
//     vector<data*> arr;
//     int n;
//     cin >> n;
//     for(int i=0;i<n;i++)
//         arr.push_back(new data);
//     for(int i=0;i<n;i++)
//         arr.at(i)->get();
//     for(int i=0;i<n;i++)
//         arr.at(i)->put();

//     sameCar(arr,n);

//     return 0;
// }

class Student
{
public:
    int roll;
    string name;
};


int main(){

    vector <Student> l2;

    Student obj1,obj2;
    l2.push_back(obj1);
    l2.push_back(obj2);
    l2[0].roll = 1243;
    l2[1].roll = 243;
    l2[0].name = "sdhjf";
    l2[1].name = "sdjfkh";

    for(int i=0;i<2;i++){
        cout << l2[i].roll << l2[i].name << endl;
    }
    return 0;
}