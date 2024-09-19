//viet chuong trinh nhap thong tin 2 nguoi, gom ho ten, que, nam sinh. xet coi 2 nguoi co cung que hay khong
#include<bits/stdc++.h>
using namespace std;
struct Nguoi
{
	string ten, que;
	int ns;
};
void Nhap(Nguoi &a)
{
	cout<<"Nhap ten: ";
	//nhap chuoi se dung fflush(stdin) && getline(cin, a.ten)
	fflush(stdin);
	getline(cin, a.ten);
	cout<<"Nhap que: ";
	fflush(stdin);
	getline(cin, a.que);
	cout<<"Nhap nam sinh: ";
	cin>>a.ns;
}
void In(Nguoi x)
{
	cout<<"\nTen: "<<x.ten<<"\tQue Quan: "<<x.que<<"\tNam sinh: "<<x.ns;
}
int ssq(Nguoi a, Nguoi b)
{
	if(a.que.compare(b.que)==0)
	//so sanh string dung compare
	//so sanh dung que cua a va b: a.que.compare(b.que)
	//neu bang 0 thi return 1( dung );
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
