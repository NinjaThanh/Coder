#include<bits/stdc++.h>
using namespace std;
int Ktr(int n)
{
	if(n<2)
	{
		return false;
	}
	else
	{
		for(int i=2;i<=sqrt(n);i++)
		{
			if(n%i==0)
			{
				return false;
			}
		}
		return true;
	}
}
int In(int n)
{
	int max=0;
	for(int i=n;i>=2;i--)
	{
			if(n==2)
	{
		cout<<"Khong co so NT lon thu 2!"<<endl;
		return false;
	}
	else{
		if(Ktr(i)==true)
		{
			if(i>max)
			{
				max=i;
			}
			if(i<max)
			{
				if(max==0)
				{
					return 0;
				}
				else
				{
					return i;
				}
			}
		}
	}
	}
}
int main()
{
	int n; 
	do
	{
		cin>>n;
		if(n%2==0 && n>2)
		{
			cout<<"Nhap lai!"<<endl;
		}
	}
	while(n%2==0 && n>2);
	Ktr(n);
	int nt=In(n);
	cout<<nt;
}


















