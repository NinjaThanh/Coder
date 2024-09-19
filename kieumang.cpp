#include<bits/stdc++.h>
using namespace std;
int a[10];
float *b;
//mang neu khai bao ngoai ham thi duoc khoi gan gia tri bang 0, cofn trong ham laf lay gia tri tuy y 
int main()
{
//	int a[10];
//	float *b;
	//neu mang bang NULL thi khong the truy cap

	char c[]={'a','b','c','d','e'};
	cout<<"\na= ";
	for(int i=0; i<10; i++)
	cout<<" "<<a[i];
	cout<<"\nb= ";
	for(int i=0; i<10; i++)
	cout<<" "<<b[i];
	cout<<"\nc= ";
	for(int i=0; i<10; i++)
	cout<<" "<<c[i];
	cout<<"\nDia chi cua a: "<<a;
	cout<<"\nDia chi cua b: "<<b;
	cout<<"\n
	Dia chi cua c: "<<&c;
}
