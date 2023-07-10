#include<iostream>
using namespace std;
class hero {
	private:
		string name;
		int age;
		int height ;
	public:
		void setAge(int Age)
		{
			age=Age;

		}
		int getAge()
		{
			return age;
		}
};
int main()
{
	hero h1;// hero class variable or h1 is decleraed
	int age;
	cout<<"\n\nEnter Age : ";
	cin>>age;
	h1.setAge(age); // setting age
	cout<<h1.getAge();// getting age
	return 0;
}