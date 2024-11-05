//
// Created by Ezekiel on 05/11/2024.
//

#include "Promocion.h"
#include <iostream>
using namespace std;

void promocion() {
    float precio1, precio2, precio3;

    cout << "Ingrese el precio del primer artículo: ";
    cin >> precio1;

    cout << "Ingrese el precio del segundo artículo: ";
    cin >> precio2;

    cout << "Ingrese el precio del tercer artículo: ";
    cin >> precio3;


    float total;
    if (precio1 <= precio2 && precio1 <= precio3) {
        total = precio2 + precio3;
    } else if (precio2 <= precio1 && precio2 <= precio3) {
        total = precio1 + precio3;
    } else {
        total = precio1 + precio2;
    }

    cout << "El total a pagar bajo la promoción es: " << total << endl;

    return 0;
}