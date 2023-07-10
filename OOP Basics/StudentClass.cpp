#include <iostream>
using namespace std;

// Student Class STARTS from here
class Student
{
    const string Name;
    const float Age;
    const string Course;
    const float GPA;
    const int Year;

public:
    // constructor
    Student(string name, float age, string course, float gpa, int year)
        : Name(name), Age(age), Course(course), GPA(gpa), Year(year)
    {
    }
    // printing  Information method
    void printInfo()
    {
        cout << "\n Name is   : " << Name;
        cout << "\n Age is    : " << Age;
        cout << "\n Course is : " << Course;
        cout << "\n GPA is    : " << GPA;
        cout << "\n Year is   : " << Year;
    }
};

// Student class ENDED here

// main starts from here
int main()
{
    // Intiallizing Values
    string name = "John Doe";
    float age = 20;
    string course = "BSCS-FALL-2021";
    float gpa = 3.53;
    int year = 2023;
    // Constructor called
    Student std(name, age, course, gpa, year);
    //    printInfo Method Called
    std.printInfo();
    return 0;
}