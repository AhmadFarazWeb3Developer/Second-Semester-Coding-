#include<iostream>
using namespace std;
class counter {
	private:
		int Count;
	public:
		counter()
		{
			Count=0;
		}
		counter(int c)
		{
			Count=c;
		}
		counter(counter & obj)
		{
			Count=obj.Count;
		}
		void increamnet_count() //increment count
		{
			Count=Count+1;
		}
		int get_count() //return count
		{
			return Count;
		}
};
int main()
{
	counter c1(26);

	cout<<"\nValue of Count in C1 : "<<c1.get_count();//26
	c1.increamnet_count();//incremented and automatically both counts are updated 
	counter c3(c1);
	cout<<"\n\nValue of Count in C3 : "<<c3.get_count();//27
	cout<<"\nValue of Count in C1 : "<<c1.get_count();//27
//	c1.increamnet_count();
}
