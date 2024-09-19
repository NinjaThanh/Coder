#include<bits/stdc++.h>
using namespace std;
int Intput(int *a, int n)
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
    else{
        for(int i=2;i<=sqrt(n);i++)
        {
            if(n%i==0){
                return false;
            }
        }
        return true;
    }
}
int Output(int *a, int n)
{
  
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
        	if(Ktr(a[i])==true && Ktr(a[j])==true)
            {
            	if(a[i]>a[j])
            	{
            	
            		swap(a[i],a[j]);
            		j=i;
            		
				}
			}
        }
    }
    for(int i=0;i<n;i++)
    {
    	cout<<a[i]<<" ";
	}
    
    
}
int main()
{
    int n; cin>>n;
    int *a =new int[n];
    Intput(a,n);
    Ktr(n);
    Output(a,n);
}