//
// Created by Ezekiel on 05/11/2024.
//

#include "Identificacion.h"
#include <iostream>
using namespace std;

void verificacion() {
    int numero;

    cout << "Ingrese un número entero: ";
    cin >> numero;

    if (numero > 0) {
        cout << "El número es positivo." << endl;
    } else if (numero < 0) {
        cout << "El número es negativo." << endl;
    } else {
        cout << "El número es cero." << endl;
    }

    return 0;
}