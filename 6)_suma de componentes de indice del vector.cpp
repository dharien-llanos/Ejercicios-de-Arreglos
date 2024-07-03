#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,x[100];
	cout<<"ingrese el numero de elementos que desea ingresar: "<<endl;
	cin>>n;
	
	cout<<"ingrese los elementos: "<<endl;
	
	for(int i=1;i<=n;i++)
	{
		cin>>x[i];
		
	}
	
	int sumapares=0;
	int sumaimpares=0;
	for(int i=1;i<=n;i++)
	{
	
	if(i%2==0)
	{
		sumapares+=x[i];
	}
	
	else
	{
		sumaimpares+=x[i];
	}
	
	
	}
	
	cout<<"la suma de los pares es: "<<sumapares<<endl;
	cout<<"la suma de los impares es: "<<sumaimpares<<endl;
	return 0;
}
