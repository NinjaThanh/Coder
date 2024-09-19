//Bài 3: Nhập vào một số nguyên N (có 3 chữ số) rồi tính tổng các số của số nguyên N.
#include<bits/stdc++.h>
using namespace std;
int Nhap(int n)
{
	int s = 0;
	int d;
	for(;n!=0;)
	{
		d = n%10;
		s = s + d;
		n = n/10;
	}
	cout << s;
}
int main()
{
	int n;
	cout << " Nhap n: ";
	cin >>n;
	Nhap(n);
	
}