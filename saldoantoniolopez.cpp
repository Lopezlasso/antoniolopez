//titulo del programa: Resta y comparacion
//nombre del programa: saldo.cpp
//autor: Antonio Lopez
//fechavde creacion: 2023-09-11
//description: reste dos numeros y presente el saldo
#include<iostream>
using namespace std;
int main()
{
float a,b,c;
cin>>a>>b;
c=a-b;
if(c<0)
{
cout<<"Negativo";
}else {
cout<<"positivo";
}
return 0;
}
