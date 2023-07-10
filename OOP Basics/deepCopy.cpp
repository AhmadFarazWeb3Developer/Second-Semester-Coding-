#include <iostream>
using namespace std;

class DeepCopy
{
public:
// in deep copy you ask for two times heap memory
    int *data;
    DeepCopy()
    {
        // one
        data = new int;
    }
    DeepCopy(const DeepCopy &other)
    {
        // two 
        data = new int;
        // shallow copy have no pointer here
        *data = *(other.data);
    }
    ~DeepCopy()
    {
        delete data;
    }
};

int main()
{
    DeepCopy obj1;
    *(obj1.data) = 5;
    DeepCopy obj2 = obj1; // deep copy
    cout << "obj1 data: " << *(obj1.data) << endl;
    cout << "obj2 data: " << *(obj2.data) << endl;
    *(obj2.data) = 10;
    cout << "obj1 data: " << *(obj1.data) << endl;
    cout << "obj2 data: " << *(obj2.data) << endl;
    return 0;
}
