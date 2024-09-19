#include <bits/stdc++.h>
using namespace std;

class Data
{
public:
    void print(int i)
    {
        cout << "Print int: " << i << endl;
    }

    void print(float i)
    {
        cout << "Print float: " << (float)i << endl;
    }

    void print(string i)
    {
        cout << "Print string: " << i << endl;
    }

};

int main()
{
    Data *obj = new Data;
    obj->print(1);
    obj->print(2);
    obj->print("Lap Trinh Khong Kho");

    return 0;
}



////bai 1 huong doi tuong
//#include<bits/stdc++.h>
//using namespace std;
//
////class Nhac_cu
////{
////public:
////	std::string Ho_Ten;
////	void NangKhieu()
////	{
////		
////	}
////	std::string choi_nhac_cu(std::string Kha_nang)
////	{
////		return " ";
////	}
////private:
////    bool Kha_nang;	
////};
////int main()
////{
////	Nhac_cu *Tennhaccu = new Nhac_cu;
////	
////	Tennhaccu->Ho_Ten = "guitar";
////	
////	Tennhaccu->choi_nhac_cu("dan");
////	
////}
//
//
////#include<bits/stdc++.h>
////using namespace std;
////
//class HocSinh
//{
//public:
//	std::string Ho_Ten;
//	void Ten(char hoten[50])
//	{
//		cout << "Nhap ho ten: " << hoten << endl;
//	}
//	void Tuoi(float tuoi)
//	{
//		cout << "Nhap tuoi: " << tuoi << endl;
//	}
//	void Mssv(char mssv[10])
//	{
//		cout << "Nhap ma sv: " << mssv << endl;
//	}
//	std::string Rong(std::string kocogica)
//	{
//		cout << "khong co gi ca!";
//	}
//	
//} ;
//
//int main()
//{
//	HocSinh *hocsinh = new HocSinh;
//	hocsinh->Ten("Dinh Vinh Giang");
//	//hocsinh->Tuoi(18.5);
//	hocsinh->Mssv("vg3107");
//	
//	HocSinh *Hocsinh = new HocSinh;
//	Hocsinh->Rong("");
//	
//	HocSinh hocSinh;
//	hocSinh.Tuoi(16);
//	return 0;
//}

























