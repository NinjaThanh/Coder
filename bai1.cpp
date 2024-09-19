#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a=1, b=5, c;
	cout<<a<<endl;
	int &r=a;
	r++;
	cout<<a<<endl;
	cout<<"kich thuoc kieu int" <<sizeof(a) <<"bytes"<<endl; //sizeof la kich thuoc
	cout<<"a="<<&a;
	cout<<"b="<<&b<<endl;
	cout<<"c="<<&c<<endl;
	cout<<"a="<<&r;
}
