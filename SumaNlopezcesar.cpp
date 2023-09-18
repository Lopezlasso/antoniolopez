//programa:SumaNlopezcesar.cpp
//autor: Lopez Cesar
//fecha: 2023-09-15
//descripcion: sume varios numeros 
#include<iostream>
using namespace std;
int main()
{
	int i=0,l;
	float x,s=0;
	cout<<"ingrese cantidad de numeros:";
	cin>>i;
	do{
		cout<<"ingrese x:"; cin>>x;
		i=i+1;
		s=s+x;
	} while(i<l);
	cout<<"la suma es:"<<s<<endl;
}

