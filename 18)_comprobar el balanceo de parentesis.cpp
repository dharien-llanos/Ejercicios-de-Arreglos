#include <iostream>
#include <string.h>

using namespace std;
bool balanceoParentesis( char *frase) {
    int cont=0; 
    int len=strlen(frase);
    for (int i=0; i<len;i++) {
        if (frase[i]=='(') {
            cont++; 
        } else if (frase[i]==')') {
            cont--; 
            if (cont<0) {
                return false;
            }
        }
    }
    return cont==0;
}

int main()
 {
     int max=1000;
    char frase[max];
    cout <<"Ingrese una frase con parentesis: ";
    cin.getline(frase, max);
    
    if(balanceoParentesis(frase)) 
	{
        cout<<"El balanceo de parentesis en la frase es correcto"<<endl;
    } else {
        cout<<"El balanceo de parentesis en la frase no es correcto"<<endl;
    }
    
    return 0;
}

