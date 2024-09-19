#include<bits/stdc++.h>
using namespace std;
int Ktr(int n)
{
	if(n<2)
	{
		return false;
	}
	else
	{
		for(int i=2;i<=sqrt(n);i++)
		{
			if(n%i==0)
			{
				return false;
			}
		}
		return true;
	}
}
int Xuat(int n)
{
	for(int i=n-1;i>=0;i--)
	{
		if(Ktr(i)==true)
		{
			return i;
		}
	}
}
int main()
{
	int n;
	cin>>n;
	Ktr(n);
	int nt = Xuat(n);
	cout<<nt;
	return 0;
}
