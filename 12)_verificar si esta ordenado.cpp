#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,x[100];
	bool ordenado=true;
	cout<<"cuantos numeros desea ingersar: "<<endl;
	cin>>n;
	
	cout<<"ingrese los numeros: "<<endl;
	
	for(int i=0;i<n;i++)
	{
		cin>>x[i];
		
	}
	
	for(int i=0;i<n;i++)
	{
		
		if(x[i]>x[i+1])
		{
		ordenado=false;
		}
		
		
	}
	
	if(!ordenado)
	{
		cout<<"no esta ordenado "<<endl;
	}
	
	else
	{
		cout<<"si esta ordenado "<<endl;
	}
	return 0;
}
