#include<bits/stdc++.h>
using namespace std;
int Nhap(int *a,int n)
{
	cout<<"Nhap noi dung mang 1: "<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<"Nhap phan tu "<<i<<": ";
		cin>>a[i];
	}
	cout<<endl;
}
int Nhap1(int *b, int m)
{
	cout<<"Nhap noi dung mang 2: "<<endl;
	for(int j=0;j<m;j++)
	{
		cout<<"Nhap phan tu "<<j<<": ";
		cin>>b[j];
	}
	cout<<endl;
}
int Gop(int *a, int *b, int n, int m)
{
	
}
int main()
{
	int n,m;
	cout<<"Nhap gioi han mang 1: "; cin>>n;
	cout<<"\nNhap gioi han mang 2: "; cin>>m;
	int *a =new int[n];
	int *b=new int[m];
	Nhap(a,n);
	Nhap1(b,m);
	Gop(a,b,n,m);
}
