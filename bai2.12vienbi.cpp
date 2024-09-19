#include<bits/stdc++.h>
using namespace std;
int Nhap(int a[], int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<"Nhap phan tu "<<i<<": ";
		cin>>a[i];
	}
}
int Ktr(int a[], int n)
{
	//chia 3
	int dem=0, dem1=0, dem2=0;
	long  s=0, s1=0, s2=0;
	for(int i=0; i<n;i++)
	{
		s =s+ a[i];
		dem++;
		if(dem==4)
		{
			cout<<s<<" ";
			break;
		}
	}
	for(int i=4; i<n;i++)
	{
		s1 =s1+ a[i];
		dem1++;
		if(dem1==4)
		{
			cout<<s1<<" ";
			break;
		}
	} 
	for(int i=8; i<n;i++)
	{
		s2 =s2+ a[i];
		dem2++;
		if(dem2==4)
		{
			cout<<s2<<" ";
			break;
		}
	} 
    int be;
    int sum=0,sum1=0;
    if(s <= s1 && s <= s2) 
	{
	    be = s;
    }
    if(s1 <= s && s1<= s2) 
    {
    	be = s1;
	}
    if(s2 <= s && s2 <= s1) 
    {
    	be = s2;
	}
	if(be==s)
	{
		for(int i=0; i<2;i++)
		{
			sum += a[i];
		}
		for(int i=2;i<4;i++)
		{
			sum1 += a[i];
		}
		if(sum<sum1)
		{
			for(int i=0;i<2;i++)
		{
			if(a[i]<a[i+1])
			{
			cout<<"\nVitri: "<<i;
			return a[i];
			}
			else
			{
			cout<<"\nVitri: "<<i+1;
			return a[i+1];
			}
	
		}
		}
		else if(sum>sum1)
		{
			for(int i=2;i<4;i++)
		{
			if(a[i]<a[i+1])
			{
			cout<<"\nVitri: "<<i;
			return a[i];
			}
			else
			{
			cout<<"\nVitri: "<<i+1;
			return a[i+1];
			}
			}
		}
		else
		{
			return 0;
		}	
	}
	if(be==s1)
	{
		for(int i=4;i<6;i++)
		{
			sum += a[i];
		}
		for(int i=6; i<8;i++)
		{
			sum1 += a[i];
		}
		if(sum<sum1)
		{
			for(int i=4;i<6;i++)
		{
				if(a[i]<a[i+1])
			{
			cout<<"\nVitri: "<<i;
			return a[i];
			}
			else
			{
			cout<<"\nVitri: "<<i+1;
			return a[i+1];
			}
		}
		}
		else if(sum>sum1)
		{
			for(int i=6;i<8;i++)
		{
			if(a[i]<a[i+1])
			{
			cout<<"\nVitri: "<<i;
			return a[i];
			}
			else
			{
			cout<<"\nVitri: "<<i+1;
			return a[i+1];
			}
			}
		}
		else
		{
			return 0;
		}	
	}
	if(be==s2)
	{
		for(int i=8;i<10;i++)
		{
			sum += a[i];
		}
		for(int i=10; i<12;i++)
		{
			sum1 += a[i];
		}
		if(sum<sum1)
		{
			for(int i=8;i<10;i++)
		{
			if(a[i]<a[i+1])
			{
			cout<<"\nVitri: "<<i;
			return a[i];
			}
			else
			{
			cout<<"\nVitri: "<<i+1;
			return a[i+1];
			}
		}
		}
		else if(sum>sum1)
		{
			for(int i=10;i<12;i++)
		{
			if(a[i]<a[i+1])
			{
			cout<<"\nVitri: "<<i;
			return a[i];
			}
			else
			{
			cout<<"\nVitri: "<<i+1;
			return a[i+1];
			}
		}
		}
		else
		{
			return 0;
		}
	}
}
int main()
{
	int n=12;
	int a[n];
	Nhap(a,n);
	int kt=Ktr(a,n);
	cout<<endl<<"min: "<<kt;
}
