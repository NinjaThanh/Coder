#include<bits/stdc++.h>
using namespace std;
int Input(int *a, int n)
{
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
}
int Set(int *a,int n)
{
	int x=0;
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[j]==1)
			{
				swap(a[j],a[i]);
			}
		}
	} 
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
}

int main()
{
	int n;
	cin>>n;
	int *a=new int[n];
	Input(a,n);
	Set(a,n);
	cout<<"--------------"<<endl;
	//Ouput(a,n);
}
