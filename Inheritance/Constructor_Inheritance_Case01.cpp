#include <iostream>
using namespace std;
class Base
{
public:
    Base()
    {
        cout << "Base class Non-Parametarized Construcotr called ";
    }
    Base(int x)
    {
        cout << "\nBase class Parametarized Construcotr called : " << x;
    }

    ~Base()
    {
        cout<<"\nBase Destrucotrs";
    }
};
class derived : public Base
{
public:
    derived()
    {
        cout << "\n Derived class Non-Parameterized construcotr called ";
    }
    derived(int x,int y):Base(x)
    {
        cout << "\nDerived class Paramterterizd construcotr called : " << x;
    }
    ~derived()
    {
        cout<<"\nDerived Destructor";
    }
};

int main()
{
    derived dr(25,30);
    // ==================================================
    // OUTPUT: Base class Non-Parametarized Construcotr called
    //    Derived class Paramterterizd construcotr called : 25
    // ========  NOTE ! ==========
    // fisrt base class will be executed then child class
}