//viet chuong trinh nhap thong tin 2 nguoi, gom ho ten, que, nam sinh. xet coi 2 nguoi co cung que hay khong
#include<bits/stdc++.h>
using namespace std;
struct Nguoi
{
	char *ten, *que;
	//string ten, que;
	int ns;
};
void Nhap(Nguoi &a)
{
	char t[100];
	cout<<"Nhap ten: ";
	//nhap kieu char se dung fflush(stdin) && gets(t) de cap phat bo nho; 
	fflush(stdin);
	gets(t);
	a.ten=new char[strlen(t)];
	//giong vs con tro thi phai cap phat them gioi han chuoi thuoc char;
	strcpy(a.ten,t);
	cout<<"Nhap que: ";
	fflush(stdin);
	gets(t);
	a.que=new char[strlen(t)];
	strcpy(a.que,t);
	cout<<"Nhap nam sinh: ";
	cin>>a.ns;
}
void In(Nguoi x)
{
	cout<<"\nTen: "<<x.ten<<"\tQue Quan: "<<x.que<<"\tNam sinh: "<<x.ns;
}
int ssq(Nguoi a, Nguoi b)
{
	if(strcmp(a.que, b.que)==0)
	//so sanh o kieu char dung strcmp ;
	return 1;
	else 
	return 0;
}
int main()
{
	Nguoi a, b;
	Nhap(a);
	Nhap(b);
	In(a);
	In(b);
	if( ssq(a, b))
	cout<<"\nHai nguoi cung que!";
	else
	cout<<"\nHai nguoi khong cung que!";
	return 0;
}
