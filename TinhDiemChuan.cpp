#include<bits/stdc++.h>
using namespace std;

int main()
{
	float toan, ly, hoa, tb;
	cout<<"Nhap diem toan ly & hoa lan luot: ";
	cin>>toan>>ly>>hoa;
	char kv;
	int dt;
	cout<<"Khu vuc va doi tuong: ";
	cin>>kv>>dt;
	if(kv=='A')
	{
		if(dt==1)
		{
		tb = toan + ly + hoa + 2 + 2.5;
	    }
	    else if(dt==2)
	    {
	    	tb = toan + ly + hoa+2+1.5;
		}
		else
		{
			tb = toan + ly + hoa+2+1;
		}
	}
	if(kv=='B')
	{
		if(dt==1)
		{
		tb = toan + ly + hoa + 1 + 2.5;
	    }
	    else if(dt==2)
	    {
	    	tb = toan + ly + hoa + 1 + 1.5;
		}
		else
		{
			tb = toan + ly + hoa + 1 + 1;
		}
	}
	if(kv=='C' && dt==3)
	{
		if(dt==1)
		{
		tb = toan + ly + hoa + 0.5 + 2.5;
	    }
	    else if(dt==2)
	    {
	    	tb = toan + ly + hoa + 0.5 + 1.5;
		}
		else
		{
			tb = toan + ly + hoa + 0.5 + 1;
		}
	}
	cout<<tb<<endl;
	if(tb>=15.5)
	cout<<"DAU!";
	else
	cout<<"ROT!";

}
