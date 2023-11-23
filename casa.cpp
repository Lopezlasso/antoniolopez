//programa: casas
//autor: Lopez Cesar
//fecha: 19-10-2023
#include<iostream>
using namespace std;
int main ()
{
        float a,b,c;
        float x[3];
        cout<<"ingrese<< a b ";cin>>a>>b;
        cout<<"ingrese x ";cin>>x[0]>>x[1];
        c=a+b;
        x[2]=x[0]+x[1];
        cout<<a<<"+"<<b<<" = "<<c<<endl;
        cout<<x[0]<<"+"<<x[1]<<" ="<<x[2]<<endl;
        return(0);
}
