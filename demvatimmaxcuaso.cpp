//B�I 12 : Nhap so nguy�n duong N, cho biet so d� c� bao nhi�u chu so, v� chu so lon nhat l� bao nhieu.
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	int du=0;
	int dem=0;
	int s=0;
	int max=0;
	cin>>n;
	for(;n;)
	{
		du=n%10;
		s=s*10+du;
		n=n/10;
		dem++;
		if(du>max)
		{
			max=du;
		}
	}
	cout<<"cac chu so: "<<dem<<endl;
	cout<<"Chu so lon nhat: "<<max; 
}

