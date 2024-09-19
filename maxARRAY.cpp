#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n; cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int max=0;
	int dem=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]%2!=0)
		{
			dem++;
		}
		else
		{
			if(a[i]>max)
			{
				max=a[i];
			}
		}
	}
	if(dem==n)
	{
		cout<<"NO!";
	}
	if(max==0)
	{
		return 0;
	}
	else
	{
		cout<<max;
	}

}

