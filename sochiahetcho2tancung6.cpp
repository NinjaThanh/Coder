//in ra so chia het cho 2, va tan cung so chia het cho 2 la 6
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		if(i%2==0)
		{
			if(i%10==6)
			{
				cout<<i<<" ";
			}
		}
	}
}
