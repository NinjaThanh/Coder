#include <bits/stdc++.h>
using namespace std;
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
int IntPut( int n)
{
	int tam;
    for (int i=2;i<=n;i++)
	{
		while(n%i==0) 
		{
    	    tam= n%i;
    	    n=n/i; 
    	    if(Ktr(i)==true)
    	    {
    	        cout<<i<<" ";
			}
		}
    }

}
int main()
{
    int n;
    cin >> n;
    Ktr(n);
    IntPut(n);
    return 0;
}
