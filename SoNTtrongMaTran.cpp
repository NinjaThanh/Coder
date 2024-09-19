#include<bits/stdc++.h>
using namespace std;
int Nhap(int **a, int n, int m)
{
	for(int i=0 ;i<n ;i++)
	{
		for(int j=0; j<m; j++)
		{
			cout<<i<<j<<": ";
			cin>>a[i][j];
		}
	}
}
int Xuat(int **a, int n, int m)
{
	cout<<"\nMatra: "<<endl;
	for(int i=0 ;i<n ;i++)
	{
		for(int j=0; j<m; j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<"\n";
}
int Ktr(int m)
{
	if (m<2)
	{
		return false;
	}
	else
	{
		for(int j=2; j<=sqrt(m); j++)
	   {
	   	if (m%j == 0)
	   	{
	   		return false;
		   }
	   }
	   return true;
	}
}
int InNT(int **a, int n, int m)
{
	int dem=0;
	cout<<"So nguyen to trong matran: ";
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(Ktr(a[i][j])==true)
			{
				cout<<a[i][j]<<" ";
				dem++;
			}
		}
	} cout<<"\nco "<<dem<<" so nguyen to trong matran!";
}
int main()
{
	int n,m;
	cin>>n>>m;
	int **a=new int*[n];
	for(int i=0;i<n;i++)
	{
		a[i]=new int[m];
	}
	Nhap(a,n,m);
	Xuat(a,n,m);
	Ktr(m);
	InNT(a,n,m);
	return 0;
}
