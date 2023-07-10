#include<iostream>
using namespace std;
class Employee {
	private:
		string Name;
		int Year;
		int Salary;
		string Address;
	public:
		void setName(string name)//  setter function for name
		{
			Name=name;
		}
		void setYear(int year)// setter function for year
		{
			Year=year;
		}
		void setAddress(string address)// setter function for address
		{
			Address=address;
		}
		string getName() // getter function for name
		{
			return Name;
		}
		int getYear()// getter function for year
		{
			return Year;
		}
		string getAddress()// getter function for address
		{
			return Address;
		}

};
int main()
{
	Employee employee[3];// decalring array of three employees
	string name[3],address[3];
	int year[3];
	for(int i=0; i<3; i++) { // entering data by loop
		cout<<"\n\nEnter Details of Employee "<<i+1;
		cout<<"\n---------------------------------";
		cout<<"\nEnter Name : ";
		cin>>name[i];
		cout<<"\nEnter Year : ";
		cin>>year[i];
		cout<<"\nEnter Address : ";
		cin>>address[i];
		employee[i].setName(name[i]);
		employee[i].setYear(year[i]);
		employee[i].setAddress(address[i]);
	}
	cout<<"\nName      Year of Joining     Address "<<endl;
	for(int i=0; i<3; i++) {// printing details
		cout<<"\n\n"<<employee[i].getName()<<"        "<<employee[i].getYear()<<"         "<<employee[i].getAddress();
	}
}