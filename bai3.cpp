#include<bits/stdc++.h>
using namespace std;

void nhap(int*a, int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<" nhap gia tri mang thu "<<i + 1<<" : ";
		cin>>a[i];
	}
}

void xuat(int*a, int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}
int daomang(int*a, int n)
{
	int dao;
		for(int i=0; i<n; i++)
		{
			for(int j=i+1; j<n; j++)
			{
				dao = a[i];
				a[i] = a[j];
				a[j] = dao;
			}
		}
}
int sapxepmanggiamdan(int*a, int n)
{
	int giam;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(a[i]>a[j])
			{
				giam = a[i];    
				a[i] = a[j];
				a[j] = giam; //hoan vi
			}
		}
	}
}

int thaydoivitri(int*a, int n)
{
	for(int i=0; i<n;i++)
	{
		for(int j=0; j<n; j++)
		{
			if(a[i]%2==0 && a[j]%2!=0)
			{
				swap(a[i], a[j]);
			}
		}
	}
}
int main()
{
	int n;
	cout<<" nhap so luong mang = ";cin>>n;
	
	int*a = new int [n];
	nhap(a, n);
	xuat(a, n);
	cout<<endl;
	
	daomang(a, n);
	cout <<"Mang dao: ";
	xuat(a, n); 
	cout <<endl;
	cout<<" mang duoc sap xep giam dan la : "<<endl;
	sapxepmanggiamdan(a, n);
	xuat(a, n);
	cout<<endl;
	
	cout<<" chan truoc le sau la : "<<endl;
	thaydoivitri(a, n);
	xuat(a, n);
	cout<<endl;
	 
}
