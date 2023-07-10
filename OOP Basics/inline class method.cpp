#include<iostream>
using namespace std;
class Details{
	
	public:
		void inSideClassDef()
		{
			cout<<"I am Defined inside Class ";
		}
};

int main()
{
	Details dtl;
	dtl.inSideClassDef();
	
}