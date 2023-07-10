#include<iostream>
using namespace std;
class Circle {
	private:
		double radius;
	public:
		void set (double r)
		{
			radius = r;
		}
		double area()
		{
			return 3.14*radius*radius;
		}
		
};

int main()
{
	Circle c1, c2;
	c1.set(3.60);
	c2.set(7.90);
	cout<<"\n area of circle is : "<<c2.area();
	cout<<"\n area of circle is : "<<c1.area();
}