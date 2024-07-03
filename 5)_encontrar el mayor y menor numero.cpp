#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,x[100];
	cout<<"ingrese cuantos numeros desea ingresar: "<<endl;
	cin>>n;
	
	cout<<"ingrese los numeros: "<<endl;
int aux;
	for(int i=0;i<n;i++)
	{
		cin>>x[i];
		aux=x[i];
	}
	int mayor=0;
	int menor=aux;
	int cont=0;
	int cont2=0;
	for(int i=0;i<n;i++)
	{
		
		if(mayor<x[i])
		{
			mayor=x[i];
			
		}
		
		
		if(menor >x[i])
		{
			menor=x[i];
			
		}
	}
	
	
	for(int i=0;i<n;i++)
	{
		if(mayor==x[i])
		{
			cont++;
		}
		
		if(menor==x[i])
		{
			cont2++;
		}
	}
	cout<<"el mayor es: "<<mayor<<endl;
	cout<<"y sus repeticiones son: "<<cont;
	cout<<endl;
	
	cout<<"____________________"<<endl;
		cout<<"el menor es: "<<menor<<endl;
		cout<<"y sus repeticiones son: "<<cont2;
		return 0;
}
