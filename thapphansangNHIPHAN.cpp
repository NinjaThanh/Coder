#include<bits/stdc++.h>
#include<stack>
using namespace std;
int main()
{
  int T; cin>>T;
  while(T>0)
{
    stack <int> a;
    long long n;cin>>n;
    
    while (n>0)
    {
        int du= n%2;
        a.push(du);
        n/=2;
    }
    while(!a.empty())
    {
        cout<<a.top();
        a.pop();
    }
    
    cout<<endl;
    T--;
}
return 0;
}
