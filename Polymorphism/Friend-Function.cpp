#include <iostream>
using namespace std;

class Sum
{
	int A, B;

public:
	// constructor
	Sum(int a = 0, int b = 0)
	{
		A = a;
		B = b;
	}
	// set A
	void SetA(int a)
	{
		A = a;
	}
	// Set B
	void SetB(int b)
	{
		B = b;
	}
	int getA()
	{
		return A;
	}
	int getB()
	{
		return B;
	}
	// Sum is a friend function of Try
	friend void PrintSum(Sum sum);
};
// Sum is defined outside the class
void PrintSum( Sum sum)
{
	cout << "\n\nA     :    " << sum.A++;
	cout << "\n\nB     :    " << sum.B++;
	cout << "\n\nA + B :    " << sum.A + sum.B;
}

int main()
{
	Sum sum;
	sum.SetA(10);
	sum.SetB(20);
	PrintSum(sum);
	cout<<"\n\nA : "<<sum.getA();
	cout<<"\n\nB : "<<sum.getB();
	return 0;
}
