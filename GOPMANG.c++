#include<bits/stdc++.h>
using namespace std;
int Nhap(int a[], int b[], int n, int m)
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
int Gop(int a[], int b[], int c[], int n, int m, int &ic)
{
	ic=0;
    for(int i=0;i<n;i++)
    {
        c[ic]=a[i];
        ic++;
    }
    for(int j=0;j<m;j++)
    {
        c[ic]=b[j];
        ic++;
    }
}
int Swwap(int c[], int ic)
{
	cout<<"Mang da gop: ";
	for(int i=0;i<ic;i++)
	{
		cout<<c[i]<<" ";
	}
}
int main()
{
    int n,m,ic;
    cin>>n>>m;
    int a[n],b[m],c[10000];
    Nhap(a,b,n,m);
    Gop(a,b,c,n,m,ic);
    Swwap(c,ic);
    for(int i=0;i<ic;i++)
	{
		for(int j=i+1;j<ic;j++)
		{
		if(c[i]<c[j])
		{
			swap(c[i],c[j]);// 9 7 2 5 8
			
		}
	}
	}
	cout<<"\nMang da gop va giam: ";
	for(int i=0;i<ic;i++)
	{
		cout<<c[i]<<" ";
	}
}