#include<bits/stdc++.h>
using namespace std;
int kiemtra(int n)
{
	int s = 0;
	int tam = n;
	for(int i=1; i<=n/2; i++) //i chạy từ n tới bé hơn hoặc bằng n/2
	{
		if(n%i==0)     //chia hết ra số dư bằng 0
		{
			//cout <<"N la so hoan hao: ";
			s = s + i;
	}
	if(s==tam)
	{
		cout <<"N la so hoan hao: " << endl;
	}
	else
	{
		cout <<"N ko la so hoan hao: " << endl;
	}
}
}
int main()
{
	int n;
	cout<<" nhap n = ";cin>>n;
	
	kiemtra( n);
}
