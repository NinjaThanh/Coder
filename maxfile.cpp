#include<bits/stdc++.h>
#include<fstream>
using namespace std;
int main()
{
    ofstream fi("ketqua3.cpp");
    if(fi==NULL)
    {
        cout<<"NO!";	
    }
    else
    {
        cout<<"YES!"<<endl;
        int max=0;
        int n; cin>>n;
        int *a=new int [n];
        for(int i=0;i<n;i++)
        {
        	cin>>a[i];
		}
		for(int i=0;i<n;i++)
		{
			if(a[i]>max)
			{
				max=a[i];
			}
		}
		cout<<"\nXONG!"<<endl; 
		fi<<max;
		fi.close();
		return 0;
    }
}
