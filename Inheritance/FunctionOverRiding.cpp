#include <iostream>
using namespace std;
class Parent
{
    // Can function overriding be defined in same class?
    // The answer is No, you cannot override the same method in one class.
    //   The anonymous inner class is a different class. Save this answer
public:
    void myFunction()
    {
        cout << "\nParent class" << endl;
    }
};
class Child : public Parent
{
public:
    void myFunction()
    {
        cout << "\nChild class" << endl;
    }
};
int main()
{
    Child myObj;
    myObj.myFunction();
    myObj.Parent::myFunction();
    return 0;
}
