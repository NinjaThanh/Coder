#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int tam;
	double d;
	double s=0;
	for(;n;)
	{
		d=n%2;
		s=s*10+d; 
		tam=n/2;
		n=tam;
	} 
	int du;
	int a=0;
	int m=s;
	for(;m;)
	{
		du=m%10;
		a=a*10 + du;
		m=m/10;
	} cout<<a;
	
}
