#include<bits/stdc++.h>
using namespace std;
int In(int a[], int n)
{
	for(int i=1; i<=n; i++)
	{
		cin>>a[i];
	}
}
int Dao(int a[], int n)
{
	for(int i=n;i>=1;i--)
	{
		
		cout<<"Phan tu: "<<(n-i)<<": "<<a[i]<<endl;
		
	}
}
int main()
{
	int n; cin>>n;
	int a[n];
	In(a,n);
	Dao(a,n);
}
