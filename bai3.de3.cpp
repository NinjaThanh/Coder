//bai 3
#include<bits/stdc++.h>
using namespace std;

int USC(int n)
{
	for(int i=1; i<=n; i++)
	{
		if(n%i==0 && i%2==0)
		{
			cout << i << " ";
		}
	} 
}
int Dem(int n)
{
	int dem = 0;
	double du;
    int s = 0;
	for(;n;)
	{
		du = n%10;
		dem++;
		n=n/10;
	} cout << dem;
}
double Tich(int n)
{
	double tich = 1; 
	for(int i=1; i<=n; i++)
	{
		if(n%i==0)
		{
			//cout << i << " ";
			tich = tich*i;
		}
	} cout << tich;
}
int main()
{
	int n;
	cout << "Nhap vap n: "; cin >> n;
	USC(n);
    cout << endl;
	cout << "Cac chu so cua n: ";
	Dem(n);
	cout << endl;
	cout <<" Tich cac uoc so: ";
	Tich(n);
}













