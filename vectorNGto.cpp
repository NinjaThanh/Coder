#include<bits/stdc++.h>
#include<vector>
using namespace std;
int nt(int n)
{
	if(n<2)
	{
		return false;
	}
	else
	{
		for(int i=2;i<=sqrt(n);i++)
		{
			if(n%i==0)
			return false;
		}
		return true;
	} 
}
int main()
{
	vector<int>a;
	vector<int>::iterator it; //khai bao vector
	
	
	int n;
	cout<<"Nhap n: ";
	cin>>n;
	
	
	for(int i=0;i<n;i++)
	a.push_back(rand()%100);
	cout<<"\nVector: "; //random 100% cho n
	for(int i=0;i<a.size();i++)
	cout<<a.at(i)<<" "; //gan phan tu da nhap vao vector va in ra nhu mang;
	it=a.begin();
	
	//xu ly vector loc ra so nguyen to
	for(int i=0;i<a.size();) //vong for cua so nguyen to
	
	if(!nt(a[i])) a.erase(it+i);
	//xet dieu kien tren neu nt bang false(i)
	else i++;
	cout<<"\nNoi dung vector sau khi xu ly: ";
	for(int i=0;i<a.size();i++)
	cout<<a.at(i)<<" ";
}
