#include<bits/stdc++.h>
using namespace std;
int main()
{
//	int *a=new int;
//	cout<<"\nDia chi a= "<<a<<endl<<"Gia tri a= "<<*a;
//	delete a;
//	double *b = new double[5];
//	cout<<"\nNhap mang b: "<<endl;
//	for(int i=0; i<5; i++)
//	{
//		cout<<b[i]<<" "<<endl;
//	}
//	delete b;
	int *a;
	int n;
	cout<<"Nhap so phan tu can cap phat: "<<endl; cin >>n;
	a= new int[n];
	srand(time(NULL)); //srand(10); khoi tao bo sinh so ngau nhien co cac phan tu hat giong 10;
	for(int i=0; i<n; i++)
	a[i]=rand();
	cout<<"Cac so vua sinh ngau nhien: "<<endl;
	for(int i=0; i<n; i++)
	{
		cout<<a[i]<<" "<<endl;
	}
	delete []a;
	//doi vs c++, can phai giai phong vung nho[delete] duoc cap phat
}
//muon xu dung gia tri tai cac vung nho thi phai don dep(delete)
