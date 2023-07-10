#include <iostream>
#include<string.h>
using namespace std;
class Student {

		int RollNo;
		string FirstName;
		string LastName;
		string YourClass;
		float Marks;
		char Grade;

	public:
		// constructor
		Student()
		{
			RollNo = 215154;
			FirstName = "Ahmad";
			LastName = "Faraz";
			YourClass = "BSCS-II";
			Marks = 950;
			Grade = 'A';
		}
		// Parametarized Constructor
		Student(int rollNo, string fName, string lName, string Class, int marks, char grade)
		{
			RollNo = rollNo;
			FirstName = fName;
			LastName = lName;
			YourClass = Class;
			Marks = marks;
			Grade = grade;
		}
		void PrintData()
		{
			cout<<"\n\n---Detail of Student is here ---- "<<endl;
			cout << "Your Roll No is " << RollNo << endl;
			cout << "Your First Name is : " << FirstName<<  endl;
			cout << "Your Last Name is : " <<LastName<< endl;
			cout << "Your Class Name is  :  " << YourClass<< endl;
			cout << "Your Total Marks are :  " <<Marks <<endl;
			cout << "Your Exact Grade is :  " <<Grade<< endl;
		}
		// parametarized Constructor
};
int main()
{
	int id,marks;
	string fname,lname,Class;
	char grade;
// printing by default constructor
	Student sdt1();
	cout<<"\nEnter ID : ";
	cin>>id;
	cout<<"\n\nEnter First Name : ";
	cin>>fname;
	cout<<"\n\nEnter Last Name : ";
	cin>>lname;
	cout<<"\n\nEnter Class name : ";
	cin>>Class;
	cout<<"\n\nEnter Your Marks : ";
	cin>>marks;
	cout<<"\n\nEnter Your Grade : ";
	cin>>grade;
	grade=toupper(grade);// to uuper case
	Student std2(id,fname,lname,Class,marks,grade);
	std2.PrintData();// function call




}