#include<bits/stdc++.h>
using namespace std;

void NhapMang(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout<<" nhap gia tri mang : ";cin>>a[i];
    }
}
void XuatMang(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
}

int kiemtra(int a[], int n)
{
    int Max = 1;  
    for (int i = 0; i < n; i++)
    {
        int dem = 1;
        for(int j=i+1;j<n;j++)
        {
            if (a[i] == a[j])
            {
                dem++;
            }
        }
        if (dem>Max)
        {
            Max=dem;
        }
    }
    return Max;
}

int solanxuathien(int a[], int n, int x)
{
    int dem = 1; 
    for (int i = x + 1; i < n; i++)
    {
        if (a[i] == a[x])
        {
            dem++;
        }
    }
    return dem;
} 

int KiemTraBiTrung(int a[], int n, int x)
{
    for (int i = x - 1; i >= 0; i--)
    {
        if (a[i] == a[x])
        {
            return 0; 
        }
    }
    return 1; 
}

void inrasoxuathienmax(int a[], int n)
{
    int Max = kiemtra(a, n);
    for (int i = 0; i < n; i++)
    {
        int kt1 = KiemTraBiTrung(a, n, i);
        if (kt1 == 1)  
        {
            int kt = solanxuathien(a, n, i);
            if (kt == Max)
            {
                cout<<a[i]<<" ";
            }
        }
    }
    cout<<Max;
}
int main()
{
    int n;
    cout<<" nhap n = ";cin>>n;

    int a[100];
    NhapMang(a, n);
    XuatMang(a, n);
    cout<<endl;
    inrasoxuathienmax(a, n);
}
