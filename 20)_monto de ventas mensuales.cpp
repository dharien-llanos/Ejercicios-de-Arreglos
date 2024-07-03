#include <iostream>
#include <string>
using namespace std;

int main() {
    const int NUM_MESES=12;
    string nombres[NUM_MESES]={"Enero", "Febrero", "Marzo", "Abril", "Mayo", "Junio", "Julio", "Agosto", "Septiembre", "Octubre", "Noviembre", "Diciembre"};
    double ventas[NUM_MESES];
    double sumaVentas = 0;

    for (int i = 0; i < NUM_MESES; i++) {
        cout << "Ingrese las ventas de " << nombres[i] << ": ";
        cin >> ventas[i];
        sumaVentas += ventas[i];
    }

    double promedioMensual = sumaVentas / NUM_MESES;
    double minimo =0.4 * promedioMensual;
    double regular = 0.75 * promedioMensual;

    int mesesMin = 0, mesesReg = 0, mesesExcel = 0;

    cout << "Ventas mensuales promedio: " << promedioMensual << endl;

    cout << "Meses con ventas minimas: "<<endl;
    for (int i = 0; i < NUM_MESES; i++) {
        if (ventas[i] < minimo) {
            cout << nombres[i] << " ";
            mesesMin++;
        }
    }
    cout << "Meses con ventas regulares: "<<endl;
    for (int i = 0; i < NUM_MESES; i++) {
        if (ventas[i] >= minimo && ventas[i] <= regular) {
            cout << nombres[i] << " ";
            mesesReg++;
        }
    }
    cout << "Meses con ventas excelentes: "<<endl;
    for (int i = 0; i < NUM_MESES; i++) {
        if (ventas[i] > regular) {
            cout << nombres[i] << " ";
            mesesExcel++;
        }
    }

    cout << "Porcentajes de meses segun nivel de ventas:" << endl;
    cout << "Minimo: " << (mesesMin * 100) / NUM_MESES << "%" << endl;
    cout << "Regular: " << (mesesReg * 100) / NUM_MESES << "%" << endl;
    cout << "Excelente: " << (mesesExcel * 100) / NUM_MESES << "%" << endl;

    return 0;
}

