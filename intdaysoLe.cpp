#include<bits/stdc++.h>
using namespace std;
int Nhap(int a[], int n)
{
	for(int i=0;i<n;i++)
	{
		cin>>a[i];	
	}
}
int In(int a[], int n)

{
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}
int Int(int a[], int b[], int n, int &vitri)
{
	vitri = 0;
	for(int i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
			b[vitri]=a[i];
			vitri++;
		}
	} 
}
int main()
{
	int n, vitri, a[10000], b[10000];
	cin>>n;

	Nhap(a,n);
	Int(a,b,n,vitri);
	In(b,vitri);
}
