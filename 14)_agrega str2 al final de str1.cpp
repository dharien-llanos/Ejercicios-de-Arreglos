#include <iostream>
using namespace std;

void mistrcat(char *destino,char*origen) 
{
    int i;
    for (i = 0; destino[i] != '\0'; i++);

    for (int j = 0;origen[j] !='\0';j++,i++)
	 {
        destino[i]=origen[j];
    }
    destino[i] = '\0'; 
}

int main() 
{
    int max=100;
    char cadena1[max];
    char cadena2[max];

    cout<<"introdusca el texto para cadena1: ";
    cin.getline(cadena1,max);

    cout<<"introduca el texto para cadena2: ";
    cin.getline(cadena2, max);

    mistrcat(cadena1, cadena2);

    cout<<"finalmente la  cadena1 es: "<<cadena1<<endl;

    return 0;
}

