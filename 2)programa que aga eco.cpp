#include <iostream>
#include <string.h> 
using namespace std;

int main() {
    char array[100];
   cout<<"Ingrese una oracion: ";
cin.getline(array,100);
    
 
    for (int i = 0; array[i] !='\0'; i++) {
        
        if (array[i]==' ') 
		{
            array[i]='\n';
        }
    }
   cout<<array<<endl;

    return 0;
}

