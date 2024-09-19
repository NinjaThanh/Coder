#include<bits/stdc++.h>
#include<string> 
#include<math.h>
using namespace std;
#define N 100
void Nhap(int a[100], int &n);
void Xuat(int a[100], int n);
void Timsc(int a[100], int n);
void TinhTong(int a[100], int n);
void Nhap(int a[100], int &n)
{
	cout << "\nNhap so phan tu : ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout <<"\nNhap phan tu "<< i <<": ";
		cin >> a[i];
	}
}
void Xuat(int a[100], int n)
{
	cout << "Mang a co phan tu: " << n << endl;
	for (int i = 0; i < n; i++)
	{
		cout << "a["<< i <<"]" << a[i] << endl;
	}
}
void Timsc(int a[100], int n)
{
	for(int i = 0; i < n; i++)
	{
	if(a[i]%2 == 0)
	{
		cout << a[i] << "\t";
    }
	}
}
void TinhTong(int a[100], int n)
{
	int sum = 0;
	for(int i = 0; i < n; i++)
	{
		if(a[i]%2 != 0)
		return ;
//		{
//			return false;
//		}
//		else
//		return true;
		sum  = sum + a[i];
	}
	
}
int main()
{
	int a[100], n, i;
	Nhap(a,n);
	Xuat(a,n);
	cout << "\nCac gia tri chan: ";
	Timsc(a,n);
	cout << "\nTong cac so chan: ";
	TinhTong(a,n);
}