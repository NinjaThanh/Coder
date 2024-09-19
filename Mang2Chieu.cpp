#include<bits/stdc++.h>
using namespace std;
int Nhap(int **a, int n, int m)
{
	for(int i=0;i<n;i++)
	{
		a[i]=new int[m];
	}	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cout<<"Nhap "<<"["<<i<<"]"<<"["<<j<<"]"<<": ";
			cin>>a[i][j];
		}
	}
}
int In(int **a, int n, int m)
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
int Sum(int **a, int n, int m)
{
	long s=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			s = s + a[i][j];
		}
	}cout<<"Sum: "<<s<<endl;
}
int Tich(int **a, int n, int m)
{
	double t=1;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			t = 1.0*(t*a[i][j]);
		}
	}cout<<"Tich: "<<t<<endl;
}
int TrungB(int **a, int n, int m)
{
	double sum=0;
	for (int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			sum = sum + a[i][j];
		}
	}cout<<"Trung binh: "<<1.0*sum/(n*m);

}
int main()
{
	int n,m;
	cin>>n>>m;
	int **a=new int *[n];
	Nhap(a,n,m);
	In(a,n,m);
	Sum(a,n,m);
	Tich(a,n,m);
	TrungB(a,n,m);
}
