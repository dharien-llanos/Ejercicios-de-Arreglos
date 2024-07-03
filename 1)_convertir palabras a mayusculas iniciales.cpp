#include <iostream>
#include <string.h> 
using namespace std;
void poner_mayusculasiniciales(char cadena[]) {
    int n=0;
    while(cadena[n]!= '\0') {
        n++;
    }
    cadena[0] =toupper(cadena[0]);
    for (int i=1; i<n;i++) {
        if (cadena[i-1]==' '){
            cadena[i]=toupper(cadena[i]);
        }
    }
}

int main() {
    char array[100];
   cout<<"Ingrese una oracion: ";
    cin.getline(array,100);
    poner_mayusculasiniciales(array);
    cout<<array<<endl;

    return 0;
}

