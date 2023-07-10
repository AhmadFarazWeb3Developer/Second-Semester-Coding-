#include<iostream>
using namespace std;
int main()
{
	int positive=0,negative=0,even=0,odd=0,Array[10],comma=1;
	cout<<"\n\nEnter Ten Inegers  \n\n";
	// loop for taking elements for Array : START
	for(int i=0; i<10; i++) {
		cout<<"Enter "<<i+1<<" Element of Array : ";
		cin>>Array[i];// taking element as input
	}
	// loop for taking elements for Array : END
	cout<<"\n\nEntered  Array = { ";
	// loop for printing entire Array :  START
	for(int i=0; i<10; i++) {
		cout<<Array[i];
		if(comma<=9) {// condition for printing comma betwwwn two elements

			cout<<" ,";
		}
		comma++;// increament comma
	}
	// loop for printing entire Array : END
	cout<<" }";
	// loop for checking each Element of Array: STARTS
	for(int i=0; i<10; i++) {
		if(Array[i]>0) { // check for positive number
			positive++;
		}
		if(Array[i]<0) {// check for negative number
			negative++;
		}
		if(Array[i]%2==0) { // check for even number
			even++;
		}
		if(Array[i]%2!=0) {// check for odd number
			odd++;
		}
	}
	// loop for checking each Element of Array: END
	cout<<"\n\nPositive Numbers are : "<<positive;
	cout<<"\n\nNegative Numbers are : "<<negative;
	cout<<"\n\nEven Numbers are : "<<even;
	cout<<"\n\nOOD Numbers are : "<<odd;
}