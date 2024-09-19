#include<bits/stdc++.h>
using namespace std;
int main()
{
	char *c=new char[1];
	ifstream fi("baitho.txt", ios::in|ios::binary);
	ofstream fo("tanso.txt", ios::out|ios::binary);
	if(fi==NULL || fo==NULL)
	{
		cout<<"\nKhong mo duoc file!";
	}
	else
	{
		long bg=fi.tellg(); 
		fi.seekg(0,ios::end);
		long end=fi.tellg();
		long size=end-bg;
		
}
