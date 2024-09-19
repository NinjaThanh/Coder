#include<bits/stdc++.h>
using namespace std;
int Nhap(int *a, int n)
{
	for(int i=0; i<n; i++)
	{
		cout<<"Nhap phan tu "<<i<<": ";
		cin>>a[i];
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
		for(int i=2; i<=sqrt(n); i++)
		{
			if(n%i==0)
			{
				return false;
			}
		}
		return true;
	}
}
int InNT(int *a, int n)
{
	
	int max=0;
	for(int i=0;i<n;i++)
	{
		
		if(Ktr(a[i])!=true)
		{
			if(a[i]>max)
			{
				max=a[i];
			}
		}
	} return max;
}
int main()
{
	int n;
	cout<<"Nhap n: "; cin>>n;
	int *a=new int[n];
	Nhap(a,n);
	Ktr(n);
	int nt=InNT(a,n);
	cout<<"So nguyen to max: "<<nt;
	return 0;
}
