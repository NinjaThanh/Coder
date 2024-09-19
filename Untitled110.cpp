#include<bits/stdc++.h>
using namespace std;

int kiemtra(int n)
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
//int ktra(int*a, int n)
//{
//	if(n<2)
//	{
//		return false;
//	}
//	else
//	{
//		for(int i=2; i<sqrt(n); i++)
//		{
//			if(n%2==0)
//			{
//				return false;
//			}
//		} return true;
//	}
//}

int xuatsonguyento(int n)
{
	for(int i=0;i<=n;i++)
	{
		if(kiemtra(i)==true)
		{
			cout<<i<<" ";
		}
	}
}
int main()
{
	int n;
	cout<<" nhap n = ";cin>>n;
	
	xuatsonguyento( n);
}
