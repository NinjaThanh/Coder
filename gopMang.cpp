#include<bits/stdc++.h>
using namespace std;
int Nhap(int *a, int *b, int n, int m)
{
	cout<<"Nhap noi dung mang 1: "<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<"Phan tu "<<i<<": ";
		cin>>a[i];
	}
	cout<<"Nhap noi dung mang 2: "<<endl;
	for(int j=0;j<m;j++)
	{
		cout<<"Phan tu "<<j<<": ";
		cin>>b[j];
	}
}
int In(int *a, int *b, int n, int m)
{
	cout<<"Noi dung mang 1: "<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<"\nNoi dung mang 2: "<<endl;
	for(int j=0;j<m;j++)
	{
		cout<<b[j]<<" ";
	}
	cout<<endl;
}
int Gop(int *a, int *b, int*c, int n, int m)
{
	//tao mang moi voi gioi han bang tong gioi han 2 mang dau
	int vitri=0;
	//gan cac gia tri cua tung mang vao vi tri mang moi
	for(int i=0;i<n;i++)
	{
		//vitri ban dau bang 0 de tang len khi gan vi tri cua 1 mang dau vao mang moi
		c[vitri]=a[i];
		vitri++;
	}
	for(int i=0;i<m;i++)
	{
		//vitri bay h bang gioi han mang dau tien, tiep tuc gan gia tri cua mang thu 2 vao vi tri tiep theo khi da tang o for thu nhat;
		c[vitri]=b[i];
		vitri++;
	}//toi day thi cac gia tri cua 2 mang da duoc gan vao vitri mang moi voi gioi han bang tong gioi han 2 mang dau tien
}
int InGop(int *a, int *b, int *c, int n, int m)
{
	cout<<"Noi dung mang sau khi gop: "<<endl;
	for(int i=0;i<n+m;i++)
	{
		cout<<c[i]<<" ";
	}
	cout<<endl;
}
int main()
{
	int n,m;
	cout<<"Nhap n va m: ";
	cin>>n>>m;
	int *a=new int[n];
	int *b=new int[m];
	int *c=new int[n+m];
	Nhap(a,b,n,m);
	In(a,b,n,m);
	Gop(a,b,c,n,m);
	InGop(a,b,c,n,m);
}
