#include<bits/stdc++.h>
using namespace std;
#define MAX 100
int Nhap(int a[MAX], int n)
{
	
	for(int i=0; i<n; i++)
	{
		cout<<"Phan tu "<<i<<": ";
		cin>>a[i];
	}
}
int Xuat(int a[MAX], int n)
{
	
	for(int i=0; i<n; i++)
	{
		cout<<a[i]<<" ";
	}
}
int SapXep(int a[MAX], int n)
{
	
	int max=0;
	for(int i=0; i<n; i++)
	{
		for(int j=0;j<n;j++)
		{
			if(a[i]<a[j])
			{
				swap(a[i],a[j]);
			}
		}
	}
}
int main()
{
	int n;
	cin>>n;
	int a[MAX];
	Nhap(a,n);
	Xuat(a,n);
	cout<<endl;
	SapXep(a,n);
	Xuat(a,n);
}
