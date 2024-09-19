#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int tam, dem=0;
	int n1=0;
	int n2=1;
	cout<<n1<<" "<<n2<<" ";
	int n3;
	for(;n;)
	{
		n3 = n1 + n2;
		n1 = n2;
		n2 = n3;

		dem++;
		cout<<n3<<" ";
		if(dem==(n-2))
		{
			return 0;
		}
	}
}
