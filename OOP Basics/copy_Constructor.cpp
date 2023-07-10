#include <iostream>
using namespace std;
class Test
{
    int a = 10;
    int b = 20;

public:
    Test() {
        a=10;
        b=30;
    }
    Test(int A, int B)
    {
        a = A;
        b = B;
    }
    Test(Test &obj)
    {
        a = obj.a;
        b = obj.b;
    }
    void test()
    {
        cout << "\na : "<<a;
        cout << "\nb : " << b;
    }
};
int main()
{
    Test test1;
    Test test2(20, 40);
    // test2(test1);
    test1.test();
    test2.test();
    Test test3(test2);
    test3.test();
}
