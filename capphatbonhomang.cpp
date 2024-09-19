#include<bits/stdc++.h>
using namespace std;
int a[5], b[5];
int main()
{
	for(int i=0; i<5; i++) a[i]=i + 1;
	for(int i=0; i<5; i++) b[i]=(i + 1)*10;
	cout<<"\nMang a: ";
	for(int i=0; i<5; i++)
	cout<<a[i]<<" ";
	cout<<"\nMang b: ";
	for(int i=0; i<5; i++)
	cout<<b[i]<<" ";
	cout<<"\n";
	for(int i=0; i<20; i++) a[i]=a[i] *9;
	//khi thay doi mang a thi mang b bi keo theo;
	for(int i=0; i<5; i++) cout<<b[i]<<" ";
}
