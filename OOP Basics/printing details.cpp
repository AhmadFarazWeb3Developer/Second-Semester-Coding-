#include<iostream>
#include<string.h>
using namespace std;
class Details {
	public:
		string Name;
		string FatherName;
		int ID;
};
int main()
{
	Details Dtl[2];
	string Name[2],FatherName[2];
	int ID[2];
	for(int i=0; i<2; i++) {
		cout<<"\n\n-------Enter Full Details of "<<i+1<<" Person------\n\n";
		cout<<"\n\tEnter Full Name :   ";
		getline(cin, Dtl[i].Name);
		Name[i]=Dtl[i].Name;
		cout<<"\n\tEnter Father Name :  ";
		getline(cin,Dtl[i].FatherName);
		FatherName[i]=Dtl[i].FatherName;
		cout<<"\n\tEnter ID No  :  ";
		cin>>Dtl[i].ID;
		ID[i]=Dtl[i].ID;
		cin.clear();// The clear function clears the error flags from the input stream,
		cin.sync();//  The sync function flushes the input buffer
	}
	for(int i=0; i<2; i++) {
		cout<<"\n\n+++++++++++++++++++++++++++++++++++++++++++++";
		cout<<"\n\n-------Details of "<<i+1<<" Person------";
		cout<<"\n\n\t Full Name :   ";
		cout<<Name[i];
		cout<<"\n\n\t Father Name :  ";
		cout<<FatherName[i];
		cout<<"\n\n\t ID No is  :  ";
		cout<<ID[i];
	}
}