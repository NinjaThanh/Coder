//kieu du lieu vector
#include<iostream>
#include<vector>
using namespace std;

int main()
{
	vector<int>a;
    vector<int>::iterator it;
    for(int i=1;i<10;i++) a.push_back(i);
    cout<<"\nNoi dung vector: ";
    for(int i=0;i<a.size();i++)
    cout<<a.at(i)<<" ";
    a.pop_back(); //lay phan tu cuoi lan 1: 9
	a.pop_back(); //lay phan tu cuoi lan 2: 8
    it=a.begin();
    a.insert(it + 3, 1000); //chen vao vi tri thu 3 so 1000
    a.erase(it + 5); //xoa vi tri thu 5: 5
    cout<<"\nNoi dung vector: ";
    for(int i=0; i<a.size();i++)
    cout<<a.at(i)<<" ";
}
