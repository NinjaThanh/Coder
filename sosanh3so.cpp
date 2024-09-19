//nhap vao a b c tim so lon nhat
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a, b, c;
	cout <<"Nhap vao a: ";
	cin >>a;
	cout <<"Nhap vao b: "; cin >>b;
	cout <<"Nhap vao c: "; cin>>c;
	if(a>b || b>=c)
	{
	    if(a<c)
		{
			cout << c << "La so lon nhat";
		}
		else if(c>b || b>=a)
	{
		if(c<b)
		{
			cout << b << "La so lon nhat";
		}
		cout << c << "La so lon nhat";
	}
		cout << a << "La so lon nhat";
	}
	
}

