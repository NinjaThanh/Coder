#include<bits/stdc++.h>
using namespace std;
int kiemtra(int a, int b, int c)
{
	if(a>b)
	{
		if(b>c)
		{
			cout<<c<<" "<<b<<" "<<a<<endl;
		}
		else 
		{
			if(c<a)
			{
				cout<<b<<" "<<c<<" "<<a<<endl;
			}
			else 
			{
				cout<<b<<" "<<a<<" "<<c<<endl;
			}
		}
	}
	else 
	{
		if(a>c)
		{
			cout<<c<<" "<<a<<" "<<b<<endl;
		}
		else 
		{
			if(c<b)
			{
				cout<<a<<" "<<c<<" "<<b<<endl;
			}
			else 
			{
				cout<<a<<" "<<b<<" "<<c<<endl;
			}
		}
	}
}
int main()
{
	int a, b , c;
	cin>>a;
	cin>>b;
	cin>>c;
	kiemtra(a, b, c);
}
