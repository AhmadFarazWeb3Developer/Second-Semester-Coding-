#include <iostream>
using namespace std;
class Example
{
    int a, b;

public:

Example(){};

Example(int a,int b)
{
    this->a=a;
    this->b=b;
}
    void operator --(int)
    {
        a--;
        b--;
    }
    void display()
    {
        cout << "a=" << a << " b=" << b << endl;
    }
};

int main()
{
    Example e(12,34);
    cout << "Before overloading unary  minus operator" << endl;
    e.display();
    e--;
    cout << "After overloading unary minus operator" << endl;
    e.display();
    return 0;
}
