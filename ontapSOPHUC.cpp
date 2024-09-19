#include<bits/stdc++.h>
using namespace std;
class SP
{
	private: 
	int real, image;
	public:
		SP()
		{
			int real=0;
			int image=0;
		}
		SP(int r1, int i1)
		{
			image = i1;	
			real = r1;
		}
		void Nhap()
		{
			
		}
		void In()
		{
			cout<<real;
			if(image<0) cout<<" - ";
			else
			cout<<" + ";
			cout<<abs(image)<<".i";
		}
		SP Cong( SP b);
		//khai bao trong lop va ra ngoai dinh nghia
};
SP SP::Cong(SP b)
//khai bao ngoai 
{
	SP t;
	t.image = image + b.image;
	t.real = real + b.real;
	return t;
}
int main()
{
	SP a(1,-7), b(-7,9);
	cout<<"So phuc thu nhat: "; a.In();
	cout<<endl;
	cout<<"So phuc thu hai: "; b.In();
	SP c = a.Cong(b);
	cout<<"\nTong hai so phuc: "; c.In();
}






















