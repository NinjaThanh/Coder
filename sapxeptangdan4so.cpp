#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d;
    int max=0;
    cin>>a>>b>>c>>d;
    if(a>b)
    {
    	max=a;
    	a=b;
    	b=max;
	}
	if(b>c)
	{
		max=b;
		b=c;
		c=max;
	}
	if(c>d)
	{
		max=c;
		c=d;
		d=max;
	}
	cout<<a<<b<<c<<d;
}
