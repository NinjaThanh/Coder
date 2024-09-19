#include<bits/stdc++.h>
using namespace std;
int Nhap(int *a, int n)
{
	for(int i=0; i<n; i++)
	{
		cout<<"Nhap "<<i<<": ";
		cin>>a[i];
	}
}
int Ktr(int *a, int n)
{
	for(int i=0;i<n;i++)
	{
		if(a[i]<0)
		{
			if(a[i]==a[i+1])
			{
				cout<<i<<" ";
			}
		}		
	}
}
int main()
{
	int n;
	cin>>n;
	int *a= new int[n];
	Nhap(a,n);
    Ktr(a,n);
}
