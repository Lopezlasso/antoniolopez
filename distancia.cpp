#include <iostream>

int main() {
    double distancia, tiempo, velocidad;

    // Solicitar al usuario la distancia en metros
    std::cout << "Ingrese la distancia recorrida en metros: ";
    std::cin >> distancia;

    // Solicitar al usuario el tiempo en horas
    std::cout << "Ingrese el tiempo en horas: ";
    std::cin >> tiempo;

    // Calcular la velocidad en metros por segundo
    velocidad = distancia / (tiempo * 3600); // 3600 segundos en una hora

    // Mostrar los resultados
    std::cout << "Distancia recorrida: " << distancia << " metros" << std::endl;
    std::cout << "Velocidad: " << velocidad << " metros/segundo" << std::endl;
    std::cout << "Tiempo: " << tiempo << " horas" << std::endl;

    return 0;
}

