
#include <iostream>
using namespace std;
class MyClass
{
public:
    int x;
    static int count;
    MyClass() {}
    static int Function()
    {
        count++;
        return count;
    }
};

int MyClass::count = 0;
int main()
{
    cout << "Initial Count: " << MyClass::count << endl;
    MyClass obj1; // default constructor is called
    cout << "Count after 2 Objects  : " << MyClass::Function() << endl;

    return 0;
}