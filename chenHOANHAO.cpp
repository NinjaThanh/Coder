#include<bits/stdc++.h>
using namespace std;
int Nhap(int *a, int n)
{
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
}
int Chen(int *a, int n)
{
	double m;
	m=n%2;
	int k=(n/2);
	if(m==0)
	{
	    for(int i=0;i<n;i++)
	    {
		 	cout<<a[i]<<" "<<a[k]<<" ";
		 	k++;
		 	if(k==n)
		 	{
		 		return 0;
			 }
		}		
	}
}
int main()
{
	int n; cin>>n;
	int *a=new int[n];
	
	Nhap(a,n);
	Chen(a,n);;
	
}
