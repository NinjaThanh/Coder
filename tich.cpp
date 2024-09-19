//4
#include<bits/stdc++.h>
using namespace std;
int Nhap()
{
	int x;
	do
	{
		cin >> x;
		if (x < 0)
		cout << "Nhap sai yeu cau: ";
	} while (x < 0);
	return x;
}
long Tinh(int n)
{
    long s = 0;
    for (int i = 0; i <= n; i++)
	{
        s = s + i;
    }
        return s;
}
int main()
{
	int n;
	cout << "Nhap so nguyen n: ";
	n = Nhap();
	cout << "Ket qua la: "<< Tinh(n) << endl;
	return 0;
}
