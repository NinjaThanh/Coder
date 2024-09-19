#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int min=1;
	for(int i=3;i<=n;i+=2)
	{
		if(n%i==0 && i%2!=0)
		{
			min=i;
		}
	}
	cout<<min<<endl;
	int max=1;
	while(n%2==0)
	{
		n=n/2;
		max=max*2;
	}
	cout<<max<<endl;
	
}
