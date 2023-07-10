#include<iostream>
using namespace std;
int main()
{
	int a,b,sum,*ptr1,*ptr2;// taking two pointer variables
	cout<<"\n\nEnter first value : ";
	cin>>a;
	cout<<"\n\nEnter second value : ";
	cin>>b;
	ptr1=&a;// storing address of a
	ptr2=&b;// storing address of b
	sum=*(ptr1)+*(ptr2);// adding values at *ptr1 and *ptr2
	cout<<"\n\nSum is : "<<sum;


}