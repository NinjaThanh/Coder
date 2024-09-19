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
double Tinh(int *a, int n)
{
	double x=1,s=0,sum;
	for(int i=0;i<n;i++)
	{
		s += a[i];
		x = x*a[i];
	}cout<<s<<endl;
	cout<<x<<endl;
	cout<<s/n<<endl;
}
int SapXep(int *a, int n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[i]<a[j])
			swap(a[i],a[j]);
		}
	}
	for(int i=0; i<n; i++)
	{
		cout<<a[i]<<" ";
	} cout<<endl;
}
int MaxMin(int *a, int n)
{
	int max=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
		
	} cout<<max<<endl;
	for(int i=0; i<n; i++)
	{
		if(a[i]<max)
		{
			max=a[i];
		}
	}cout<<max<<endl;
}
int Tim(int *a, int n)
{
	int dem=1,max=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]==a[i+1])
		{
			dem++;
		}
	}
	return dem;
}
int main()
{
	int n;
	cout<<"Nhap so phan tu: ";
	cin>>n;
	int *a=new int[n];
	Nhap(a,n);
	Xuat(a,n);
	cout<<endl;
	Tinh(a,n);
	SapXep(a,n);
	MaxMin(a,n);
	int tim=Tim(a,n);
	cout<<tim;
	return 0;
}
