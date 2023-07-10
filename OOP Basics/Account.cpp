#include <iostream>
using namespace std;
class Account {
		int ID;
		double Balance;
		string DateCreated;

	public:
		// Default Constructor
		Account()
		{
			ID = 0;
			Balance = 0;
			DateCreated=" ";
		}

		// parametarized constructor
		Account(int id,double balance)
		{
			ID=id;
			Balance =balance;
		}
		// setter function for id
		void setID(int id)
		{
			ID = id;
		}
		// setter function for balance
		void setBalance(double balance)
		{
			Balance = balance;
		}
		// setter function for date
		void Setdate(string date)
		{
			DateCreated = date;
		}

		// WithDraw Method
		void withDraw(float num)
		{
			Balance = Balance - num;
			cout<<"\n------------------------------";
			cout << "\n\nYou have with drwan : " << num;
			cout<<"\n\nYour remaining Balance is : "<<Balance;
		}
		// Deposit Method
		void Deposit(float num)
		{
			Balance =Balance+num;
			cout<<"\nYour Current Balance is : "<<Balance;
		}
};
int main()
{
	int id;
	double balance;
	string FullDate;
	int n;
	cout<<"\n---Inital Account Setting ----";
	cout <<"\n\n\tEnter ID : ";
	cin>>id;
	cout<<"\n\n\tEnter iniital Balance : ";
	cin>>balance;
	Account acct1(id,balance);//constructor call
	Account acct2;
	cout<<"\n\n---Now You Can Update Account -----";
	cout<<"\n\n\tSet ID : ";
	cin>>id;
	acct2.setID(id);// setting date
	cout<<"\n\n\tSet Balance : ";
	cin>>balance;
	acct2.setBalance(balance);// setting balance
	cout<<"\n\n\tSet date  : ";
	cin>>FullDate;
	acct2.Setdate(FullDate);// setting date
	cout<<"\n\n-------------------------------";
	cout<<"\n\n---------Operations --------";
	cout<<"\n\nPress 1 for Withdraw balance  ";
	cout<<"\n\nPress 2 for Deposit Balane  ";
	cout<<"\n\n Enter here :  ";
	cin>>n;
	if(n==1) {
		float withdraw;
		cout<<"\n\nHow much Balance do you want to widthDraw ? : ";
		cin>>withdraw;
		acct2.withDraw(withdraw);// calling withdraw function
	}
	else if (n==2) {
		float  deposit;
		cout<<"\n\nHow much Balance do you want to deposit ? : ";
		cin>>deposit;
		acct2.Deposit(deposit);// calling deposit function
	}
	else {
		cout<<"\n\nYou entered Invalid number ";
	}
}

