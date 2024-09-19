#include<bits/stdc++.h>
using namespace std;
int Ktr(int n)
{
	int du;
	int s=0, dem=0, le=0;
	for(;n;)
	{
		du=n%10;
		if(du%2!=0)
		{
			le++;
		}
		s =s*10 + du;
		n /= 10;
		dem++;
		
	} if(dem==le)
	{
		cout<<"Toan chu so le!";
	}
	else
	cout<<"Co so chan!";
}
int main()
{
	int n;
	cout<<"Nhap so: ";
	cin>>n;
	Ktr(n);
}
