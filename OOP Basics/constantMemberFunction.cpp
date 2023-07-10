#include <iostream>
using namespace std;
class MyClass
{
private:
     int alpha;
     int beta;
public:
    MyClass(int a, int b) : alpha(a), beta(b) {}
    int Fun1() const;
    int Fun2() const;
};
int MyClass::Fun1() const

{
    return alpha; // OK
}
int MyClass::Fun2() const

{
    return beta; // OK
}
int main()
{
    MyClass obj(20, 34);
    cout << obj.Fun1();
    cout << obj.Fun2();
}