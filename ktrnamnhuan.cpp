#include<bits/stdc++.h>
using namespace std;
int main(){
int year;
cin >> year ;
if(year <= 100000 && year > 0)
{if(year % 400 == 0 || year % 4 == 0 && year % 100 !=0)
cout << "YES";
else
cout << "NO";
}else{
cout << "INVALID";
}
}




//cach 2
//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	int a;
//	do
//	{
//		cin>>a;
//		if(a<0)
//		{
//			cout<<"INVALID";
//		}
//	}while(a<0);
//	if(a%4==0 || a%400==0 && a%100!=0)
//	{
//		cout<<"YES";
//	}
//	else
//	cout<<"NO";
//}





//cac them dieu kien 
//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//    int month, year;
//    cin >> month >> year ;
//    if(year <= 100000 && year > 0 && month >=1 && month <= 12)
//	{
//	    if(month == 1 || month ==3 || month ==5 || month == 7 || month ==8 || month == 10 || month ==12)
//        cout << "31";
//        else if(month == 4 || month ==6 || month == 9 || month == 11)
//        cout << "30";
//        else
//        if(year % 400 == 0 || year % 4 == 0 && year % 100 !=0)
//        cout << "29";
//        else
//        cout << "28";
//    }
//	else
//	{
//	    cout << "INVALID";
//    }
//}
