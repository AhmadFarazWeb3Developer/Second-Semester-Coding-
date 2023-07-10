 #include <iostream>
using namespace std;
class Base
{
public:
    virtual void Show()
    {
        cout << "Base Class method\n"
             << endl;
    }
};
class Deriv1 : public Base
{
public:
   virtual void Show()
    {
        cout << "Derived1 Class method\n"
             << endl;
    }
};
class Deriv2 : public Base
{
public:
   virtual void Show()
    {
        cout << "Derived2 Class method\n"
             << endl;
    }
};
int main()
{
    Deriv1 dv1;
    Deriv2 dv2;
    Base *ptr;
    ptr = &dv1;
    ptr->Show();
    ptr = &dv2;
    ptr->Show();
    // output
    //  Derived1 class Method
    // Derived2 Class Method
    // withoud virtual keyword we would get base class method
}