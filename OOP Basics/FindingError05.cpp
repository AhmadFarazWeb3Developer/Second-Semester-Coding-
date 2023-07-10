#include <iostream>
using namespace std;
class DumbBell
{
    int weight;
    public:
    void setWeight(int);
    // getter method 
    int getWeight()
    {
        return weight;
    }
};
void DumbBell :: setWeight(int w)
{
    weight = w;
}

int main()
{
    DumbBell bar;
    bar.setWeight(200); 
    cout << "The weight is " << bar.getWeight() << endl;
    return 0;
}
