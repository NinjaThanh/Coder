#include <bits/stdc++.h>
using namespace std;
class Dayso {
	int n,*a;
	public: 
	Dayso(int n1=0){}
	void sinh (int n) {
		this->n=n;
		a=new int[n];
		for(int i=0;i<n;i++)
		a[i]= rand()%100;
	}
	void in(){
		cout<<"\n Noi dung day:\n";
		for(int i=0;i<n;i++) cout<<" "<<a[i];
		cout<<"\n";
	}
	void thaydoi(int d=2)
	{
		for(int i=0;i<n;i++)
		a[i]=a[i]+d;
		
	}
	Dayso (const Dayso &b)
	{
		n=b.n; if(n>0) a=new int [n];
		for (int i=0;i<n;i++) a[i]=b.a[i];
	}
	friend int gmax(Dayso b);
    friend istream & operator>>(istream &is,Dayso &b)
	{
	    cout<<"\n Nhap so phan tu:";cin>>b.n;
	    b.a=new int[b.n];
	    for(int i=0;i<b.n;i++)
		{
		    cout<<"nhap so thu"<<i+1<<":";cin>>b.a[i];
	    }
	    return is;
    }
    friend ostream & operator <<(ostream &os,Dayso &b)
    {
	    for(int i=0;i<b.n;i++)
		cout<<" "<<b.a[i];
	    return os;
    }
    Dayso operator = (const Dayso & b)
    {
    	n = b.n;
    	if(n > 0)
    	a = new int[n];
    	for(int i = 0; i<n; i++)
    	{
    		a[i]=b.a[i];
    		return *this;
		}
	}
};
int gmax(Dayso b)
{
	int m=b.a[0];
	for(int i=0;i<b.n;i++)
	if(b.a[i]>m)m=b.a[i];
	return m;}

int main()
{
   Dayso a;a.sinh(10);cout<<"Day a:"<<a;
   Dayso b; b=a;cout<<"\nDay b:"<<b;
   
   b.thaydoi(5); cout<<"\nDay b:"<<b;
   cout<<"\nDay a:"<<a;
   
}
