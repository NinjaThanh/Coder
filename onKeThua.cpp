#include<bits/stdc++.h>
using namespace std;

class Map{
	private:
		string address;
		string number;
	public:
		void Intput()
		{
			getline(cin,address);
			getline(cin,number);
		}
		string getAddress()
		{
			return address;
		}
		string getNumber()
		{
			return number;
		}
		void setAddress()
		{
			this->address = address;
			
		}
		void setNumber()
		{
			this->number = number;
			
		}
		void Output()
		{
			cout<<address<<" "<<number<<" ";
		}
};

class Ship : public Map{
	private:
		string name;
		string phone;
	public:
		void Input()
		{
			Map::Intput();
			getline(cin,name);
			getline(cin,phone);
		}
		string getName()
		{
			return name;
		}
		string getPhone()
		{
			return phone;
		}
		void setName()
		{
			this->name = name;
			
		}
		void setPhone()
		{
			this->phone = phone;
		}
		
		void Output()
		{
			Map::Output();
			cout<<name<<" "<<phone<<endl;
		}
		
};
int main()
{
	Ship a;
	a.Input();
	a.Output();
}





























