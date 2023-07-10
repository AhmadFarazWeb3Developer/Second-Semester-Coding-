#include <iostream>
#include <string>
using namespace std;

// Student Class STARTS
class Student
{
    // Private data members
    int Std_ID;
    string Std_Name;

public:
    // Student Constructor
    Student(string stdName = "", int stdID = 0)
    {
        Std_ID = stdID;
        Std_Name = stdName;
    }
    // setter method for Student ID
    void setStdID(int Std_id)
    {
        Std_ID = Std_id;
    }
    // getter method for Student ID
    int getStdID()
    {
        return Std_ID;
    }
    // setter method for Student Name
    void setStdName(string std_name)
    {
        Std_Name = std_name;
    }
    // getter method for Student Name
    string getStdName()
    {
        return Std_Name;
    }
};

// Sstudent Class ENDS

// Departements Class STARTS
class Departement
{
    // Private data members
    int Dep_Code;
    string Dep_Name;
    // student class object array
    Student Std[3];
    static int count;

public:
    // constructor of Departement
    Departement(string dep_name = "", int dep_code = 0, string std_name = "", int std_id = 0)
    {
        // this i variable is just assumption
        int i = 0;
        Dep_Code = dep_code;
        Dep_Name = dep_name;
        // setting student Name
        Std[i].setStdName(std_name);
        // setting student ID
        Std[i].setStdID(std_id);
    }
    // setter method departement code
    void setDepCode(int dep_code)
    {
        Dep_Code = dep_code;
    }
    // getter method departement code
    int getDepCode()
    {

        return Dep_Code;
    }
    // setter method for departement name
    void setDeptName(string dep_name)
    {
        Dep_Name = dep_name;
    }
    // getter method for departement name
    string getDeptName()
    {
        return Dep_Name;
    }
    // Setter method for Setting student Name & ID
    void set_Stds_Details(string std_name, int std_id)
    {
        // count is updation value statically
        Std[count].setStdName(std_name);
        Std[count].setStdID(std_id);
        count++;
    }
    // Getter Method for Printing All Student details
    void Get_All_Details()
    {
        // for loop for printing details
        for (int i = 0; i < 3; i++)
        {
            cout << "\n\n----------------Student " << i + 1 << "------------------";
            cout << "\n\n.\t";
            cout << "Departement Name     : " << Dep_Name;
            cout << "\n.\t";
            cout << "Departement Code     : " << Dep_Code;

            cout << "\n.\t";
            cout << "Student Name         : " << Std[i].getStdName();
            cout << "\n.\t";
            cout << "Student ID           : " << Std[i].getStdID();
        }
    }
};

// definition of static data member
int Departement::count = 0;

// Departement Class ENDS

// MAIN STATRS
int main()
{
    // declaring varibales
    string dept, std_Name;
    int dept_Code, std_ID;

    // --------------------------------
    cout << "\n->\t";
    cout << "Enter Departement Name : ";
    getline(cin, dept);
    cout << "\n->\t";
    cout << "Enter Departement Code : ";
    cin >> dept_Code;
    // passing arguments to departements constructor
    Departement departement(dept, dept_Code);
    // for loop for taking details one by one
    for (int i = 0; i < 3; i++)
    {
        cout << "\n------ Enter Student " << i + 1 << " Details ------";
        cout << "\n\n->\t";
        cout << "Student Name : ";
        cin.ignore();
        getline(cin, std_Name);
        cout << "->\t";
        cout << "Student  ID : ";
        cin >> std_ID;
        // passing name and id to method
        departement.set_Stds_Details(std_Name, std_ID);
    }

    // calling method
    departement.Get_All_Details();
}