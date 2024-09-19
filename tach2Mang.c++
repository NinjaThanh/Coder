#include<bits/stdc++.h>
using namespace std;
int Nhap(int a[], int n)
{
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
}
int Ktr(int n)
{
    if(n<2){
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
int Output(int a[], int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
int Xuly(int a[], int b[], int c[], int n, int &ib, int &ic)
{
	ib=0;ic=0;
 
    for(int i=0;i<n;i++)
    {
        if(Ktr(a[i])==true)
        {
            b[ib]=a[i];
            ib++;
        }
        else
        {
        	c[ic]=a[i];
        	ic++;
		}
    }
}
int main()
{
    int n,ib,ic;
    cin>>n;
    int a[n],b[10000],c[10000];
    Nhap(a,n);
    Output(a,n);
    Xuly(a,b,c,n,ib,ic);
    cout<<"Mang NT: ";
    Output(b,ib);
    cout<<"\nMang thuong: ";
    Output(c,ic);
}