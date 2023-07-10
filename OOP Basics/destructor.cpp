#include <iostream>
using namespace std;
class name
{
    int *var;

public:
    name(int n)
    {
        var = new int;
        *var = n;
    }
    void setValue(int value)
    {
        *var = value;
    }
    int getValue()
    {
        return *var;
    }
    ~name()
    {
        delete var;
    }
};
int main()
{
    name object1(10);// constructor 
    cout << " Passed Value of Constructor :  " << object1.getValue();
    object1.setValue(20);// set value
    cout << "\nPassed Value of SetValue Function : " << object1.getValue();
    name object2(30);// constuctor 
    cout << " Passed Value of Constructor :  " << object2.getValue();
    object2.setValue(40);// set value
    cout << "\nPassed Value of SetValue Function : " << object2.getValue();
}