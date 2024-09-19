#include<bits/stdc++.h>
#include<fstream>
using namespace std;
int main()
{
    ifstream fi;
    fi.open  ("data.txt", ios_base::in);
    if(fi==NULL)
    {
        cout<<"Khong mo duoc file!";	
    }
    else
    {
        cout<<"Mo duoc file!";
        int x;
        fi>>x;
        int i=0;
		int b[i];
        while(eof.size())
		{
			x=b[i];
			i++;
			if(b[i]<b[i+1])
			{
				swap(b[i],b[i+1]);
				cout<<b[i]<<" ";
			}
		}
	}
}
