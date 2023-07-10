#include <iostream>
using namespace std;
class Student
{

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
   Student(int rollNo, string fName, string lName, string Class, float marks, char grade)
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

// printing by default constructor 
Student sdt1();

Student std2(123,"Saad","Israr","BSCS-II",780,'B');
std2.PrintData();




}