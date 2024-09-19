#include<bits/stdc++.h>
using namespace std;
typedef struct ps {int t,m; }; //kieu du lieu phan so
//void Nhap(ps &a) //them tham bien "&" de nhap them phan so khac neu muon 
//{
//	cout<<"\nTu so: "; cin>>a.t;
//	do
//	{
//		cout<<"Nhap mau so: "; cin>>a.m;
//	} while (a.m==0);
//}
//void In(ps a)
//{
//	cout<<a.t<<"/"<<a.m;
//}
//ps operator+(ps a, ps b) //toan tu 
//{
//	//khai bao phan so t (ps t) la toan tu cua 2 phan to a, b
//	ps t; t.t= a.t*b.m + b.t* a.m;
//	      t.m= a.m*b.m;
//	      return t;
//}
//int main()
//{
//	ps a,b,c;
//	cout<<"Nhap 2 phan so a,b: ";
//	Nhap(a);
//	Nhap(b);
//	c=a+b; 
//	cout<<"a + b = "; In(c) ;
//}

istream &operator>>(istream &is, ps &a) //intput->istream
{
	cout<<"\nTu so: "; is>>a.t;
	do
	{
		cout<<"Nhap mau so: "; is>>a.m;
		
	} while (a.m==0);
	return is;
}
ostream &operator<<(ostream &os, ps a) //output->ostream
{
	os<<a.t<<"/"<<a.m;
	return os;
}
ps operator/(ps a, ps b) //toan tu 
{
	//khai bao phan so t (ps t) la toan tu cua 2 phan to a, b
	ps t; t.t= a.t*b.m;
	      t.m=a.m*b.t;
	      return t;
	  }
int main()
{
	ps a,b,c;
	cout<<"Nhap phan so a: ";
	cin>>a;
	cout<<"\nNhap phan so b: ";
	cin>>b;
	c= a/b;
	cout<<"\na / b = "<<c;
}






























