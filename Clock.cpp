#include<bits/stdc++.h>
using namespace std;
class Clock{
	private:
		double hour, minute, second;
	public:
		Clock()
		{
			double h=0;
			double m=0;
			double s=0;
		}
		Clock(double h, double m, double s)
		{
			hour=h;
			minute=m;
			second=s;
		}
		void Nhap()
		{
			do
			{
				cout<<"Nhap gio: "; cin>>hour;
		        if(hour<0 || hour>24)
		        {
		        	cout<<"Vo Ly!"<<endl;
				}
			}while(hour<0 || hour>24);
			do
			{
				cout<<"Nhap phut: "; cin>>minute;
		        if(minute<0 || minute>60)
		        {
		        	cout<<"Vo Ly!"<<endl;
				}
			}while(minute<0 || minute>60);
			do
			{
				cout<<"Nhap giay: "; cin>>second;
		        if(second<0 || second>60)
		        {
		        	cout<<"Vo Ly!"<<endl;
				}
			}while(second<0 || second>60);
		}
		void In()
		{
			cout<<hour<<":"<<minute<<":"<<second<<endl;
		}
		Clock Sum(Clock time2);
		Clock Sub(Clock time2);
};
Clock Clock::Clock(Clock time2)
{
	Clock sum;
	sum.hour= hour + time2.hour;
	
}
int main()
{
	Clock time1, time2;
	time1.Nhap();
	time2.Nhap();
	cout<<"Thoi gian 1: ";
	time1.In();
	cout<<"Thoi gian 2:";
	time2.In();
}
