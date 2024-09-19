//BÀI 12 : Nhap so nguyên duong N, cho biet so dó có bao nhiêu chu so, và chu so lon nhat là bao nhieu.
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

