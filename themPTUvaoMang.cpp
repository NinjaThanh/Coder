#include<bits/stdc++.h>
using namespace std;
int Nhap(int *a, int n)
{
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
}
int In(int *a, int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
}
int Them(int *a, int &n, int vitri, int ptu)
{
	for(int i =n-1; i>=vitri; i--)
	{
		a[i+1]=a[i];
	} 
	a[vitri] = ptu;
	n++;
}
int main()
{
	int n;
	do{
		cin>>n;
		if(n<2 || n>50)
		cout<<"VO LY!";
	}while(n<2 || n>50);
	int *a=new int[n];
	Nhap(a,n);
	In(a,n);
	int ptu;
	cout<<" nhap phan tu : ";cin>>ptu;
	int vitri;
	cout<<" nhap vi tri can them ";cin>>vitri;
	Them(a,n,vitri, ptu);
	In(a,n);
	return 0;
}
