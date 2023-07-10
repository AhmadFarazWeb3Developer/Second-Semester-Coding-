#include <iostream>
using namespace std;

class Base
{
public:
    virtual void Show() = 0;
};
class Deriv1 : public Base
{
public:
    void Show()
    {
        cout << "Derived 1 Class method\n " << endl;
    }
};
class Deriv2 : public Base
{
public:
    void Show()
    {
        cout << "Derived2 Class method\n " << endl;
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
}