#include<bits/stdc++.h>
using namespace std;

void Input(int n, int m, int **a)
{
	for(int i=0;i<m;i++)
	{
		a[i]=new int[m];
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>a[i][j];
		}
	}
}
void Max_2(int n, int m, int **a)
{
	int max=0;
	int k=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(a[i][j]>max)
			{
				max=a[i][j];
			}
		}
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(a[i][j]>k && a[i][j]<max)
			{
				k=a[i][j];
			}
		}
	} cout<<"Max_2: "<<k;
}
int main()
{
	int n,m; cin>>n>>m;
	int **a=new int*[n];
	Input(n,m,a);
	Max_2(n,m,a);
	
}
