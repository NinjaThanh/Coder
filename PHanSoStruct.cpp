#include<bits/stdc++.h>
using namespace std;
struct PhanSo{
		double ts,ms;	
};
istream &operator>>(istream &is, PhanSo &p2)
	{
		is>>p2.ts>>p2.ms;
		return is;
	}
ostream &operator<<(ostream &os, PhanSo p2)
{
	os<<p2.ts<<"/"<<p2.ms<<endl;
	return os;
}
PhanSo operator+(PhanSo &p1, PhanSo &p2)
{
	PhanSo sum;
	sum.ts = (p1.ts*(p2.ms) + p2.ts*(p1.ms));
	sum.ms = p1.ms*(p2.ms);
	return sum;
} 
PhanSo operator-(PhanSo &p1, PhanSo &p2)
{
	PhanSo sum;
	sum.ts = (p1.ts*(p2.ms) - p2.ts*(p1.ms));
	sum.ms = p1.ms*(p2.ms);
	return sum;
} 	
PhanSo operator*(PhanSo &p1, PhanSo &p2)
{
	PhanSo sum;
	sum.ts = p1.ts*p2.ts;
	sum.ms = p1.ms*(p2.ms);
	return sum;
} 	
PhanSo operator/(PhanSo &p1, PhanSo &p2)
{
	PhanSo sum;
	sum.ts = p1.ts*p2.ms;
	sum.ms = p1.ms*(p2.ts);
	return sum;
} 	
int main()
{
	PhanSo p1, p2, sum;
	cin>>p1>>p2;
	cout<<p1<<p2;
	sum = p1 + p2;
	cout<<sum;
	sum = p1 - p2;
	cout<<sum;
	sum = p1 * p2;
	cout<<sum;
	sum = p1 / p2;
	cout<<sum;
//	p1.Nhap();
//	p2.Nhap();
//	p1.In();
//	p2.In();
}
