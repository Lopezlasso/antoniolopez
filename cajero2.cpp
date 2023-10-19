//Programa: seguridad 3 capas
//autor: Lopez Cesar
//fecha: 05-10-2023
#include<iostream>
using namespace std;
int main()
{
   int c11,c12,c13, c01,c02,c03;
   cout<<"Ingrese las contraseñás c1 c2 c3";
   cin>>c11>>c12>>c13;
   if(c11==01){
     if(c12==02){
     if(c13==03){
       cout<<"ACCESO AUTORIZADO \n";
 }else{
 cout<<"La tercera contraseña no fue correcta"<<endl;  }
 }else{
 cout<<"La segunda contraseña no fue correcta"<<endl;
 }
 }else{ 
 cout<<"La primera contraseña no fue correcta"<<endl; 
 }
 return (0);
}
