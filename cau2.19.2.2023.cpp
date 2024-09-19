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
int main()
{
	int n;
	cout<<" nhap n = ";cin>>n;
	
	int kt = kiemtra(n);
	if(kt==true)
	{
		cout<<n<<" la so nguyen to "<<endl;
	}
	else 
	{
		cout<<n<<" khong phai so nguyen to "<<endl;
	}
	for(int i=n-1;i>=2;i--)
	{
		if(kiemtra(i)==true)
		{
			cout<<" so nguyen to nho va gan n nhat la : "<<i<<endl;
			break;
		}
	}
}
