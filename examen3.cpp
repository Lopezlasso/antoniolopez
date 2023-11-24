//programa: bucles
//autor: Antonio Lopez
//fecha: 24-11-2023
 #include <iostream>

using namespace std;

int main() {                                              int numero;                                           cout << "Ingresa un número para mostrar su tabla de multiplicar: ";                     cin >> numero;      cout << "Tabla de multiplicar del " << numero << ":" << endl;                                               int i = 1;
    do {                                                  cout << numero << " x " << i << " = " << numero * i << endl;
        i++;
    } while (i <= 10);

    return 0;
}
