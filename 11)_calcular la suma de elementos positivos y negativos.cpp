#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,x[100];
	cout<<"ingrese cuantos elementos desea ingersar: "<<endl;
	cin>>n;
	float sumanegativo=0;
	float sumapositivo=0;
	cout<<"ingrese los elementos: "<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>x[i];
	}
	
	
	for(int i=0;i<n;i++)
	{
		if(x[i]<0)
		{
			sumanegativo=sumanegativo+=x[i];
		}
		
		if(x[i]>0)
		{
			sumapositivo+=x[i];
		}
		
	}
	
	cout<<"\n la suma de los numeros negativos es: "<<sumapositivo;
	cout<<"\n la suma de los numeros positivos: "<<sumanegativo;
	return 0;
}
