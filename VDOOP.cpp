#include<bits/stdc++.h>
using namespace std;
//class Diem
//{
//	int x, y;
//	public:
//		void Nhap()
//		{
//			cout<<"Nhap x: ";
//			cin>>x;
//			cout<<"Nhap y: ";
//			cin>>y;
//		}
//		void In()
//		{
//			cout<<"\nx= "<<x<<" y= "<<y;
//		}
//		float kc(Diem b)
//		{
//			return sqrt(pow(this->x-b.x,2)+pow(this->y-b.y,2));
//			//return de dua khoang cac giua a va b bang cong thuc tinh khoang cach// can cua toa do (x-x1)^2 + (y-y1)^2) 
//		}
//		float dt1(Diem b, Diem c)
//		{
//			float k1, k2, k3, s=0;
//			k1=kc(b);  //k1=this->kb(c);   //this la kieu con tro;  
//			k2=kc(c);  //k2=this->kb(c);
//			k3=b.kc(c);
//			//cach 1:
//			//float p= (k1+k2+k3)/2;
//			//float s= sqrt(p*(p-k1)*(p-k2)*(p-k3));
//			s= abs((c.x-x)*(b.y-y)-(b.x-x)*(c.y-y));
//			//cach 2:
//			return s/2;
//		}
//};
class Diem
{
	int x,y;
	public:
		Diem(int x1=0, int y1=0) //dung ham tao co moi ngam dinh
		{
			x= x1;
			y= y1;
		}
	float kc(Diem b)
		{
			return sqrt(pow(this->x-b.x,2)+pow(this->y-b.y,2));
			//return de dua khoang cac giua a va b bang cong thuc tinh khoang cach// can cua toa do (x-x1)^2 + (y-y1)^2) 
		}	
};
int main()
{
//	Diem a,b,c;
//	a.Nhap();
//	b.Nhap();
//	c.Nhap();
//	a.In();
//	b.In();
//	c.In();
//	cout<<"\nKhoang cach a va b: "<<a.kc(b);
//	cout<<"\nKhoang cac b va a: "<<b.kc(a);
//	cout<<"\nDien tich tam giac abc: "<<a.dt1(b,c);
    Diem a(3,7), b(8,5),c,d;
    cout<<"\nKhoang cach giua a va b: "<<a.kc(b);
    cout<<"\nKhoang cach giua a va b: "<<c.kc(d);
}
