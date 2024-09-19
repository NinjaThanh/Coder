// bai1
#include<bits/stdc++.h>
using namespace std;
double Tinh(double n)
{
	double s=0;
	for(int i=1; i<=n; i++)
	{
		s = s + (1.0*i/(i+1));
	}
	cout << s;
}
int main()
{
	double n;
	cout << "Nhap vao n: "; cin >> n;
	Tinh(n);
}
