#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b;
	cin>>a>>b;
	for(int i=0; i<a; i++)
	{
		for(int j=0; j<b; j++)
		{
			if(i==0 || j==0 || i==a-1 || j==b-1)
			{
				cout<<" * ";
			}
			else
			{
				cout<<"   ";
			}
		}
		cout<<endl;
	}
}
