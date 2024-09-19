#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d;
    //int max=0;
    cin>>a>>b>>c>>d;
    if(a<=b<=c<=d)
    {
    	cout<<a<<b<<c<<d;
	}
	else // a>=b>=c>=d
	{
		cout<<d<<c<<b<<a;
	}
	if(a<=b<=d<=c)
	{
		cout<<a<<b<<d<<c;
	}
	else //a>=b>=d>=c
	{
		cout<<c<<d<<b<<a;
	}
	if(a<=d<=b<=c)
	{
		cout<<a<<d<<b<<c;
	}
	else //a>=d>=b>=c
	{
		cout<<c<<b<<d<<a;
	}
	if(a<=d<=c<=b)
	{
		cout<<a<<d<<c<<b;
	}
	else //a>=d>=c>=b
	{
		cout<<b<<c<<d<<a;
	}
	if(d>=a>=b>=c)
	{
		cout<<d<<a<<b<<c;
	}
	else
	{
		cout<<c<<b<<a<<d;
	}
	if(d>=a>=c>=b)
	{
		cout<<d<<a<<c<<b;
	}
	else
	{
		cout<<b<<c<<a<<d;
	}
	if(d>=c>=a>=b)
	{
		cout<<d<<c<<a<<b;
	}
	else
	{
		cout<<b<<a<<c<<d;
	}
	if(d>=b>=c>=a)
	{
		cout<<a<<b<<c<<d;
	}
	else
	{
		cout<<d<<c<<b<<a;
	}
}



















