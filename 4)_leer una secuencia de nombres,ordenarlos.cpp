#include <iostream>
#include <string.h> 

using namespace std; 

int main() {
   int maximo_nombres = 100;
    char nombres[maximo_nombres][100]; 
    int n=0;

    cout << "Ingrese los nombres (escriba 'fin' para terminar): "<<endl;

   
    while(true) 
	{
        cin>>nombres[n];
        if(strcmp(nombres[n], "fin")==0) 
		{
            break;
        }
        ++n;
    }

    
    for (int i=0;i<n-1;++i) {
        for (int j=i + 1;j<n;++j) 
		{
            if (strcmp(nombres[i], nombres[j]) > 0) {
               
                char temp[100];
                strcpy(temp, nombres[i]);
                strcpy(nombres[i],nombres[j]);
                strcpy(nombres[j],temp);
            }
        }
    }

    
    cout << "Nombres ordenados alfabeticamente: "<<endl;
    for (int i=0;i<n;++i) {
        cout<<nombres[i]<<"\n";
    }

    return 0;
}

