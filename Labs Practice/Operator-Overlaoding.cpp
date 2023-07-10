#include <iostream>
using namespace std;

class MyClass
{

    int num1;
    int num2;

public:
    // default constructor
    MyClass(){};
    // parametarized constructor
    MyClass(int num1, int num2)
    {
        this->num1 = num1;
        this->num2 = num2;
    }
    // setter method for first value
    void SetFirstValue(int num1)
    {
        this->num1 = num1;
    }
    // getter method for first value
    int getFirstValue()
    {
        return this->num1;
    }
    // setter method for second value
    void SetSecondValue(int num2)
    {
        this->num2 = num2;
    }
    // getter method for second value
    int getSecondValue()
    {
        return this->num2;
    }
    //  This operator overloading method is for Addition
    void operator+()
    {
        num1 = num1 + 5;
        cout << "\n\nValue of First Number is  : " << num1;
    }
    // This operator overloading method is for sign changing to minus
    void operator-()
    {
        if (num2 > 0)
        {
            num2 = -num2;
            cout << "\n\nValue of  Second Number is : " << num2<<endl;
        }
        else
            cout << "\n\nValue of Second Number is  : " << num2<<endl;
    }
};

int main()
{
    MyClass obj;
    int num1, num2;

    cout << "\nEnter Value of First number   : ";
    cin >> num1;
    obj.SetFirstValue(num1);

    cout << "\nEnter Value of Second Number  : ";
    cin >> num2;
    obj.SetSecondValue(num2);
    cout << "\n\nNew Values After Operator Overloading" << endl;
    +obj;
    -obj;
}
