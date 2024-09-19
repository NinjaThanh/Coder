#include<bits/stdc++.h>
using namespace std;
int main()
{
	int *a, n;
	cout<<"\nNhap so phan tu cua mang: ";
	cin>>n;
	a= new int [n];
	for(int i=0; i<n; i++)
	{
		cout<<"Nhap phan tu "<<i+1<<":";
		cin>>a[i];
	}
	cout<<"\nNoi dung mang: ";
	for(int i=0;i<n;i++)
		cout<<a[i];
	int t=0; 
	for(int i=0;i<n;i++)
	t=t + *(a+i); //co the thay a[i] bang (a+i);
	cout<<"\nTong mang= "<<t;
	
	delete []a;// mang phai delete theo kieru []a;
}
