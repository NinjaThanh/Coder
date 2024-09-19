#include<bits/stdc++.h>
using namespace std;
int Intput(int *a, int n)
{
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
}
int Ktr(int *a, int n, int dem)
{
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			{
				a[j]='N';
			}	
		}
	}
}
int Output(int *a, int n, int dem)
{
	for(int i=0;i<n;i++)
	{
		if(a[i]!='N')
		{
			cout<<a[i]<<" ";
		}
	}
}
int main()
{
	int n; cin>>n;
	int *a=new int[n];
	int dem=0;
	Intput(a,n);
	Ktr(a,n,dem);
	Output(a,n,dem);
}
