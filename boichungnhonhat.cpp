#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b;
	cin>>a>>b;
	//boi chung cua 2 so = tich cua 2 so chia cho uoc chung lon nhat;
	cout<<abs(a*b/__gcd(a,b));
	return 0;
}
