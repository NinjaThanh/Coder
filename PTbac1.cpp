#include<bits/stdc++.h>
using namespace std;
int main()
{
	double a,b;
	cin >> a >> b;
	if(a==0 && b==0)
	{
		cout << "INF";
	}
	else if(a==0 && b!=0)
	{
		cout << "NO";
	}
	else
	{
		cout << -b/a;
	}
}
