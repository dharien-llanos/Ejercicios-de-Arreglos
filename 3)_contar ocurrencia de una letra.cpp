#include <iostream>
using namespace std;

int main() {
    char arreglo[100];
    char letra;
    int cont = 0;

    cout<<"Ingrese una cadena de texto: ";
    cin.getline(arreglo, 100);

    cout<<"Ingrese la letra que desea contar: ";
    cin >> letra;

    
    for (int i = 0; arreglo[i] != '\0'; i++) {
        if (arreglo[i] == letra) {
            cont++;
        }
    }
    cout<<"La letra '"<<letra<<"'aparece "<<cont<<" veces en la cadena"<<endl;

    return 0;
}

