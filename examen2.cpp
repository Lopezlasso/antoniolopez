//programa:estructuras de control
//autor: Antonio Lopez
//fecha: 24-11-2023
#include <iostream>
using namespace std;
int main() {
    int numero;
    cout << "Ingresa un número: ";
    cin >> numero;                                        if (numero > 0) {                                         cout << "El número ingresado es positivo." << endl;                                                     } else if (numero < 0) {
        cout << "El número ingresado es negativo." << endl;                                 } else {
        cout << "El número ingresado es cero." << endl;                                     }
    return 0;
}
