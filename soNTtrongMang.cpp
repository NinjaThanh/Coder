#include<bits/stdc++.h>
using namespace std;
int Nhap(int *a, int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<"Nhap phan tu "<<i<<": ";
		cin>>a[i];
	}
}
int Xuat(int *a, int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}
int Ktr(int n)
{
	if(n<2)
	{
		return false;
	}
	else
	{
		for(int i=2;i<=sqrt(n);i++)
		{
			if(n%i==0)
			{
				return false;
			}
		}
		return true;
	}
}
int XuatNT(int *a, int n)
{
	for(int i=n;i>0;i--)
	{
		if(Ktr(a[i])==true)
		{
			return a[i];
		}
	}
}
int main()
{
	int n;
	cout<<"Nhap so phan tu: ";
	cin>>n;
	int *a=new int[n];
	Nhap(a,n);
	Xuat(a,n);
	Ktr(n);
	cout<<endl;
	int nt=XuatNT(a,n);
	cout<<"Nguyen to cuoi cung: "<<nt;
	return 0;
}
