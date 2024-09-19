#include<bits/stdc++.h>
using namespace std ;
void input(int a[] ,int n)
{
	for(int i=0 ; i<n ;i++)
	cin>>a[i];
}
void output(int a[] ,int n)
{
	for(int i=0 ; i<n ;i++)
	{
	cout<<a[i]<<" ";
	}
}
void tacharr(int a[] , int b[] , int c[] , int n , int &nb , int &nc)
{
	nb = 0;
	nc = 0;
	for(int i=0 ; i<n ; i++)
	{
		if(a[i]%2==0)
		{
			b[nb] = a[i];
			nb++;
		}
		else
		{
			c[nc] = a[i];
			nc++;
		}
	}
	
}
int main ()
{
	int a[1000] , b[1000] , c[1000];
	int n , nb , nc;
	cout<<"Nhap n : ";cin>>n;
	input(a,n);
	output(a,n);
	tacharr(a,b,c,n,nb,nc);
	cout<<"Mang so phan tu chan : ";
	output(b,nb);
	cout<<endl;
	cout<<"Mang so phan tu le : ";
	output(c,nc);
}
