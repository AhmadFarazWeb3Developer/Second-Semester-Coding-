#include <iostream>
using namespace std;

// Parent CLass -> student basic info
class StudentBasicInfo
{
    string Name;
    float Age;
    char Gender;

public:
    // method for Name
    void setName()
    {
        // setting name
        cout << "\n\n\tName           :   ";
        getline(cin >> ws, Name);
    }
    // Getter Method for Name
    string getName()
    {
        return Name;
    }
    //  method for Age
    void setAge()
    {

        // setting age
        cout << "\n\tAge            :   ";
        cin >> Age;
    }
    // method for age
    float getAge()
    {
        return Age;
    }
    //  method for Gender
    void setGender()
    {
        // setting gender
        cout << "\n\tGender         :   ";
        cin >> Gender;
        Gender = toupper(Gender);
    }
    // getter method for Gender
    char getGender()
    {
        return Gender;
    }
};
// student result info class
class StudentResultInfo : public StudentBasicInfo
{
    int Marks;

public:
    // default constructor
    StudentResultInfo()
    {
        Marks = 500;
    }
    // Method for  Marks
    void setMarks()
    {
        cout << "\n\tEnter Marks    :   ";
        cin >> Marks;
    }

    // getter method for marks
    int getMarks()
    {
        return Marks;
    }
    float Percentage()
    {
        return (Marks * 100) / 500.0;
    }
};

int main()
{

    StudentBasicInfo stdInfo;

    string name;
    int age;
    char gender;
    cout << "=========Enter Details of Student=======";
    stdInfo.setName();
    stdInfo.setAge();
    stdInfo.setGender();
    // student result infomation object
    StudentResultInfo stdResult;
    // setting marks
    stdResult.setMarks();
    cout << "\n\n========All Details are======== " << endl;
    cout << "\n\tName       :   " << stdInfo.getName();
    cout << "\n\tAge        :   " << stdInfo.getAge();
    cout << "\n\tGender     :   " << stdInfo.getGender();
    cout << "\n\tMarks      :   " << stdResult.getMarks();
    cout << "\n\tPercentage :   " << stdResult.Percentage() << "%";
}