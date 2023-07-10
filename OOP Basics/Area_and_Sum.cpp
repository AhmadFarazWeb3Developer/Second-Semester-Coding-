#include<iostream>
using namespace std;
class Rectangle {
	private:
		float length;
		float width;
	public:
		void SetLenght(float L)// setter function for L
		{
			length=L;
		}
		void setWidth(float W)// setter function for W
		{
			width=W;
		}
		float  GetSumAllSides()// getter function for Sum of all side
		{
			return 2*(length+width);
		}
		float GetArea()// getter function for Area calculation
		{
			return length*width;
		}
};
int main()
{
	Rectangle RTG;//Declared RTG object of Reactange Class
	float L,W;
	cout<<"Parameters are in Centimeters ";
	cout<<"\n-------------------------------";
	cout<<"\n\nEnter Width : ";
	cin>>W;
	cout<<"\nEnter Length : ";
	cin>>L;
	// passing arguments to setter function
	cout<<"\n\nSum of All Sides are : "<<RTG.GetSumAllSides()<<" cm ";
	cout<<"\n\nArea of the Rectangle is : "<<RTG.GetArea()<<" cm squares";
}
