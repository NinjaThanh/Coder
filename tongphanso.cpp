// Tinh tong hai phan so 
#include<bits/stdc++.h>
using namespace std;
int Nhap(double ts, double ms, double tS, double mS)
{
	do
	{
		if(ts==0 || tS==0)
		{
			if(ms==0 || mS==0)
			{
				return false;
			}
			return true;
		}
	} while(ms==0 || mS==0);
	
}
int TongPS(double ts, double ms, double tS, double mS)
{
	double sum;
	sum = (1.0)*((ts*mS)+(tS*ms))/(ms*mS);
	cout << sum <<endl;
}
int main()
{
	double ts, ms, tS, mS;
	cout <<"Nhap tu so 1: "; cin >> ts;
	cout <<"nhap mau so 1: "; cin >> ms;
	cout <<"Nhap tu so 2: "; cin >> tS;
	cout <<"nhap mau so 2: "; cin >> mS;
	Nhap(ts, ms, tS, mS);
	cout <<"Tong 2 phan so: ";
	TongPS(ts, ms, tS, mS);
}
