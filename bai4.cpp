#include<bits/stdc++.h>
#include<fstream>
using namespace std;

void docfile(ifstream &fi, int*a, int n)
{
	for(int i=0;i<n;i++)
	{
		fi>>a[i];
	}
}

void xuatfile(int*a, int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}

int main()
{
	ifstream fi;
	fi.open("D:\\de1\\input.txt", ios_base::in);
	if(fi.fail()==true)
	{
		cout<<" file khong ton tai !!! "<<endl;
	}
	
	int n;
	fi>>n;
	cout<<" gia tri cua n la : "<<n<<endl;
	
	int*a = new int [n];
	
	docfile(fi, a, n);
	xuatfile(a, n);
	
	ofstream fo;
	fo.open("D:\\de1\\ketqua.txt", ios_base::out);
	
	fo<<" cac so chan la : ";
	for(int i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
			fo<<a[i]<<" ";
		}
	}
	fo.close();
	fi.close();
	system(" pause");
}
