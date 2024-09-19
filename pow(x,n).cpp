//Tinh: S(x, n) = x – x^2 + x^3 + … + (-1)^n+1 * x^n
#include<bits/stdc++.h>
using namespace std;
int Nhap(int n)
{
	
	do
	{
		if(n<0)
		{
			cout << "Khong hop le!";
		}
	} while (n<0);
}
double Tinh(int n)
{
	double x;
	cout <<"Nhap vao x: ";
	cin >> x;
	double s = 0;
	for(int i=1; i<=n; i++)
	{
		s = s + pow(-1, i+1)*pow(x, i);
	}
	cout << s;
}
int main()
{
	double x;
//	cout <<"Nhap vao x: ";
//	cin >> x;
	int n;
	cout << "Nhap vao n: ";
	cin >> n;
	Nhap(n);
	Tinh(n);
	cout << "Ket qua: ";
}
