#include<bits/stdc++.h>
using namespace std;
class Nguoi
{
 private: 
  string ten, que;
  int ns;
 public:
  void nhap() { 
   cout<<" Ho ten:"; fflush(stdin);getline(cin, ten);
   cout<<" Que quan:"; fflush(stdin);getline(cin, que);
   cout<<" Nam sinh:"; cin>>ns;
  }
  void in(){ 
   cout<<"\n Ten: "<<ten<<"  Que: "<<que<<" Nam sinh: "<<ns;
  }
  friend ostream &operator<<(ostream &os, Nguoi b)
  {
   cout<<"\n Ten: "<<b.ten<<"  Que: "<<b.que<<" Nam sinh: "<<b.ns;
   return os;
  }
  friend istream &operator>>(istream &is, Nguoi &b)
  {
   cout<<" Ho ten:"; fflush(stdin);getline(cin, b.ten);
   cout<<" Que quan:"; fflush(stdin);getline(cin, b.que);
   cout<<" Nam sinh:"; cin>>b.ns;
   return is;
  }
};
int main(){ 
 Nguoi a, b; 
 cout<<" nhap nguoi thu nhat:"; cin>>a; 
 cout<<" nhap nguoi thu hai:"; b.nhap();
 //cout<<"\n Nguoi 1:"; a.in(); cout<<"\n Nguoi 2:"; b.in(); 
 cout<<"\n Nguoi 1:"<<a<<"\n Nguoi 2:"<<b; 
 cout<<"\n XONG!";
}
