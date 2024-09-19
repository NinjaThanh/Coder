#include<bits/stdc++.h>
#include<fstream>
using namespace std;

int main()
{
	ifstream fi("intput.cpp");
	ofstream fo("vg1.txt");
	if(fi==NULL || fo==NULL)
	{
		return 0;
	}
	else
	{
		cout<<"Open!";
		int x;
		while(fi.eof())
		{
		    fi>>x;
			if(x%2!=0)
			{
				fo<<x<<" ";
			}
		}
		cout<<"Da Xong!";
		fi.close();
		fo.close();
	}
	
}
