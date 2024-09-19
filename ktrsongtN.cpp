#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m; 
	cin >> n>>m;
    int x = 0;
    if(m<2) 
	cout << "NO";
    else
	{
        for(int i=2;i <= sqrt(m);i++)
		{
		    if(m % i == 0)
			{
			    cout<<i<<" ";
            }
        }
    }
}
