#include<bits/stdc++.h>
using namespace std;
int Ouput(int *a, int n)
{
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
}
int Set(int *a, int n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			for(int k=1; k<n;k++)
			{
				if(a[i]%k==0 || a[j]%k==0)
				{
					
				}
			}
		}
	}
	
}
int main()
{
	int n;
	cin>>n;
	int *a = new int[n];
	Ouput(a,n);

	Set(a,n);
	return 0;
	
}
