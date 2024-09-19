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

int insonguyento(int n)
{
	int dem=0;
	int i=1;
	while(dem<n)
	{
		
		if(kiemtra(i)==true)
		{
			cout<<i<<" ";
			dem++;
		}
		i++;
	}
}
int main()
{
	int n;
	cout<<" nhap n = ";cin>>n;
	cout<<n<<" so ngyen to dau tien la : "<<endl;
	insonguyento( n);
}
