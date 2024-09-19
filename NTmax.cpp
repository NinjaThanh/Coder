#include<bits/stdc++.h>
using namespace std;
int Nhap(int *a, int n)
{
	for(int i=0; i<n;i++)
	{
		cout<<"Nhap "<<i<<": ";
		cin>>a[i];
	}
}
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
int In(int *a, int n)
{
	int max=0;
	int dem=0;
	for(int i=0; i<n;i ++)
	{
		if(Ktr(a[i])==true)
		{
			if(a[i]>max)
			
			{
				max=a[i];
			}
		}
		else
		{
			dem++;
		}
	} if(max==0)
	{
		cout<<"Khong co max: "<<endl;
	}
	else
	cout<<max<<endl;
	if(dem==n)
	
	{
		cout<<"NO";
	}
}
int main()
{
	int n;
	cin>>n;
	int *a=new int[n];
	Nhap(a,n);
	Ktr(n);
	In(a,n);

}
