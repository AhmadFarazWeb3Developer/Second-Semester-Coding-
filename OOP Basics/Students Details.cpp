#include<iostream>
using namespace std;
class student {
	private:
		string name;
		float Physics_Marks;
		float Math_Marks;
		float OOP_Marks;
	public :
		float setPhysicsMarks(float physics)// setter function for Physics
		{
			Physics_Marks=physics;
		}
		float setMathMarks(float math)//setter function for Math
		{
			Math_Marks=math;
		}
		float setOOPMarks(float OOP)// setter function for OOP
		{
			OOP_Marks=OOP;
		}
		float  getPhysicsMarks()// getter function for Physics
		{
			return  Physics_Marks;
		}
		float getMathMarks()//getter function for Math
		{

			return Math_Marks;
		}
		float getOOPMarks()// getter function for OOP
		{
			return OOP_Marks;
		}
};
int main()
{
	student std[3];// array of three objects
	char ch;// char for check
	int n;
	float physicsMarks[3],mathMarks[3],OOPMarks[3];
	for(int i=0; i<3; i++) {// for loop for taking marks of each object
		cout<<"\n\nEnter Marks for Student : "<<i+1;
		cout<<"\n-----------------------------";
		cout<<"\nEnter Physics Marks : ";
		cin>>physicsMarks[i];
		cout<<"\nEnter Math Marks : ";
		cin>>mathMarks[i];
		cout<<"\nEnter OOP Marks  : ";
		cin>>OOPMarks[i];
		std[i].setPhysicsMarks(physicsMarks[i]);
		std[i].setMathMarks(mathMarks[i]);
		std[i].setOOPMarks(OOPMarks[i]);
	}
	cout<<"\n\nDo you want to terminate Application ? Press Y/N : ";
	cin>>ch;
	if(ch=='N') {// condtion for details checking
		cout<<"\nDo you want full details ? Y/N  :  ";
		cin>>ch;
		if(ch=='Y') {
			for(int i=0; i<3; i++) {
				cout<<"\n\n\nDetails of Student "<<i+1;
				cout<<"\n----------------------";
				cout<<"\nPhysics Marks : "<<std[i].getPhysicsMarks();
				cout<<"\nMath Marks : "<<std[i].getMathMarks();
				cout<<"\nOOP Marks : "<<std[i].getOOPMarks();
			}
		}
		else {
			cout<<"\n\nWhich Student Detail you want ? : ";
			cin>>n;
			cout<<"\n\n";
			if(n==1) {
				cout<<"Details of Student : "<<n<<endl;
				cout<<"-----------------------"<<endl;
				cout<<"\nPhysics Marks : "<<std[0].getPhysicsMarks();
				cout<<"\nMath Marks : "<<std[0].getMathMarks();
				cout<<"\nOOP Marks : "<<std[0].getOOPMarks();
			}
			else if(n==2) {
				cout<<"Details of Student : "<<n<<endl;
				cout<<"-----------------------"<<endl;
				cout<<"\nPhysics Marks : "<<std[1].getPhysicsMarks();
				cout<<"\nMath Marks : "<<std[1].getMathMarks();
				cout<<"\nOOP Marks : "<<std[1].getOOPMarks();

			}
			else if(n==3) {
				cout<<"Details of Student : "<<n<<endl;
				cout<<"-----------------------"<<endl;
				cout<<"\nPhysics Marks : "<<std[2].getPhysicsMarks();
				cout<<"\nMath Marks : "<<std[2].getMathMarks();
				cout<<"\nOOP Marks : "<<std[2].getOOPMarks();
			}
		}
	}
	else {
		cout<<"\n\nYou Terminated the Application ";
	}
}