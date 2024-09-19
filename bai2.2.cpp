#include<bits/stdc++.h>
using namespace std;
int main()
{
	int *a;
	
	int i=0;
	while(1)
	{
		a= new int[10000000];
		if(a!=NULL)
		{
			cout<<"Lan thu: "<<++i<<endl;
			delete[]a;
		}
		else
		{
			cout<<"HET BO NHO!"; break;
		}
	}  
}  
