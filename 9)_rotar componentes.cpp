#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x[100];

    cout <<"Ingrese el numero de elementos: "<<endl;
    cin>>n;

    cout <<"\nIngrese los elementos: "<< endl;

   
    for (int i = 1; i <= n; i++) {
        cin>>x[i];
    }

   
    int aux=x[n];

 
    for (int i = n; i >= 1; i--) {
        x[i] = x[i - 1];
    }

  
    x[1]=aux;

    cout <<"Vector rotado una posicion hacia la derecha: "<< endl;
    
    for (int i=1;i<=n;i++) {
        cout<<x[i]<< " ";
    }
    cout<<endl;

    return 0;
}

