#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a, b;
	cin>>a>>b;
	int tong=0;
	for(int i=a;i<=b;i++)
	{
		if(i%2==0)
		{
			tong = tong + i; 
		}
	}
	cout<<tong<<endl;
}
