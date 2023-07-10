#include <iostream>
using namespace std;
class Check
{
    int a;

public:
};

class child : private Check
{
    int b;
public:
};
int main()
{
    Check ch;

}