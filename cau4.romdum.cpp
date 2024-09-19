#include<bits/stdc++.h>
#include<time.h>
#define MAX 100
using namespace std;
int main()
{
	int n, a[MAX];
	int max=0;
	cout<<" nhap n = ";cin>>n;
	srand(time(NULL));
	for(int i=0;i<n;i++)
	{
		a[i] =  rand()%201-100;
		cout<<a[i]<<" "<<endl;
		
	} //cout<<a[i]<<" ";
	for(int i=0;i<n;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
			
		}
	} cout<<"max: "<<max;
}
