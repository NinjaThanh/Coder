#include<iostream>
using namespace std;
int main()
{
	int n, d=0, a[1000]; 
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[i]>(a[j]*2))
			{
				d++;
			}
		}
	}
	cout<<d;
}
