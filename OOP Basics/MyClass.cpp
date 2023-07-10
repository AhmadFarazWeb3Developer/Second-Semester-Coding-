#include <iostream>
using namespace std;
class MyClass
{
private:
    string Name;
    float Age;
    char Gender;
    float Height;

public:
    // static data member decleration
    static int Count;
    // setting age
    void setAge(float age)
    {
        Age = age;
    }
    // getting age
    float getAge()
    {
        return Age;
    }
    // setting gender
    void setGender(char gender)
    {
        Gender = gender;
    }
    char getGender()
    {
        return Gender;
    }
    // setting height
    void setHeight(float height)
    {
        Height = height;
    }
    // getting height
    float getHeight()
    {
        return Height;
    }
    // constructor for name setting
    MyClass(string name)
    {
        Name = name;
    }
    // getting name
    string getName()
    {
        return Name;
    }
    // static function decleration
    static void memberFunction()
    {
        Count++;
        cout << "\nNumber of instances of MyClass : " << Count;
    }
};
// static data member intialization outside the class
int MyClass::Count = 0;
// main function startd
int main()
{
    string name;
    float height, age;
    char gender;
    // details of first person
    cout << "\n------Enter Details of First Person -----";
    cout << "\n\tEnter Name : ";
    cin >> name;
    MyClass obj1(name);
    cout << "\n\tEnter Age : ";
    cin >> age;
    obj1.setAge(age);
    cout << "\n\tEnter Height : ";
    cin >> height;
    obj1.setHeight(height);
    cout << "\n\tEnter Gender : ";
    cin >> gender;
    obj1.setGender(gender);
    // deatils of second person
    cout << "\n\n------Enter Details of Second Person -----";
    cout << "\n\tEnter Name : ";
    cin >> name;
    MyClass obj2(name);
    cout << "\n\tEnter Age : ";
    cin >> age;
    obj2.setAge(age);
    cout << "\n\tEnter Height : ";
    cin >> height;
    obj2.setHeight(height);
    cout << "\n\tEnter Gender : ";
    cin >> gender;
    obj2.setGender(gender);

    // printing details of obj 1

    cout << "\n\tName : " << obj1.getName();
    cout << "\n\tAge : " << obj1.getAge();
    cout << "\n\tGender : " << obj1.getGender();
    cout << "\n\tHeight : " << obj1.getHeight();
    // function call for instace number updation
    obj1.memberFunction();
    // printing details of obj 2
    cout << "\n\n\tName : " << obj2.getName();
    cout << "\n\tAge : " << obj2.getAge();
    cout << "\n\tGender : " << obj2.getGender();
    cout << "\n\tHeight : " << obj2.getHeight();
    // function call for instance number updation
    obj1.memberFunction();
    // printing again detail
    cout << "\n\n---------------------------------";
    cout << "\n\n\tName : " << obj2.getName();
    cout << "\n\tAge : " << obj2.getAge();
    cout << "\n\tGender : " << obj2.getGender();
    cout << "\n\n\tName : " << obj1.getName();
    cout << "\n\tAge : " << obj1.getAge();
    cout << "\n\tGender : " << obj1.getGender();
    // printing height difference
    cout << "\n\n\tHeight difference : " << obj1.getHeight() - obj2.getHeight();
}