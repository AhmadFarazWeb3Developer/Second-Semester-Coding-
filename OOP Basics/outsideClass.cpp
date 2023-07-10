#include <iostream>
using namespace std;
class outsideClass
{
public:
  void name();
};
void outsideClass::name()
{
  cout << "Ahmad Faraz";
}
int main()
{
  outsideClass object1;
  object1.name();
}