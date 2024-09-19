#include<bits/stdc++.h>
using namespace std;

double tbCong(int a[], int n){
	double tb = 0;
	for(int  i = 0; i < n; i++){
		tb += a[i];
	}
	return tb/n;
}

double tbLeChia3(int a[], int n){
	double tb = 0;
	int d = 0;
	for(int i = 0;i < n; i++){
		if(a[i]%2!=0 && a[i]%3==0){
			tb += a[i];
			d++;
		}
	}
	return tb/d;
}

bool ktrTamGiac(){
	cout<<endl;
	int a, b, c;
	cin>>a>>b>>c;
	if(a>0 && b>0 && c>0){
		if((a+b)>c && (a+c)>b && (b+c)>a){
			return true;
		}
	}
	else{
		return false;
	}
}

bool ktrNT(){
	cout<<endl;
	int a;
	cin>>a;
	if(a<=1){
		return 0;
	} else {
		for(int i = 2; i <=sqrt(a); i++){
			if(a%i==0){
				return 0;
			}
		}  return 1;
	}
}

bool ktrCP(){
	int a;
	cin>>a;
	if(pow(sqrt(a),2)==a) return 1;
	else return 0;
}

double sTron(){
	int r;
	cin>>r;
	double pi=3.14;
	return pi*r*r;
}

int main(){
//	int n;
//	cin>>n;
//	int a[n];
//	for(int i = 0 ;i < n; i++){
//		cin>>a[i];
//	}
//	for(int x : a){
//		cout<<x<<" ";
//	}
	
//	cout<<endl<<tbCong(a,n);
//	cout<<endl<<tbLeChia3(a,n);
//	cout<<endl<<ktrTamGiac();
	cout<<endl<<ktrNT();
	cout<<endl<<ktrCP();
	cout<<endl<<sTron();
	return 0;
}
