//copy file
#include<bits/stdc++.h>
using namespace std;
int main()
{
	char *c=new char[1];
	ifstream fi("D:\\ketqua1.txt", ios::in|ios::binary);
	ofstream fo("\D:\\ketqua4.txt", ios::out|ios::binary);
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
		//4 dong tren la lay kich thuoc file goc
		int i=1; 
		fi.seekg(0,ios_base::beg); //di chuyen ve dau
		while(i<size)
		{
			fi.read(c, 1);
			fo.write(c, 1);
			i++;
		}
		fo.close();
		fi.close();
		cout<<"\nDa copy xong";
	}
}
