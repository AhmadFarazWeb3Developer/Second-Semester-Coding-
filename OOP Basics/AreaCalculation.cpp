#include<iostream>
using namespace std;
//Class  starys from here
class Rectangle {
		float  Length;
		float Breadth;
	public:
// default constructor
		Rectangle()

		{
			Length=0;
			Breadth=0;
		}
// Double Parametars Constructor
		Rectangle(float L, float  B)
		{

			Length=L;
			Breadth=B;
		}
// Single Parameter Constructor
		Rectangle(float n)
		{
			Length=n;
			Breadth=n;
		}
//	calculate Area
		float Area()
		{
			return Length*Breadth;
		}
};
//Class end here

int main()
{
	float L,B,n;
	cout<<"--- Area for Parametarized Constructor ---";
	cout<<"\n\n\tEnter Length : ";
	cin>>B;
	cout<<"\n\tEnter Width : ";
	cin>>L;
	Rectangle rec1(L,B);// constructor call
	cout<<"\n\n\tArea is : "<<rec1.Area()<<" m.sq";
	cout<<"\n\n\n--- Area for Single Parametarized Constructor --- ";
	cout<<"\n\nEnter One Value for Both Length and Bredth ";
	cin>>n;
	Rectangle rec2(n);// constructor call
	cout<<"\n\tArea is : "<<rec2.Area()<<" m.sq";

}