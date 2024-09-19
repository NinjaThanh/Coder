#include<bits/stdc++.h>
using namespace std;
class TPM
{
	private:
		char LopTr[50], LopP[50], BiThu[50];
		int SiSo;
	public:
		void Nhap()
		{
			cout<<"Nhap lop truong: ";
			cin>>LopTr;
			cout<<"Nhap lop pho: ";
			cin>>LopP;
			cout<<"Nhap bi thu: ";
			cin>>BiThu;
		}
		void In()
		{
			cout<<"Lop truong: "<<LopTr<<endl;
			cout<<"Lop pho: "<<LopP<<endl;
			cout<<"Bi thu: "<<BiThu;
		}
};
int main()
{
	Nhap();
	In();
}
