#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	int sqr=sqrt(n);
	//spr bang can bac 2 cua n
	if(sqr*sqr==n) // neu can bac 2 cua n binh phuong = n thi la so CPhuong
	{
		cout <<"Yes";
	}
	else
	cout << "No";
}
//
////cach2
//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	int a; cin >> a;
//	int b=sqrt(a);
//	if(pow(b,2)==a)
//	{
//		cout<<"Yes";
//	}
//	else
//	cout<<"No";
//}
//



