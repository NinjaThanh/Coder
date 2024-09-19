#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	double du,late,s=0;
	int nc=0;
	int dem=0;
	late = n%10;
	for(;n;)
	{
		du=n%10;
		dem++;
		s += du;
		n=n/10;
		nc =nc*10 + du;
	}cout<<"a) So tu nhien n co "<<dem<<" chu so"<<endl;
	cout<<"b) Tong chu so cua n: "<<s<<endl;
	cout<<"c) Chu so dao nguoc cua n: "<<nc<<endl;
	cout<<"d) Chu so cuoi cung: "<<late<<endl;
	cout<<"e) Chu so dau tien: "<<nc%10<<endl;
}
