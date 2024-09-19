#include<bits/stdc++.h>
using namespace std;

void Nhap(int n, int m, int **a)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>a[i][j];
		}
	}
}

void In(int n, int m, int **a)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
}

void Sum(int n, int m, int **a)
{
	int s=0;
	int x; cin>>x;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(j==x)
			{
				if(a[i][x]%2!=0)
				{
					s =s + a[i][x];
				}
				// 00 01 02
				// 3   5  7
				
				// 10 11 12
				// 4   2  6
				
				// 20 21 22
				// 7   8  9
			}
		}
	}
	cout<<"Sum: "<<s;
}
int main()
{
	int n,m; cin>>n>>m;
	int **a=new int*[n];
	for(int i=0;i<m;i++)
	{
		a[i]=new int[m];
	}
	Nhap(n,m,a);
	cout<<endl;
	In(n,m,a);
	cout<<endl;
	Sum(n,m,a);
	
}
