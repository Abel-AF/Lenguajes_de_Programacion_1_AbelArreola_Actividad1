#include <iostream>
using namespace std;

int main() {
    string nombre;
    int edad;

    // Pedir nombre y edad
    cout << "Ingresa tu nombre: ";
    getline(cin, nombre);
    cout << "Ingresa tu edad: ";
    cin >> edad;

    // Verificar si es mayor o menor de edad y mostrar mensaje
    if (edad >= 18) {
        cout << "Bienvenido " << nombre << ", eres mayor de edad." << endl;
    } else {
        cout << "Bienvenido " << nombre << ", eres menor de edad." << endl;
    }

    return 0;
}