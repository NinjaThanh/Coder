#include<bits/stdc++.h>
using namespace std;
int Nhap(int a[], int n)
{
	for(int i=0; i<n; i++)
	{
		cin>>a[i];
	}
}
int In(int a[], int n)
{
	for(int i=0; i<n; i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
}
int Xet(int a[], int b[], int n, int ib)
{
	for(int i=0; i<n; i++)
	{
		if(a[i]%2!=0)
		{
			b[ib]=a[i];
			ib++;
		}
	}
	for(int i=0;i<ib;i++)
	{
		cout<<b[i]<<" ";
	}
}
int main()
{
	int n,ib=0;
	cin>>n;
	int a[10000],b[ib];
	Nhap(a,n);
	In(a,n);
	Xet(a,b,n,ib);


}
