#include<bits/stdc++.h>
using namespace std;
int Nhap(int *a, int n)
{
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
}
int In(int *a, int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
}
int Them(int *a, int n)
{
	int vitri, ptu;
	cin>>vitri;
	cin>>ptu;
	if(vitri>n)
	{
		vitri=n;
	}
	//vitri-1 de dua ve dung voi vi tri o mang dau vi mang dau chay tu 0
	//n-1 de xoa di 1 phan tu cuoi tao khoang trong de chen
	//i-- de xet tu cuoi ve den vitri-1
	for(int i=n-1;i>=vitri-1;i--)
	{
		a[i+1]=a[i];
		a[vitri-1]=ptu;
	}
}
int main()
{
	int n;
	cin>>n;
	int *a=new int[n];
	Nhap(a,n);
	In(a,n);
	Them(a,n);
	In(a,n);
}
