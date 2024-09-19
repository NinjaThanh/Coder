#include<bits/stdc++.h>
using namespace std;

class Person{
	protected:
	    string name;
        int ns; //nam sinh
    public:
    	virtual void Input()
    	{
    		cout<<"Nhap name: ";
    		fflush(stdin);
    		getline(cin,name);
    		cout<<"Nhap nam sinh: ";
    		cin>>ns;
		}
		
		virtual void Output()
		{
			cout<<"\nName: "<<name<<endl;
			cout<<"Nam sinh: "<<ns<<endl;
		}
		
		virtual double tongtien() = 0;
};

class BN_O : public Person{
	protected:
		
};
int main()
{
	
	return 0;
}
