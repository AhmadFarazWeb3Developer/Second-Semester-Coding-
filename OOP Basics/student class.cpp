#include<iostream>
using namespace std;
class student {// student class decleration
	private:
		string 	Name;
		int roll_no;
		public:
			void setName(string name)// setter function for name
			{
				Name=name;
			}
			string getName()// getter function for Name
			{
				return Name;
			}
			void setRollNo(int rollNo)// setter function for roll_no
			{
				roll_no=rollNo;
			}
			int getRollNo()// getter function for roll_no
			{
				return roll_no;
			}
};
int main()
{
	student std;// declared object of student class
	std.setRollNo(2);// setting roll no to 2 
	cout<<"\nYour  name is : "<<std.getRollNo();
	std.setName("Ali");// setting name to ALI
	cout<<"\nYour Roll No is : "<<std.getName();
}