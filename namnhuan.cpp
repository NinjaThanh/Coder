//Tim nam nhuan
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int thang;
	cout <<  "Nhap thang: "; 
	cin >> thang;
	switch(thang){
	case 1: case 3: case 5: case 7: case 8: case 10: case 12:
	{
		cout <<"Thang " << thang << ":" << "La thang co 31 ngay!";
	}
	break;
	case 4: case 6: case 9: case 11:
	{
		cout <<"Thang " << thang << ":" << "la thang co 30 ngay!";
	}
	case 2:
	{
		int nam;
		cout << "Nhap vao nam: ";
		cin >> nam;
		if(nam%4==0 && nam%100!=0 || nam%400==0)
		{
			cout <<"Thang " << thang << ":" << "La thang co 29 ngay!" << "-" << "Nam nhuan!";
		} 
		else
			{
				cout <<"Thang " << thang << ":" << "La thang co 28 ngay!" << "-" << "Nam khong nhuan!";
			}
	} break;
}
	return 0;
}





















