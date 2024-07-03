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
	cout<<"el vector invertido es: "<<endl;
	for(int i=n;i>0;i--)
	{
	cout<<x[i]<<" ";
	}
	return 0;
}
