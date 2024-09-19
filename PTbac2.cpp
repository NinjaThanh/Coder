////Giải phương trình bậc 2: ax^2 + bx + c = 0
//#include<bits/stdc++.h>
//using namespace std;
//int TinhPT(double a, double b, double c )
//{
//	if(a == 0) 
//	{
//		if(b == 0)
//		{
//			if(c == 0)
//			{
//				cout <<"Phuong trinh vo so nghiem!";
//			}
//			else 
//			{ cout <<"Phuong tirnh vo nghiem!"; }
//		}
//		else
//		{
//			double x;
//			x = (1.0)*(-c/b);
//			cout <<"Ket qua: " << x << endl;
//		}
//	}
//	else 
//	{
//		double x, delta;
//		delta = b*b - 4*a*c;
//		if(delta < 0)
//		{
//			cout <<"Phuong tirnh vo nghiem!";
//		}
//		else if (delta == 0)
//		{
//			cout <<"Phuong trinh co nghiem kep!";
//			double x1;
//			x1 = (1.0)*(-b/2*a);
//			cout <<"ket qua: "<< x1 <<endl;
//		}
//		else
//		{
//			cout <<"Phuong trinh co 2 nghiem phan biet!"<<endl;
//			double x2, x3;
//			x2 = (1.0)*(-b + sqrt(delta))/(2*a);
//			x3 = (1.0)*(-b - sqrt(delta))/(2*a);
//			cout << "Ket qua: " << x2 << endl;
//			cout << "Ket qua: " << x3 <<endl;
//		}
//	}
//}
//int main()
//{
//	double a, b, c;
//	cout <<"Nhap vao a: "; cin >> a;
//	cout <<"Nhap vao b: "; cin >> b;
//	cout <<"Nhap vao c: "; cin >> c;
//	TinhPT(a, b, c);
//}


//cach 2
#include<bits/stdc++.h>
#include<iomanip>
#include<cmath>
using namespace std;

int main()
{
    double a, b, c, x1, x2;
    cin >> a >> b >> c;
    double denta = b*b-(4*a*c);
    if (a==0)
    {
        if (b==0 && c!=0)
            cout << "NO";
        else if (b==0 && c==0)
            cout << "INF";
        else if (b!=0 && c==0)
            cout << fixed << setprecision(2) << c/b;
        else
            cout << fixed << setprecision(2) << (-c)/b;
    }
    else
    {
        if (b==0 && c==0)
            cout << fixed << setprecision(2) << c/a;
        else
        {
            if (denta < 0)
                cout << "NO";
            else if (denta == 0)
                cout << fixed << setprecision(2) << (-b)/(2*a);
            else
            {
                x1 = (-b-sqrt(denta))/(2*a);
                x2 = (-b+sqrt(denta))/(2*a);
                cout << fixed << setprecision(2) << x1 << " " << x2;
            }
        }
    }
}

// https://letcode.vn/setprecisionn-trong-c/









