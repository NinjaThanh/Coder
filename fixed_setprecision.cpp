#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,x;
	double n1=1;
	cin>>x>>n;
	double s=0;
	for(int i=1;i<=n;i++)
	{
		n1=n1*i;
		s= s + 1.0*pow(x,i)/n1;
	} cout<<fixed<<setprecision(2)<<s;
}
