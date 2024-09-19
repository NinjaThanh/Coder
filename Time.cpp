/*thiet ke lop time gom gio phut giay 
viet cac ham tao, Nhap In, toan tu vao, ra phep cong + tru va so sanh
ket qua ham so sanh: cho ve 1 0 và -1(1 neu t1> t2, 0 =, -1 neu <); */
#include<bits/stdc++.h>
using namespace std;

class Time{
	private:
		double hour;
		double minute;
		double second;
	public:
		Time()
		{
			double h=0;
			double m=0;
			double s=0;
		}
		Time(double h, double m, double s)
		{
			hour=h;
			minute=m;
			second=s;
		}
	
		void Nhap()
		{
			cin>>hour>>minute>>second;
		}
		void In()
		{
			cout<<hour<<":"<<minute<<":"<<second<<endl;
		}
	    Time operator+(Time t2)
	    {
	    	Time sum;
	    	sum.hour = hour + t2.hour;
	    	sum.minute = minute + t2.minute;
	    	sum.second = second + t2.second;
	    	return sum;
		}
		Time operator-(Time t2)
		{
			Time sum;
	    	sum.hour = hour - t2.hour;
	    	sum.minute = minute - t2.minute;
	    	sum.second = second - t2.second;
	    	return sum;
		}
		Time operator==(Time t2)
		{
			Time sum;
			if(sum.hour==t2.hour && sum.minute==t2.minute && sum.second==t2.second)
			{
				cout<<"0";
			}
			if(sum.hour==t2.hour)
			{
				if(sum.minute==t2.minute)
				{
					if(sum.second>t2.second)
					{
						cout<<"1";
					}
					else
					{
						cout<<"-1";
					}
				}
				else
				{
					cout<<"1";
				}
			}
			if(sum.hour>t2.hour)
			{
				cout<<"1";
			}
			if(sum.hour<t2.hour)
			{
				cout<<"-1";
			}
			
		}
		friend istream &operator>>(istream &is, Time &t2) 
	    {
	    	is>>t2.hour;
	    	is>>t2.minute;
	    	is>>t2.second;
            return is;
        }
        friend ostream &operator<<(ostream &os, Time t2)
        {
        	os<<t2.hour<<":"<<t2.minute<<":"<<t2.second<<endl;
    	    return os;
	    }
};
int main()
{
	Time t1, t2, sum;
	cout<<"Nhap time1: "<<endl;
	t1.Nhap();
	cout<<"Nhap time2: "<<endl;
	t2.Nhap();
	cout<<"Time1: "<<endl;
	t1.In();
	cout<<"Time2: "<<endl;
	t2.In();
	cout<<"--------------"<<endl;
	cout<<"t1 + t2: "<<endl;
	sum=t1+t2;
	cout<<sum;
	
	cout<<"t1 - t2:"<<endl;
	sum=t1-t2;
	cout<<sum;
	
	cout<<"--------------"<<endl;
	
	cout<<"So sanh 2 time:"<<endl;
	sum.operator==(t2);
	
}
