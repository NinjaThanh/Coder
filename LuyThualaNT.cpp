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
    for (int i=2;i<=n;i++)
	{
    	if(Ktr(i)==true)
		{
			while(n%i==0)
			{
				cout<<i<<" ";
				n = n/i;
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
