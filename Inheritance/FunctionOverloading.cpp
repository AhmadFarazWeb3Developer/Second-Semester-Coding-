#include <iostream>
using namespace std;

class Parent
{
public:
    void myFunction()
    {
        cout << "Parent class" << endl;
    }
    void myFunction(int a)
    {
        cout << "Parent overloaded function" << endl;
    }
};
int main()
{
    Parent myObj;
    myObj.myFunction();
    myObj.myFunction(20);
    return 0;
}