#include<bits/stdc++.h>
using namespace std;

int Intput(int *a, int n)
{
	for(int i=0; i<n; i++)
	{
		cin>>a[i];
	}
}
int Output(int *a, int n)
{
	for(int i=0; i<n; i++)
	{
		cout<<a[i]<<" ";
	}
}
int Them(int *a,int n)
{
	int pt,vt;
	cout<<"Nhap vitri can them: "; cin>>vt;
	cout<<"Nhap pt can them: ";cin>>pt;
	for(int i=0;i<n+1;i++)
	{
		a[vt]=pt;
		vt++
		cout<<a[i]<<a[i==vt]<<" ";
	}
}
int main()
{
	int n; cin>>n;
	int *a=new int[n];
	Intput(a,n);
	Output(a,n);
	Them(a,n);
}
