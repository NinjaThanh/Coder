//#include <bits/stdc++.h>
//using namespace std;
//int main()
//{
//	int a,b,ucln;
//	cin>>a>>b;
//	if(b==0)
//	{
//		cout<<"INVALID";
//		return 0;
//	}
//	if(a%b==0)
//	{
//		cout<<a/b;
//	}
//	ucln=abs(__gcd(a,b));
//	if(b<0)
//	{
//		a/=-1 * ucln;
//		b/=-1 * ucln;
//		cout<<a<<" "<<b;
//	}
//	else
//	{
//		a/=ucln;
//		b/=ucln;
//		cout<<a<<" "<<b;
//	}
//}


#include<bits/stdc++.h>
using namespace std;
int UCLN(int a, int b) 
{
	while (a != 0 || b != 0)
	{
		if (a == 0) return b;
		if (b == 0) return a;
		(a > b) ? a = a - b : b = b - a;
	}
}
int main() 
{
	int a, b;
	cin >> a >> b;
	if (b < 0) 
	{
		a = a * (-1);
		b = b * (-1);
	}
	cout << a / UCLN(abs(a), abs(b)) << " " << b / UCLN(abs(a), abs(b));
}




























