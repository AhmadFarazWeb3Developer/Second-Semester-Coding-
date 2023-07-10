#include <iostream>
using namespace std;
// Class STARTS from here
class MyClass
{
    int X, Y, Z;

public:
    // Setting Numbers  method
    void setNums(int n1, int n2, int n3)
    {
        this->X = n1;
        this->Y = n2;
        this->Z = n3;
    }
    // Printing Numbers Method
    void PrintNums()
    {
        cout << "\n    First Number is  : " << X;
        cout << "\n    Second Number is : " << Y;
        cout << "\n    Third Number is  : " << Z;
    }
    // method for sum
    int Sum()
    {
        return (this->X + this->Y + this->Z);
    }
    // method for product
    int Product()
    {
        return (this->X * this->Y * this->Z);
    }
    // Method for Increamnted Values
    void IncreamentNums()
    {
        cout << "\n\n------Increamneted Values ---------";
        cout << "\n\n First Value is Increamented  : " << ++this->X;
        cout << "\n Second Value is Increamented : " << ++this->Y;
        cout << "\n Third Value is Increamented  : " << ++this->Z;
    }
};
// MyClass ENDED here
// main STARTS from here
int main()
{
    MyClass obj1;
    // constructor called
    obj1.setNums(2, 3, 4);
    // Sum method called
    cout << "\n\nSum of Passed Integers are : " << obj1.Sum() << endl;
    // Product method called
    cout << "\nProduct of Integers are : " << obj1.Product() << endl;
    cout << "\n\n---The Passed Integers are --- " << endl;
    // PrintNums Method is called
    obj1.PrintNums();
    // Increamented Values method is called
    obj1.IncreamentNums();
    cout << endl
         << endl;
}