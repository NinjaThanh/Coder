#include<bits/stdc++.h>
#include<string.h>
using namespace std;
void Nhap()
{
	char string;
	cout <<"Nhap vao chuoi: ";
	cin >> string;
	fflush(stdin); // lam sach bo dem ban phim (bo qua cac phim enter)
	getline(cin,string);
	cout<<"Chuoi vua nhap"<<string;
}
void Xoa(char string[50, int vitrixoa])
{
	int n = strlen(s);//gán độ dài cho chuỗi
	for(int 1 = vitrixoa; i < n; i++)//kiểm tra chuỗi từ vị trí cần xoá
	string[i]=string[i+1];
	s[n-1]='\0';
}
void Xoakt(char*string)
{
	for(int i=0; i < strlen(string); i++)
	if(s[i]==' ' && s[i+1]==' ')
	{
		Xoa(string,i);
		i--
	}
	if(s[0]==' ')
	Xoa(string,0);
	if(s[strlen(string)-1]==' ')
	Xoa(string,strlen(string)-1);
}
