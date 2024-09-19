//#include <bits/stdc++.h>
//using namespace std;
//int main()
//{
//    int n,max=0; 
//	cin >> n;
//	if(n==0)
//	{
//		cout<<"INF";
//		return 0;
//	}
//	for(int i = (n-1) ? n : abs(n); i>= 1; i--)
//	{
//		if(n%i==0)
//		{
//			cout<<i<<" ";
//		}
//	}
//}



//cach 2
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n; 
	cin >> n;
	if(n==0)
	{
		cout<<"INF";
		return 0;
	}
	for(int i=n;i>=1;i--)
	{
		if(n%i==0)
		{
			cout<<i<<" ";
		}
	}
}
