
#include <iostream>
using namespace std;
class Counter
{
private:
    const int count;

public:
    Counter() : count(0) {}
    Counter(int c) : count(c) {} // setting value through constructor
    int get_count() const        // return count
    {
        return count;   // count++  is not acceptable
    }
};
int main()
{
    Counter c1(12);
    Counter c2(25);
    cout << "\nValue of first object  : " << c1.get_count();
    cout << "\nValue of second object  :  " << c2.get_count();
}
