#include <iostream>
using namespace std;
class Person
{
    string Name;
    int Age;

public:
    // setting name
    void setName(string name)
    {
        Name = name;
    }
    // getting name
    string getName()
    {
        return Name;
    }
    // setting age
    void setAge(int age)
    {
        Age = age;
    }
    // getting age
    int getAge()
    {
        return Age;
    }
};

// child class of Person

class Employee : public Person
{

    int EmployeeID;

public:
    // setting Employee ID
    void SetEmployeeID(int id)
    {
        EmployeeID = id;
    }
    // getting Employee ID
    int getEmployeeID()
    {
        return EmployeeID;
    }
};

// child class of Employee

class Manager : public Employee
{
    string Departement;

public:
    // setting departement
    void setDepartement(string dpt)
    {
        Departement = dpt;
    }
    // getting departement
    string getDepartement()
    {
        return Departement;
    }
};

int main()
{

    // Declaring Manager's object

    Manager manager;
    string name, dpt;
    int age, ID;
    cout << "\n\n======== Enter Details of Manager ========= " << endl;
    cout << "\n\tEnter Name : ";
    // clearing buffer
    // cin.ignore();
    getline(cin, name);
    // setting name
    manager.setName(name);
    cout << "\n\tEnter ID : ";
    cin >> ID;
    // setting ID
    manager.SetEmployeeID(ID);
    cout << "\n\tEnter Departement : ";
    cin.ignore();
    getline(cin, dpt);
    // setting departement
    manager.setDepartement(dpt);
    cout << "\n\tEnter Age : ";
    cin >> age;
    // setting age
    manager.setAge(age);

    cout<<"\n\n======== Your Entered Details Are ========"<<endl;
    cout<<"\n\tName         : "<<manager.getName();
    cout<<"\n\tID           : "<<manager.getEmployeeID();
    cout<<"\n\tDepartement  : "<<manager.getDepartement();
    cout<<"\n\tAge          : "<<manager.getAge();
}