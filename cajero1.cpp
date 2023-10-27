//programa: cajero.cpp
//autor: Antonio Lopez
//fecha: 12-10-2023
#include<iostream>
using namespace std;
int main()
{
        int c1,c2=5;
        cout<<"ingrese la clave:"; cin>>c1;
        if (c1==c2)
        {
                cout<<"acceso correcto";
        }else{
                cout<<"acceso incorrecto";
        }
        return (0);
}
