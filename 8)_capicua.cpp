#include <iostream>
using namespace std;

bool esCapicua(int num) {
    int aux=num;
    int inverso=0;

    while (aux>0) {
        inverso=inverso*10+aux % 10;
        aux/=10;
    }

    return num==inverso;
}

int main() {
    int num;

    cout<<"Ingrese un numero de 10 cifras: ";
    cin>>num;

    if(num>= 1000000000 && num<= 9999999999) 
	{
        if(esCapicua(num)) 
		{
            cout<<"El numero "<< num<<" es capicua"<< endl;
        } else {
            cout<<"El numero "<< num<<" no es capicua"<<endl;
        }
    } else 
	{
        cout<<"El numero ingresado no tiene 10 cifras"<<endl;
    }

    return 0;
}

