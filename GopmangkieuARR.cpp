#include<bits/stdc++.h>
using namespace std;
int Nhap(int a[], int b[], int c[], int n, int m)
{
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int j=0;j<m;j++)
	{
		cin>>b[j];
	}
}
int Gop(int a[], int b[], int c[], int n, int m)
{
	int vitri=0;
	for(int i=0;i<n;i++)
	{
		c[vitri]=a[i];
		vitri++;
	}
	for(int j=0;j<m;j++)
	{
		c[vitri]=b[j];
		vitri++;
	}
	for(int k=0;k<n+m;k++)
	{
		cout<<c[k]<<" ";
	}
}
int main()
{
	int n,m;
	cin>>n>>m;
	int a[n];
	int b[m];
	int c[n+m];
	Nhap(a,b,c,n,m);
	Gop(a,b,c,n,m);
}
