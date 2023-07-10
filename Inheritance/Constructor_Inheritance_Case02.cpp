#include <iostream>
using namespace std;
class Base
{
public:
    Base()
    {
        cout <<" Default of Base ";
    }
    ~Base()
    {
        cout << "\n Base destructed  ";
    }
};
class derived : public Base
{
public:
    derived()
    {
        cout << "\n Default of Derived  ";
    }
    ~derived()
    {
        cout << "\n Derived destructed ";
    }
};

int main()
{
    derived dr1;
    // OUTPUT:
    //  Parametarized of Base  :  2
    // Parametarized of Derived  : 1
    // Derived destructed
    // Base destructed
    // Derived destrucotr
    // Base destrucotr
    // ========  NOTE ! ==========
    // constructor : First base will be executed then child
    // destructor : First Derived will be executed and then Base
}
