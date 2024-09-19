//in cac so le tu file dulieu2 sang file ketqua2
#include<bits/stdc++.h>
#include<fstream>
using namespace std;
int main()
{
	ifstream fi("input.txt");
	ofstream fo("output.txt");
	if(fi==NULL || fo==NULL)
	cout<<"Khong mo duoc file!"<<endl;
	else
	{
		if(fi==NULL || fo==NULL)
	cout<<"\nLoi doc/ghi file";
	else
	{
		int n,x,t=0; 
		fi>>n;
		for(int i=1;i<=n;i++)
		{
			fi>>x;
			if(x>t)
			{
				t=x;
			}
		} 
		fo<<"Max: "<<t;
		fo.close(); 
		fi.close();
		cout<<"\nXU LY XONG!";
	}
	}
	
}
