#include <iostream>
#include <string.h> 

using namespace std;

bool esLetra(char c)
 {
    return (c>='a' && c<='z') || (c>='A' && c<='Z');
}

char aMinuscula(char c) 
{
    if (c>='A' && c<='Z') {
        return c + ('a' - 'A'); 
    }
    return c;
}

bool esPalindromo(char *frase) 
{
    int len=strlen(frase);
    int izquierda=0;
    int derecha=len - 1;
    
    while (izquierda < derecha) 
	{
        
        while (izquierda < derecha && !esLetra(frase[izquierda])) 
		{
            izquierda++;
        }
      
        while (izquierda < derecha && !esLetra(frase[derecha]))
		 {
            derecha--;
        }
        
        if (aMinuscula(frase[izquierda]) != aMinuscula(frase[derecha])) 
		{
            return false;
        }
        
        izquierda++;
        derecha--;
    }
    
    return true;
}

int main() {
    const int max=1000;
    char frase[max];
    cout << "Ingrese una frase para verificar si es un palindromo: ";
    cin.getline(frase, max);
    if (esPalindromo(frase)) 
	{
        cout<<"La frase es un palindromo"<<endl;
    } else 
	{
        cout<<"La frase no es un palindromo"<<endl;
    }
    
    return 0;
}

