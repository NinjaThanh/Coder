//bai 2
#include<bits/stdc++.h>
using namespace std;
double Tinh(int n, double x)
{
	//double x;
	do
	{
		if(x<0)
		{
			cout << "Khong hop le!";
		}
	} while (x<0);
	double s = 0;
	double t = 0;
	for(int i=1 ; i<=n; i++)
	{
		t = t + i;
		s = s + (1.0)*(pow((-1), i)*pow(x, i)/t);
	}
	cout << s;
}
int main()
{
	int n;
	cout << "Nhap vao n: ";	cin >> n;
	double x;
	cout << "Nhap vao x: "; cin >> x;
	cout << endl;
	cout << "ket qua: ";
	Tinh(n, x);
}
