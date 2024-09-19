//bai 1
#include<bits/stdc++.h>
using namespace std;
double Tinh(int n)
{
	double s = 0;
	double t = 0;
	for(int i=1 ; i<=n; i++)
	{
		t = t + i;
		s = s + (1.0)*pow((-1), (i + 1))*(1/t);
	}
	cout << s;
}
int main()
{
	int n;
	cout << "Nhap vao n: ";
	cin >> n;
	cout << "ket qua: ";
	Tinh(n);
}
