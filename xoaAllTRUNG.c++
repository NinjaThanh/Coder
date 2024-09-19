#include<bits/stdc++.h>
using namespace std;
int Intput(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
}
int Ktr(int a[], int n, int d)
{
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[i]!=a[j])
			{
				for(int k=i;k<n;k++)
				{
					delete[]a;
				}
			}
		} 
	}
	for(int k=(n-1);k>=0;k++)
	{
		cout<<a[k]<<" ";
	}
}
int main()
{
	int n,d=0;
	cin>>n;
    int a[n];
	Intput(a,n);
    int nt=Ktr(a,n,d);
    //Output(a,n);
    cout<<nt;
	return 0;
}
