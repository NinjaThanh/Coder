#include<bits/stdc++.h>
using namespace std;
int main()
{
	ifstream fi("data.txt");
	ofstream fo("output.cpp");
	if(fi==NULL && fo==NULL)
	{
		cout<<"No";
	}
	else
	{
		cout<<"YES!";
		int x;
		int i=0;
		int a[i];	
		while(!fi.eof())
		{
			
		    fi>>x;
		    a[i]=x;
		    i++;
		    for(int j=0;j<i;j++)
		{
			if(a[j]>a[j+1])
			{
				swap(a[j],a[j+1]);
			}
		}
		for(int j=0;j<i;j++)
		{
			fo<<a[j]<<" ";
		}
		}
		
		
		fi.close();
		fo.close();
		cout<<"OK";
	}
}
