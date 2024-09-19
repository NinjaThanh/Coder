#include<bits/stdc++.h>
using namespace std ;
// nhap xuat mang tim so nguyen am dau tien
void NhapMang(int*a , int n)
{
	for(int i=0 ; i<n ; i++)
	{
		cout<<"nhap phan tu thu "<<i+1<<" : ";
		cin>>a[i] ;
	}
}
void XuatMang(int*a , int n)
{
	for(int i=0 ; i<n ; i++)
	{
		cout<<a[i]<<" ";
	}
}
int SoAm (int*a , int n)
{
	for(int i=0;i<n;i++)
	{
		if(a[i]<0)
		{
		return a[i];
		}
	}
}
int TimSoChan (int*a,int n)
{
	int dem=0;
	for(int i=0 ; i<n ;i++)
	{
		if(a[i]%2==0)
		{
			cout<<a[i]<<" ";
			dem++ ;
		}
	}
		cout << dem;
}
int main ()
{
	int n ;
	cout <<"nhap n : ";
	cin >> n;
	int*a = new int[n];
	NhapMang(a,n);
	XuatMang(a,n);
	cout << endl;
	
	cout << SoAm(a,n);
	cout << endl;
	
	TimSoChan(a,n);
	
}
