#include<iostream>
#include<cstring>

using namespace std;

class Account
{
    long account_no;
    char name[50];
    float balance;
public:
    void assign(char* nm, float bln, long ac)
    {
        account_no = ac;
        strcpy(name,nm);
        balance = bln;
    }
    void disp()
    {
        cout<<"Name: " << name << endl;
        cout<<"Account No: " << account_no << endl;
        cout << "Balance: " << balance << endl;
    }
    void deposit(float cred)
    {
        balance+=cred;
        cout<< "Balance Updated"<< endl;
    }
};

int main()
{
    Account cust1;
    char name[50];
    float balance;
    float credit;
    long account;
    cout << "Enter name: " ;
    cin >> name;
    cout << "Enter balance: ";
    cin >> balance;
    cout << "Enter account number: ";
    cin >> account;
    cust1.assign(name,balance,account);
    cust1.disp();
    cout << "Enter amount to deposit: ";
    cin >> credit;
    cust1.deposit(credit);
    cust1.disp();

    return 0;
}