#include<bits/stdc++.h>
using namespace std;
int main()
{
	for(int x=0; x<=135; x++)
	{
		for(int y=0; y<=135; y++)
		{
			for(int z=0; z<=135; z++)
			{
				if((3*x+5*y+7*z)==135)
				{
					cout<<"Bo nghiem de pt =135: "<<endl;
					cout<<"x= "<<x<<" ; "<<"y= "<<y<<" ; "<<"z= "<<z<<endl;
				}
			}
		}
	}
}
