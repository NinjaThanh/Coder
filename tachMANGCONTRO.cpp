#include<bits/stdc++.h>
using namespace std;
int Nhap(int *a, int n)
{
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
}
int Tach(int *a, int n)
{
	int *b=new int[];
	int vitri=0;
	int vt=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]%2!=0)
		{
			b[vitri]=a[i];
			vitri++;
			cout<<b[vitri]<<" ";
		}
		else
		{
			b[vt]=a[i];
			vt++;
			cout<<b[vt]<<" ";
		}
	}
}
int main()
{
	int n;
	cin>>n;
	int *a=new int[n];
	Nhap(a,n);
	Tach(a,n);
}
