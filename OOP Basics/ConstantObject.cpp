#include <iostream>
using namespace std;
class Counter
{
private:
    int count;
    string Name;

public:
    Counter() : count(0) {}
    Counter(int c, string name)
    {
        count = c;
        Name = name;
    }
    void inc_count() // non-const function
    {
        count++;
    }
    int get_count() const  // constant function
    {
        return count;
    }
    string getName() const
    {
        return Name;
    }
};
int main()
{
    Counter c1;
    const Counter c2(215154, "Ahmad Faraz"); 
    // we can get result with only constant member funtions else error would be arised 
    // c2.inc_count(); //error
    cout << "Count : " << c2.get_count();
    cout << "\nName : " << c2.getName();
}
