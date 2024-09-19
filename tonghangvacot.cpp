#include<bits/stdc++.h>
using namespace std;
int main()
{
	int **a,m,n;
	cin>>m>>n;
	a=new int*[m];
	for(int i=0;i<m;i++) a[i]=new int[n];
	for(int i=0; i<m;i++)
	   for(int j=0;j<n;j++)
	   a[i][j]=rand()%100;
	cout<<"\nNoi dung cua ma tran";
	for(int i=0;i<m;i++)
	{
		cout<<"\n";
		for(int j=0; j<n; j++)
		cout<<a[i][j]<<" ";
	}
	int sum=0;
	for(int i=0;i<m;i++)
	{
		//sum = sum + a[i][j];
		cout<<"\n";
		for(int j=0;j<n;j++)
		{
			sum =sum + a[i][j];
		} cout<<"Tong hang"<<": "<<sum<<endl;
	}
		for(int i=0;i<n;i++)
	{
		//sum = sum + a[i][j];
		cout<<"\n";
		for(int j=0;j<m;j++)
		{
			sum =sum + a[i][j];
		} cout<<"Tong cot"<<": "<<sum<<endl;
	} 
	int max=0;
		for(int i=0;i<m;i++)
	{
		cout<<"\n";
		for(int j=0;j<n;j++)
		{
			if(a[i][j]>max)
			{
				max=a[i][j];
				cout<<":"<<max;
			} 
		} 
	}
}
