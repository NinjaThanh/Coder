#include<bits/stdc++.h>
#include<fstream>
using namespace std;
int main()
{
	ifstream fi("intput.cpp");
	ofstream fo("vg31.out");
	if(fi==NULL || fo==NULL)
	cout<<"Khong mo duoc file!"<<endl;
	else
	{
		int x;
		while(!fi.eof())
		{
			fi>>x;
			if(x%2!=0)
			{
				fo<<x<<" ";
			}
		}	
		fo.close();
		fi.close();
		cout<<"Ok!";
	}
	
}
