#include<bits/stdc++.h>
using namespace std; 
struct ThiSinh
{
	char sbd[10];
	char hoTen[30];
	float diem;
}ts;
void NhapThiSinh(FILE* fp, ThiSinh ts)
{
	fp = fopen("thisinh.txt", "a+");
	if(fp == NULL)
	{
	    cout << "file loi" << endl;
	    fclose(fp); 
    }
    else
   {
   	int n;
        cout << "Nhap so luong thi sinh: ";
	    cin >> n;
	for(int i = 0; i < n ; i++)
	{
		do
		{
				cout << "\nNhap so bao danh: ";
				cin >> ts.sbd;
                cout << "\nNhap ho va ten: ";
                cin >> ts.hoTen;
                cout << "\nNhap diem: ";
                cin >> ts.diem;
        }while (ts.sbd[10] == -1);
        
                fprintf(fp, "So Bao Danh: %s\t Ho Va Ten: %s\t Diem: %.2f\n ", ts.sbd, ts.hoTen, ts.diem);                        
    }
    
    }
}
void DocThongTin(FILE* fp, ThiSinh ts)
{
	char sbd[10];
	char hoTen[30];
	float diem;
	fp = fopen("thisinh.txt", "rt");
	fscanf(fp, "%s\t %s\t %.2f\n", &sbd, &hoTen, &diem);
	 fclose(fp); 
}
int main()
{
	struct ThiSinh thisinh;
	FILE* fpthisinh;
	NhapThiSinh(fpthisinh, thisinh);
	DocThongTin(fpthisinh, thisinh);
}