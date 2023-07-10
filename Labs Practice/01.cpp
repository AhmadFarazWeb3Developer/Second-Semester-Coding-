#include<iostream>
using namespace std;
int main()
{
	int Pop=80000,total_man,total_woman,literate_people,literate_man,Illiterate_man,Illiterate_woman,total_illiteracy;
	total_man=(Pop*52)/100;
	cout<<"\n\nTotal Men : "<<total_man;
	total_woman=(Pop*48)/100;
	cout<<"\n\nTotal Women : "<<total_woman;
	literate_people=(Pop*48)/100;
	cout<<"\n\nTotal Literate People : "<<literate_people;
	literate_man=(35*Pop)/100;
	cout<<"\n\nTotal Literate Men : "<<literate_man;
	cout<<"\n\n------- ACTUAL RESULT -------------";
	Illiterate_man=total_man-literate_man;
	cout<<"\n\nTotal Illiterate Men : "<<Illiterate_man;
	Illiterate_woman=literate_people-literate_man;
	cout<<"\n\nTotal Illiterate Women : "<<Illiterate_woman;
	total_illiteracy= Illiterate_man+Illiterate_woman;
	cout<<"\n\nTotal Illiterate Population  : "<<total_illiteracy;

}