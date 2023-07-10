#include<iostream>
using namespace std;
class smartphone {
//Data Members(Properties)
		string Model;
		int year_of_manufacture;
		bool _5g_supported;
	public:
		// parametarized constructor
		smartphone(string model, int year, bool result)
		{
			Model=model;//use this notion private capital and copying smaller one because it reduce error
			year_of_manufacture=year;
			_5g_supported=result;

		}
// copy constructor
		smartphone(smartphone &obj)
		{
			Model = obj.Model;
			year_of_manufacture = obj.year_of_manufacture;
			_5g_supported = obj._5g_supported;
		}
		string getModel()
		{
			return Model;
		}
		int getYear()
		{
			return year_of_manufacture;
		}
		int getSupport()
		{
			return _5g_supported;
		}

};
int main()
{
// using parameterized constructor
	smartphone iphone("iphone 11", 2019, true );
	smartphone iphone_2(iphone);
	cout<<"Iphone 2 MODEL : "<<iphone_2.getModel();
	cout<<"\nIpnone 2 Year : "<<iphone_2.getYear();
	cout<<"\nIphone 2 Support : "<<iphone_2.getSupport();
}
