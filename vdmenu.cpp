#include <iostream>
using namespace std;
 
int main()
{
    cout << "Chuong trinh xay dung menu quan ly sinh vien" << endl;
    cout << "Hay chon menu sau:" << endl;
    cout << "Nhap 1: de xem danh sach sinh vien" << endl;
    cout << "Nhap 2: de them sinh vien" << endl;
    cout << "Nhap 3: de xoa sinh vien" << endl;
    cout << "Nhap 4: de sua sinh vien" << endl;
    cout << "Nhap 0: de thoat khoi ung dung" << endl;
 
    int control;
    cin >> control;
 
    switch (control){
        case 1:
            cout << "Ban da chon xem danh sach sinh vien" << endl;
            // Code xem danh sach sinh vien
            break;
        case 2:
            cout << "Ban da chon them sinh vien" << endl;
            // Code them sinh vien
            break;
        case 3:
            cout << "Ban da chon xoa sinh vien" << endl;
            // Code xoa sinh vien
            break;
        case 4:
            cout << "Ban da chon sua sinh vien" << endl;
            // Code sua sinh vien
            break;
        default :
            cout << "Ban chon thoat khoi chuong trinh" << endl;
    }
     
    return 1;
}
