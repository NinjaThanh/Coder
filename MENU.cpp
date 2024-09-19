#include "bits/stdc++.h"
using namespace std;
int Nhap(int *a, int n)
{
	cout<<"\t\t\t-------------MENU-----------"<<endl;
    cout<<"\t\t\t1: Nhap sinh vien: "<<endl;
    cout<<"\t\t\t2: Xuat sinh vien: "<<endl;
    cout<<"\t\t\t3: Nhap diem: "<<endl;
    cout<<"\t\t\t4: Xuat diem: "<<endl;
    cout<<"\t\t\t5: Ket thuc!"<<endl;
    cout<<"\t\t\t-------------END-------------"<<endl;
    int lc;
    cout<<"Nhap lua chon cua ban: ";
    cin>>lc;
    switch (lc)
    {
        int mssv;
        char ten[50];
        float diemt, dieml, diemh;
        case 1: {
            for (int i = 0; i < n; i++) {
                cout << "Nhap ten: ";
                cin >> ten;
                cout << "Nhap ma so sinh vien: ";
                cin >> mssv;
            }
        }break;
        case 2: {
            for (int i = 0; i < n; i++) {
                cout << "Ten: " << ten;
                cout << "Ma so sinh vien: " << mssv;
            }
        }break;
        case 3: {
            for (int i = 0; i < n; i++) {
                cout << "Nhap diem toan: ";
                cin >> diemt;
                cout << "Nhap diem ly: ";
                cin >> dieml;
                cout << "nhap diem hoa: ";
                cin >> diemh;
            }
        }break;
        case 4: {
            for (int i = 0; i < n; i++) {
                cout << "Diem toan: " << diemt;
                cout << "Diem ly: " << dieml;
                cout << "Diem hoa: " << diemh;
            }
        }break;
        case 5:
        {
        	cout<<"OUT";
            return 0;
        } break;
    }
}
int main()
{

    int n;
    cout << "Nhap so sinh vien can quan ly: ";
    int *a=new int[n];
    cin >> n;

    Nhap(a,n);
}

