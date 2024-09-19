#include<bits/stdc++.h>
using namespace std;
int Nhap(int **a, int n, int m)
{
	for(int i=0;i<n;i++)
	{
		a[i]=new int[m];
	}	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cout<<"["<<i<<"]"<<"["<<j<<"]"<<": ";
			cin>>a[i][j];
		}
	}
}
int In(int **a, int n, int m)
{
	cout<<"Noi dung matran: "<<endl;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}	
}
int Sum(int **a, int n, int m)
{
	long s = 0;
	for(int i=0;i<n;i++)
	{
		if(i%2!=0)
		{
			for(int j=0;j<m;j++)
		{
		    s = s + a[i][j];
		}
	}
	} cout<<"Tong hang chan: "<<s<<endl;
}
int Max(int **a, int n, int m)
{
	int max=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(a[i][j]>max)
			{
				max=a[i][j];
			}
		} 
	} cout<<"Max: "<<max;
}
int main()
{
	int n,m;
	cin>>n>>m;
	int **a=new int*[n];
	Nhap(a,n,m);
	In(a,n,m);
	Sum(a,n,m);
	Max(a,n,m);
}
