#include <iostream>
#include <cstdlib> 
#include <cctype>  

using namespace std;

int main() {
    const int max= 1000; 
    char tex[max];
    char digitos[max];
    
    
    cout << "Ingrese una cadena: ";
    cin.getline(tex, max);
    

    int j = 0;
    for (int i = 0; tex[i] != '\0'; i++) {
        if (isdigit(tex[i])) {
            digitos[j++] = tex[i];
        }
    }
    digitos[j]='\0'; 
    
   
    int n=atoi(digitos);
    
   
    n+=2;
    
   
    cout<<"El resultado es:"<<n<< endl;
    
    return 0;
}

