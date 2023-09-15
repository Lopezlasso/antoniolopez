#include<iostream>
using namespace std;
#define pi 3.1416
float Areacirculo (float);
int main ()
{
	float a,r;
	cout<<"ingreseelradio:";
	cin>>r;
	a=Areacirculo (r);
	cout<<"Elarea es:";
	cout<<a;
	return (0);
}
float Areacirculo (float x)
{
	return pi *x*x;
}
