//
//
//
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	float x,y,h;
	float z[3];
	cout<<"ingrese x y"; cin>>x>>y;
	cout<<"ingrese z"; cin>>z[0]>>z[1];
	h=sqrt(x*x +y*y);
	z[2]=sqrt(z[0]*z[0]+z[1]*z[1]);
	cout<<"hipotenusa= "<<h<<endl;
	cout<<"hipotenusa= "<<z[2]<<endl;
	return(0);
}

