#include<bits/stdc++.h>
#include<fstream>
using namespace std;
int main()
{
	ifstream fi("D:\\dulieu1.inp");
	ofstream fo("D:\\ketqua1.txt");
	if(fi==NULL || fo==NULL)
	cout<<"\nLoi doc/ghi file";
	else
	{
		int n,x,t=0; 
		fi>>n;
		for(int i=1;i<=n;i++)
		{
			fi>>x;
			t=t+x;
		} 
		fo<<"Tong cac so: "<<t;
		fo.close(); 
		fi.close();
		cout<<"\nXU LY XONG!";
	}
}
