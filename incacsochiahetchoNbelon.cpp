#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,max=0;
    cin>>a>>b;
    for(int i=b-1; i>a;i--)
    {
    	if(i%3==0)
    	{
    		max++;
    		cout<<i<<" ";
		}
	}
	if(max==0)
	cout<<"NOT FOUND";
}


//cach 2
#include<bits/stdc++.h>
using namespace std;
int main()
{
int a,b;
int flag=1;
cin>>a>>b;
for(int i = b-1;i>a;i--)
{
if( i%3 == 0)
{
cout<<i<<" ";
flag = 0;
}
}
if(flag == 1)
cout<<"NOT FOUND";
}
