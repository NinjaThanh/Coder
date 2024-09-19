/*
thi?t k? l?p Ngu?i g?m h? tên và nam sinh
thi?t k? l?p BN_O (b?nh nhân ngo?i trú) gofm Tên bênh, Ti?n di?u tr?
thi?t k? l?p BN_I (b?nh nhân n?i trú) g?m Tên B?nh chu?n doán, Ti?n thu?c, Ti?n ?
thi?t k? l?p PhongKhanh g?m có s? b?nh nhân và danh sách các b?nh nhân (có th? n?i trú ho?c ngo?i trú)
B? sung các phuong th?c cho cacs l?p d? th?c hi?n yêu c?u sau:
-Nhap danh sách các b?nh nhân trong phòng khám
-In danh sách b?nh nhân
-Tính t?ng ti?n thanh toán, trong dó n?u có tính gi?m giá cho các b?nh nhân sinh tru?c nam 1960. 
N?u b?nh nhân n?i trú thì gi?m 10% ti?n thu?c và 12% ti?n ?; n?u b?nh nhân ngo?i trú thì gi?m *% ti?n di?u tr?
-s?p x?p danh sách b?nh nhân theo tên*/

#include<bits/stdc++.h>
using namespace std;

class Person{
    protected:
    string name;
    int ns; //nam sinh
    public:
    Person()
    {
        this->name=" ";
        this->ns=0;
    }
    ~Person()
    {
        this->name=" ";
        this->ns=0;
    }
    void Input()
    {
        cout<<"Nhap ten: ";
        fflush(stdin);
        getline(cin,name);
        cout<<"Nhap nam sinh: ";
        cin>>ns;
    }
    void Output()
    {
        cout<<"Ten: "<<name<<endl;
        cout<<"Nam sinh: "<<ns<<endl;
    }
};

//class benh nhan ngoai tru
class BN_O : public Person{
    protected:
    string tbenh; //ten benh
    float tdt; //tien dieu tri
    public:
    BN_O()
    {
        this->tbenh=" ";
        this->tdt=0;
    }
    ~BN_O()
    {
        this->tbenh=" ";
        this->tdt=0;
    }
    void Input()
    {
        Person::Input();
        cout<<"Nhap ten benh: ";
        fflush(stdin);
        getline(cin,this->tbenh);
        cout<<"Nhap tien dieu tri: "; cin>>this->tdt;
    }
    void Output()
    {
        Person::Output();
        cout<<"Ten benh: "<<this->tbenh<<endl;
        cout<<"Tien dieu tri: "<<this->tdt<<endl;
    }
};

//class benh nhan noi tru
class BN_I : public Person{
    protected:
    string tbcd; //ten benh chuan doan
    float tthuoc, tieno; //tien thuoc va tien o
    public:
    BN_I()
    {
        this->tbcd=" ";
        this->tthuoc=this->tieno=0;
    }
    ~BN_I()
    {
        this->tbcd=" ";
        this->tthuoc=this->tieno=0;
    }
    void Input()
    {
        Person::Input();
        cout<<"Nhap ten benh chuan doan: "; 
        fflush(stdin);
        getline(cin, this->tbcd);
        cout<<"Nhap tien thuoc: "; cin>>this->tthuoc;
        cout<<"Nhap tien o: "; cin>>this->tieno;
    }
    void Output()
    {
        Person::Output();
        cout<<"Ten benh chuan doan: "<<this->tbcd<<endl; 
        cout<<"Tien thuoc: "<<this->tthuoc<<endl;
        cout<<"Tien o: "<<this->tieno<<endl;
    }
};
class PhongKham : public Person, public BN_O, public BN_I{
    public:
    int n,m;
    BN_O *o=new BN_O[n];
    BN_I *i=new BN_I[m];
    PhongKham() {
        n = 0;
        m = 0;
        o = nullptr;
        i = nullptr;
    }

    ~PhongKham() {
        delete[] o;
        delete[] i;
    }
    void Input()
    {
        cout<<"Nhap so benh nhan ngoai tru: "; cin>>n;
        cout<<"Nhap so benh nhan noi tru: "; cin>>m;
        cout<<"\nNhap thong tin cho cac benh nhan ngoai tru: "<<endl;
        for(int i=0;i<n;i++)
        {
            cout<<"Benh nhan "<<i+1<<": "<<endl;
            BN_O::Input();
        }
        cout<<"\nNhap thong tin cho cac benh nhan noi tru: "<<endl;
        for(int i=0;i<m;i++)
        {
            cout<<"Benh nhan "<<i+1<<": "<<endl;
            BN_I::Input();
        }
    }
    void Output()
    {
        cout<<"\nThong tin benh nhan ngoai tru: "<<endl;
        for(int i=0;i<n;i++)
        {
            cout<<"\nThong tin benh nhan "<<i+1<<": "<<endl;
            BN_O::Output();
        }
        cout<<"\nThogn tin benh nhan noi tru: "<<endl;
        for(int i=0;i<m;i++)
        {
            cout<<"Thong tin benh nhan "<<i+1<<": "<<endl;
            BN_I::Output();
        }
    }

};

int main()
{
    PhongKham p;
    p.Input();
    p.Output();
    return 0;
}
