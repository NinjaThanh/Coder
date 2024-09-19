#include<bits/stdc++.h>
#include<vector>
#include<fstream>
using namespace std;
int main()
{
	ifstream f1("dulieuA.inp");
	ifstream f2("dulieuB.inp");
	ofstream fo("ketquaC.out");
	vector<int>a;
	int x;
	while(!f1.eof())
	{
		f1>>x;
		a.push_back(x);
	}
	while(!f2.eof())
	{
		f2>>x;
		a.push_back(x);
	}
	sort(a.begin(),a.end());
	//duyet tu dau toi cuoi va in theo tang dan;
	for(int i=0;i<a.size();i++)
	fo<<a[i]<<" ";
	fo.close();
	cout<<"Da ghi xong";
	return 0;
}
