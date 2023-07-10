#include<iostream>
using namespace std;
class Details {
	public:
		void inSideClassDef();
};
void Details::inSideClassDef ()// using scope resolution operator 
{
	cout<<"I am defined outSide the Class ";
}
int main()
{
	Details dtl;
	dtl.inSideClassDef();
}