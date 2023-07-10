#include<iostream>
using namespace std;
 class Moon
 {
private:
double moonweight;
double earthWeight;
public:
Moon(double ew)
{
    earthWeight=ew;
    moonweight=ew/6;
}
double getMoonWeight()
{
return moonweight;
}

 };
 
 int main()
 {
double earth;
cout<<"What is your Weight ? ";
cin>>earth;
Moon luner(earth);
cout<<"on the moon you would weigh "<<luner.getMoonWeight()<<endl;

 }