#include<iostream>
using namespace std;
int main()
{
	int  days;
	cout<<"\n\nEnter days ";
	cin>>days;
	if(days>0 && days <=5) {
		cout<<"Fined 50 Rupees ";
	}
	if(days>=6 && days <=10) {
		cout<<"Fined 100 Rupees ";
	}
	if(days>10 && days<=30) {
		cout<<"Fined 500 Rupees ";
	}
	if(days>30) {
		cout<<"Your Menmber ship has been cancelled  ";
	}
}