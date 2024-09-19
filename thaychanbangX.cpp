#include<bits/stdc++.h>
using namespace std;
int Input(int *a, int n)
{
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
}
int Set(int *a, int x, int n)
{
	cout<<"Nhap so thay the: ";
	cin>>x;
	for(int i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
			a[i]=x;
		}
	} 
}
int Ouput(int *a, int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}
int main()
{
	int n;
	cin>>n;
	int x; 
	int *a=new int[n];
	Input(a,n);
	Set(a,x,n);
	cout<<"--------------"<<endl;
	Ouput(a,n);
}
