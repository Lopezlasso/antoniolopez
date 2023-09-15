#include<iostream>
using namespace std;
float x,y,z;
int ingrese()
{
	cout<<"ingrese x:";cin>>x;
	cout<<"ingrese y:";cin>>y;
	return(0);
}
int salida()
{
	cout<<"la suma de"<<x<<"+"<<y<<"="<<z<<endl;
	return(0);
}
int main()
{
	ingrese();
	z=x+y;
	salida();
	return(0);
}
