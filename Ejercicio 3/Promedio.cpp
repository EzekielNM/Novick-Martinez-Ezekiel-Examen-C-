//
// Created by Ezekiel on 05/11/2024.
//

#include "Promedio.h"
#include <iostream>
using namespace std;

void promedio() {
    const int NUM_EJERCICIOS = 8;
    float calificacion, suma = 0.0;


    for (int i = 1; i <= NUM_EJERCICIOS; i++) {
        do {
            cout << "Ingrese la calificación" << i << " (entre 0 y 10): ";
            cin >> calificacion;


            if (calificacion < 0 || calificacion > 10) {
                cout << "Calificación no valida. Ingrese la calificacion de nuevo." << endl;
            }
        } while (calificacion < 0 || calificacion > 10);

        suma += calificacion;
    }


    float promedio = suma / NUM_EJERCICIOS;


    cout << "Promedio de las calificaciones es: " << promedio << endl;

    return 0;
}