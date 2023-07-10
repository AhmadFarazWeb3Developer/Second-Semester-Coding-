#include<iostream>
using namespace std;
int Greater(int Array[]);// function decleration
int main()
{
	int Array[5],comma=1,gtr_number;
	for(int i=0; i<5; i++ ) {
		cout<<"\nEnter "<<i+1<< " elemnet ";
		cin>>Array[i];
	}
	cout<<"\n\nEnterd Array or elements =  { ";
	for(int i=0; i<5; i++) { // loop for taking input
		cout<<Array[i];
		if(comma<=4) {
			cout<<" , ";
		}
		comma++; // increamnet comma
	}
	cout<<" }";
	gtr_number=Greater(Array);//function call
	cout<<"\n\nGreatest number is : "<<gtr_number;
}
int Greater(int Array[])// function definition
{
	int n=Array[0];// assigning first index value of array
	for(int i=0; i<5; i++) {
		if(Array[i]>n) {// codition checking
			n=Array[i];
		}
	}
	return n;// returning value
}