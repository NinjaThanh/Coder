#include<bits/stdc++.h>
using namespace std;
int USC(int n)
{
	for(int i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			return true;
		}
	}
}
int KtrNT(int n)
{
	if(USC(n)==true)
	{
		if(USC(n)<2)
		{
			return false;
		}
		else
		{
			for(int i=2;i<=sqrt(n);i++)
			{
				if(USC(n)%i==0)
				{
					return false;
				}
				cout<<USC(n)<<"  ";
			}
		}
	}
}
//int IN(int n)
//{
//	if(KtrNT(n)==true)
//	{
//		cout<<n<<" ";
//	}
//}
int main()
{
	int n; cin>>n;
	USC(n);
	KtrNT(n);
//	int b=IN(n);
//	cout<<b;
}
