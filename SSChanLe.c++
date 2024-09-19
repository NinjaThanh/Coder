#include<bits/stdc++.h>
using namespace std;
int Nhap(int a[], int n)
{
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
}
int In(int a[], int n, int &d, int &dem)
{
    d=0;
    dem=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            d++;
        }
        else
        {
            dem++;
        }
    }
    if(d>dem)
    {
        return -1;
    }
    else if(d==dem)
    {
        return 0;
    }
    else{
        return 1;
    }
}
int main()
{
    int n; cin>>n;
    int d,dem;
    int a[n];
    Nhap(a,n);
   int nt=In(a,n,d,dem);
   cout<<nt;
    
}