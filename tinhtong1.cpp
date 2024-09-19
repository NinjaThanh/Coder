// tinh tong s = 1-1/2+1/3-1/4+...+(-1)^(n+1)*1/n
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	do
	{
	cout << "Nhap n: ";
	cin >>n;
	if (n <= 0)
	cout << "Khong hop le: ";
   }while (n <= 0);
	double s= 0;
	for(int i = 0; i < n; i++)
	s = s + pow(-1,i+1)*1.0/i;
	cout << "Ket qua: " << s;
}