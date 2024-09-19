//nhap so tien nguyen N dong, doi ra xem duocj bao nhieu to 10k 5k 2k va 1k
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int tien;
	cin>>tien;
	int n[]={10000, 5000, 2000, 1000};
	int tong=0;
	while(tien!=0)
	{
		for(int i=0; i<4; i++)
		{
			tong = tien/n[i];
			//tong = tien chia n[i]"i=1"
			if(tong!=0)
			{
				cout<<tong<<" ";
			}
			tien=tien -tong*n[i]; 
			//tien ban dau = tien ban dau tru tong tren;
		} //quay ve for toi khi nao tong bang 0
	} 
}
