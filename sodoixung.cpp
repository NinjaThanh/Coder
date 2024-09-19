//ktr so doi xung
#include<bits/stdc++.h>
using namespace std;
int KtrSoDX(int n)
{
	double s = 0;
	double du;
	int tam = n;
	for(;n;)
	{
		du = n%10;
		s = s*10 + du;
		n=n/10; // ket qua ra so dao: 121->121 (day la so doi xung)
	            // ket qua ra so dao: 123->321 (day lo la so doi xung)
	}           
	if(tam==s)
	{
		cout << "Day la so doi xung!";
	}
	else
	{
		cout << "Day kho phai so DX!";
	}
}
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

