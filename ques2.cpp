// A bank maintains two accounts for customers i.e. Savings and Current.
// Savings account provides interest facility and current account provides check book facility.
// Create a class account that stores customer name, account number and type of account.
// It includes member functions that accept deposit and update balance.
// Display balance.
// Compute interest (Only in savings account).
// Permit withdrawl and update balance.

#include<iostream>
#include<string>
using namespace std;

class Account
{
public:
	string name;
	int type;
	long accountNo;
	float balance;
public:
	Account(string n, int t, long ac, float b)
	{
		name = n;
		type = t;
		accountNo = ac;
		balance = b;
	}
	void depositBalance(float d)
	{
		balance += d;
		cout << "Balance updated after deposit" << endl;
	}
	void displayBalance()
	{
		cout << "Name: " << name << endl;
		cout << "Account type: " << type << endl;
		cout << "Account No: " << accountNo << endl;
		cout << "Your current balance is: " << balance << endl;
	}
	void withdrawlBalance(float w)
	{
		balance -= w;
		cout << "Balance updated after withdrawl" << endl;
	}
	~Account(){};
};

class Savings
{
	float roi; //rate of interest
public:
	Account ac;
	Savings(float r,string n, long ac, float b, int t=1) : ac(n,t,ac,b)
	{
		roi = r;
	}
	void computeInterest()
	{
		cout << "Your interest calculated for one year is: " << ac.balance*roi/100 << endl;
	}
	~Savings(){};
};

class Current
{
public:
	Account ac;
	Current(string n, long ac, float b, int t=2) : ac(n,t,ac,b){};
	~Current(){};
};

int main()
{
	Current c("Ramesh",12345, 7659.54);
	c.ac.displayBalance();
	c.ac.withdrawlBalance(645);
	c.ac.displayBalance();
	c.ac.depositBalance(2700);
	c.ac.displayBalance();

	return 0;
}