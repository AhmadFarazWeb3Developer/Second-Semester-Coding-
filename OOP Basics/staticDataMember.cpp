#include <iostream>
using namespace std;
class MyClass
{
public:
    int x;
    static int count;
    MyClass()
    {
        count++;
    }
};
int MyClass::count = 0;
int main()
{
    cout << "Initial Count: " << MyClass::count << endl;
    MyClass obj1, obj2; // default constructor is called
    cout << "Count after 2 Objects  : " <<obj1.count  << endl;
    return 0;
}