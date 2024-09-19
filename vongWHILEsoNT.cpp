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
int InNT( int n)
{
	int dem=0;
	int i=2;
	while(dem<n)
	{
		if(Ktr(i)==true)
		{
		cout<<i<<" "; 
		dem++;
		}
		i++;
	}
}

int main()
{
	int n;
	cin>>n;
	Ktr(n);
	InNT(n);
	return 0;
}
