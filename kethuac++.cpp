#include<bits/stdc++.h>
using namespace std;

//bass: class cha
//derived class: class con
class Persion{
	private:
		string name;
		string address;
	public:
		
//		void Nhap()
//		{
//			getline(cin,name);
//			getline(cin,address);
//		}


        Persion(string name, string address)
		{
			this->name = name;
			this->address = address;
		}
		string getName()
		{
			return name;
		}
		string getAddress()
		{
			return address;
		}
		void setNam(string name)
		{
			this->name = name;
		}
		void setAddress(string address)
		{
			this->address = address;
		}
		void in()
		{
			cout<<name<<" "<<address<<" ";
   		}
};

class Student : public Persion{
	private:
		float gpa;
	public:
		
		//function overriding
		//ghi de
//		void Nhap()
//		{
//			Persion::Nhap();
//			cin>>gpa;
//		}


        Student(string name, string address, float gpa) : Persion(name, address)
		{
			this->gpa = gpa;
		} 
		float getGpa()
		{
			return gpa;
		}
		void setGpa(float gpa)
		{
			this->gpa = gpa;
		}
		//function overriding
		//ghi de
		void in()
		{
			//hay ham in giong ten nen goi la ghi de
			Persion::in(); //toan tu vi tri de goi ham in o lop cha
			cout<<fixed<<setprecision(2)<<gpa;
			
		}
};
int main()
{
	Student s("Dinh Vinh Giang", "Da Nang", 9.8); /*thay vi goi s.set___ tung doi tuong thi ta co the dung this->___ 
	de gan gia tri lan luot va dung ham in de cout ra*/
	
	
	//khi chua co ham nhap va in, tu gan gia tri
	
//	s.setNam("Dinh Vinh Giang");
//	s.setAddress("Da Nang");
//	s.setGpa(9.9);
//	cout<<s.getName()<<" "<<s.getAddress()<<" "<<s.getGpa();


    //s.Nhap(); //ham nhap cua lop con da bao gom lop cha
	s.in();    
	
	
	//chi goi ham nhap cua lop cha
	
	/*s.Persion::Nhap();
	s.Persion::in();*/
	return 0;
}




















