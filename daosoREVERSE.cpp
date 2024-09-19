#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    reverse(s.begin(), s.end());
    //day la ham xet tu dau chuoi den cuoi chuoi: s.begin->s.end
    while(s[0]=='0')
	{
		//vong while s[0] neu bang 0, s.erase(0.1)
        s.erase(0,1);
    } cout<< s;
}
