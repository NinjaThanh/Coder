#include<bits/stdc++.h>
using namespace std;
struct SinhVien{
	string msv, ten;
	double gpa;
	string dc;
	
	
	//constructor: ham khoi tao
	SinhVien(){
		
	}
	void in(){
		cout<<msv<<" "<<ten<<" "<<fixed<<setprecision(2)<<gpa<<" "<<dc<<endl;
	}
	void nhap()
	{
		cin>>msv;
		cin.ignore();
		getline(cin,ten);
		cin>>gpa;
		cin.ignore();
		getline(cin,dc);
	}
};

int main()
{
	SinhVien x;
	x.nhap();
//	cin.ignore(); //de hieu co dau cach
	x.in();
	
//	cout<<x.msv<<" "<<x.ten<<" "<<x.dc<<" "<<x.gpa<<endl;
}
