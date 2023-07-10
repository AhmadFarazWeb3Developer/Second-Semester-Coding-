#include<iostream>
using namespace std;
 
 class A{
 	public:
 		void name()
 		{
 			cout<<"Ahmad Faraz";
		 }
		 int name(string name, int n)// we cannot overload function on the base of 
		 //only return type we must create difference by chging signature 
		 {
		 	cout<<"My name is : "<<name;
		 	return n;
		 }
		 
		 void name(string name)
		 {
		 	cout<<"My name is : "<<name;
		 }
 };
 int main()
 {
 
 A obj;
 obj.name();	
 }