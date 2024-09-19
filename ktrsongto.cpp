//s = 1^2 + 2^2 +...+ n^2
//#include<bits/stdc++.h>
//using namespace std;
//int Nhap(int n)
//{
//	
//	do
//	{
//		if(n<0)
//		{
//			cout <<"ko hop le!";
//		}
//	} while (n<0);
//	return n;
//}
//double Tinh(int n)
//{
//	double s = 0;
//	for(int i=1; i<=n; i++)
//	{
//		s = s + i*i;
//	}
//	return s;
//}
//int main()
//{
//	int n;
//	cout <<"Nhap vao so n: ";
//	cin >> n;
//	Nhap(n);
//	Tinh(n);
//	cout <<"Ket qua la: " << Tinh(n) <<endl;
//}












//s = 1 + 1/2 + 1/3 +...+ 1/n
#include<bits/stdc++.h>
using namespace std;
int Nhapso(int n)
{
	do
	{
		if(n<0)
		{
			cout <<"Ko hop le!";
		}
		
	}while (n<0);
	return n;
}
double Tinhso(int n)
{
	double s = 0;
	for(int i=1; i<=n; i++)
	{
		s = s + 1.0/i; // phải nhớ là 1.0 mới ra số sau dấu phẩy
	}
	return s;
}
int main()
{
	int n;
	cout <<"nhap vao n: ";
	cin >>n;
	Nhapso(n);
	Tinhso(n);
	cout <<"ket qua: " <<Tinhso(n) <<endl;
}

































