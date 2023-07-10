#include <iostream>
using namespace std;
// Base class A
class A
{
    int a;

public:
    // setter method
    void setValue(int x)
    {
        a = x;
    }
    // getter method
    int get_a()
    {
        return a;
    }

    // Base class B
};
class B
{

    int b;

public:
    // setter method
    void SetValue(int x)
    {
        b = x;
    }
    // getter method
    int get_b()
    {
        return b;
    }
};

// Base class C
class C
{
    int c;

public:
    // setter method
    void setValue(int x)
    {
        c = x;
    }
    // getter method
    int get_c()
    {
        return c;
    }
};

class D : public A, public B, public C
{
public:
};
int main()
{
    // declaring object of D
    D d;
    int a, b, c;
    cout << "\n\nEnter First value   :  ";
    cin >> a;
    // setting Class A data member
    d.A::setValue(a);
    cout << "\nEnter Second value  :  ";
    cin >> b;
    // setting class B data member
    d.B::SetValue(b);
    cout << "\nEnter Third Value   :  ";
    cin >> c;
    // setting class C data member
    d.C::setValue(c);
    // calling all values
    cout << "\n===Getting Values=====" << endl;
    cout << "\n  First Value   :  " << d.get_a();
    cout << "\n  Second Value  :  " << d.get_b();
    cout << "\n  Third Value   :  " << d.get_c();
}
                        