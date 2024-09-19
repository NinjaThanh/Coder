#include<bits/stdc++.h>
using namespace std;
typedef struct ps{int t,m;}; //kieu du lieu phan so
void Nhap(ps &a)
{
	cout<<"\nTu so: "; cin>>a.t;
	do
	{
		cout<<"Nhap mau so: "; cin>>a.m;
	} while (a.m==0);
}
void In(ps a)
{
	cout<<a.t<<"/"<<a.m;
}
ps operator+(ps a, ps b) //toan tu 
{
	ps t; t.t= a.t*b.m + b.t* a.m;
	      t.m= a.m*b.m;
	      return t;
}
int main()
{
	ps a,b,c;
	cout<<"Nhap 2 phan so a,b: ";
	Nhap(a);
	Nhap(b);
	c=a+b; 
	cout<<"a + b = "; In(c) ;
}

