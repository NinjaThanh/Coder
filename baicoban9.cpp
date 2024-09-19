p#include<bits/stdc++.h>
using namespace std;

void nhap(int*a, int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<" nhap gia tri mang ";
		cin>>a[i];
	}
}

void xuat(int*a, int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}


int timmax1(int*a, int n)
{
	int max1=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]>max1)
		{
			max1=a[i];
		}
	}
	return max1;
}

int timmax2(int*a, int n)
{
	int max1 = timmax1(a, n);
	int max2 = max1;
	for(int i=0;i<n;i++)
	{
		if(a[i]!=max1)
		{
			max2 = a[i];
		}
	}
	for(int i=0;i<n;i++)
	{
		if(a[i]>max2 && a[i] != max1)
		{
			max2 = a[i];
		}
	}
	return max2;
}

int themphantu(int*a, int &n, int x, int k)
{
	for(int i=n-1; i>=k;i--)
	{
		a[i+1] = a[i];
	}
	a[k] = x;
	n++;
}

int xoaphantu(int*a, int &n, int vitri2)
{
	for(int i = vitri2+1;i<n;i++)
	{
		a[i-1] = a[i];
	}
	n--;
}

int main()
{
	int n;
	cout<<" nhap so luong mang : ";cin>>n;
	
	int*a = new int [n];
	
	nhap(a, n);
	xuat(a, n);
	cout<<endl;
	
	int kt1 = timmax1(a, n);
	cout<<" gia tri lon nhat la : "<<kt1<<endl;
	int kt2 = timmax2(a, n);
	if(kt1!=kt2)
	{
		cout<<" gia tri lon thu hai la : "<<kt2<<endl;
	}
	else 
	{
		cout<<" khong co gia tri lon thu hai trong mang "<<endl;
	}
	cout<<endl;
	
	int x;
	cout<<" nhap gia tri x = ";cin>>x;
	
	int vitri1;
	cout<<" nhap vi tri can them : ";cin>>vitri1;
	
	themphantu(a, n, x, vitri1);
	xuat(a, n);
	cout<<endl;
	
	
	int vitri2;
	cout<<" nhap vi tri can xoa : ";cin>>vitri2;
	
	xoaphantu(a, n, vitri2);
	xuat(a, n);
	cout<<endl;
	
	
	
	
	
	
}
