#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,tam;
	int du=0;
	int dem=0;
	int d=0;
	int s=0;
	cin>>n;
	for(;n;)
	{
		du=n%10;
		s=s*10+du;
		n=n/10;
		tam=du;
		dem++;
		if(tam%2!=0)
		{
			d++;
		}
	} 
	if(dem==d)
	{
		cout<<"YES";
	}
	else
	{
		cout<<"NO";
	}
}
























