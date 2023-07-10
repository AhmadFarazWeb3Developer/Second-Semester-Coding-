#include <iostream>
using namespace std;

class ShallowCopy {
public:
    int* data;
    ShallowCopy() {
        data = new int;
    }
    ShallowCopy(const ShallowCopy& other) {
        data = other.data;
    }
    // you dont need to free memory explicitly
};

int main() {
    ShallowCopy obj1;
    *(obj1.data) = 5;
    ShallowCopy obj2 = obj1; //shallow copy
    cout << "obj1 data: " << *(obj1.data) << endl;
    cout << "obj2 data: " << *(obj2.data) << endl;
    *(obj2.data) = 10;
    cout << "obj1 data: " << *(obj1.data) << endl;
    cout << "obj2 data: " << *(obj2.data) << endl;
    return 0;
}
