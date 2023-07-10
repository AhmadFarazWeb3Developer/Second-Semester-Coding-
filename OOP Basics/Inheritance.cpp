#include<iostream>
using namespace std;
class Human {
	public:
		int height;
		int weight;
		int age;
	public:
		int getAge()
		{
			return age;
		}
		int setWeight(int w)
		{
			weight=w;
		}
};
class Male:public Human {
	public:
		string color;
		void sleep()
		{
			cout<<"\nMale is sleeping";
		}
};
int main()
{
	Male obj1;
	obj1.age=23;
	cout<<obj1.age<<endl;
	obj1.height=6;
	cout<<obj1.height<<endl;
	obj1.setWeight(66);
	cout<<obj1.weight<<endl;
	cout<<obj1.color<<endl;
	//cout<<obj1.sleep(); we cannot write like that because function isn't returning anything 
	obj1.sleep();
}