// tinh tong s = 1-1/2+1/3-1/4+...+(-1)^(n+1)*1/n
#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int Nhap()
{
	int x;
	do
	{
		cin >> x;
		if(x <= 0)
		cout << "Khong hop le: ";
	} while (x < 0);
	return x;
}
double Tinh(int n)
{
	double s = 0;
	for(int i = 1; i <= n; i++)
	s = s + pow(-1,i+1)*1.0/i;
	return s;
}
int main()
{
	int n;
	cout << "Nhap vao n: ";
	n = Nhap();
	cout << "Ket qua la: " << Tinh(n) << endl;
	return 0;
}