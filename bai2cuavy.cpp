#include<bits/stdc++.h>
using namespace std;

class Person{
	protected:
		string name, id, address;
		int birday; 
	public:
	
	Person()
	{
		this->name=this->id=this->address=" ";
		this->birday = 0;
	}
	
	virtual void Nhap()
	{
		cout<<"Nhap name: ";
		fflush(stdin);
		getline(cin,name);
		cout<<"Nhap id: ";
		fflush(stdin);
		getline(cin,id);
		cout<<"Nhap address: ";
		fflush(stdin);
		getline(cin,address);
		cout<<"Nhap birday: ";
		cin>>birday;
	}
	virtual void Xuat()
	{
		cout<<"Name: "<<name<<endl;
		cout<<"ID: "<<id<<endl;
		cout<<"Address: "<<address<<endl;
		cout<<"Birday: "<<birday<<endl;
	}
};

class Student : public Person{
	protected:
		double toan, ly, hoa;
		double dcong;
		
	public:
	
	Student()
	{
		this->toan = this->ly = this->hoa = this->dcong = 0.0;
	}
	
	Student(string name, string id, string address, double toan, double ly, double hoa, double dcong) : Person()
	{
		this->name = name;
        this->id = id;
        this->address = address;
        this->toan = toan;
        this->ly = ly;
        this->hoa = hoa;
        this->dcong = dcong;
	}
	
	void Nhap()
	{
		Person::Nhap();
		cout<<"Nhap diem toan: "; cin>>toan;
		cout<<"Nhap diem ly: "; cin>>ly;
		cout<<"Nhap diem hoa: "; cin>>hoa;
		cout<<"Nhap diem cong: "; cin>>dcong;
		cout<<endl;

	}
	
	double DiemTB()
	{
		if(dcong!=0)
		{
			return (toan + ly + hoa +  dcong) / 3 ; 
		}
		else
		{
			return (toan + ly + hoa) / 3; 
		}

	}
	
	void Xuat()
	{

			Person::Xuat();
			cout<<"Diem toan: "<<toan<<endl;
			cout<<"Diem ly: "<<ly<<endl;
			cout<<"Diem hoa: "<<hoa<<endl;
			cout<<"Diem cong: "<<dcong<<endl;
			cout<<"Diem trung binh: "<<(toan + ly + hoa + + dcong) / 3 <<endl;
			cout<<endl;	
	}
	
};

class Lecture : public Person{
	public:
		int loai;
		double luong;
	
	Lecture()
	{
		this->loai = 0;
		this->luong = 0.0;
	}
	
	Lecture(string name, string id, string address, int loai, int luong) : Person()
	{
		this->name = name;
        this->id = id;
        this->address = address;
        this->loai = loai;
		this->luong = luong;
	}
	void Nhap()
	{

			Person::Nhap();
			cout<<"Nhap loai gv 1<gioi> or 2<kha>: "; cin>>loai;
			cout<<"Nhap luong co ban: "; cin>>luong;
			if(loai==1)
			{
				luong = luong + 200;
			}
			
			else if(loai==2)
			{
				luong = luong + 100;
			}

	}
	
	double Luong()
	{
		if(loai==1)
			{
				luong = luong + 200;
			}
			
		else if(loai==2)
			{
				luong = luong + 100;
			}
	}
	
	void Xuat()
	{		

		Person::Xuat();
		cout<<"Loai gv: "<<loai<<endl;
		cout<<"Luong da cong: "<<luong<<endl;
		cout<<endl;
	}
	
};

class List{
	public:
		int n;
		vector<Lecture>l;
		vector<Student>s;
		vector<Person*>li;
	
	void Nhap()
	{
		cout<<"Nhap so luong Student va Lecture: "; cin>>n;
		li.resize(n);
		s.resize(n);
		l.resize(n);
		int c,i=0;
		while(i<n)
		{
			cout<<"Nhap lua chon nhap 1<Student> 2<Lecture>: "; cin>>c;
			if(c==1)
			{
				cout<<"Nhap thong tin Student"<<i+1<<": "<<endl;
				Student* s = new Student();
                s->Nhap();
                li[i] = s;
			}
			else if(c==2)
			{
				cout<<"Nhap thong tin Lecture"<<i+1<<": "<<endl;
				Lecture* l = new Lecture();
                l->Nhap();
                li[i] = l;
			}
			i++;
		}
	}
	
	void Xuat()
	{
		for(int i=0;i<n;i++)
		{
			cout<<"Thong tin Student or Lecture "<<i+1<<": "<<endl;
			li[i]->Xuat();
		}
	}
	
	void Them()
	{
		int chose,vt;
		cout<<"Nhap lua chon can them 1<Student> 2<Lecture>: "; cin>>chose;
		cout<<endl;
		if(chose==1)
		{
			cout<<"Nhap vi tri Student can them: ";
			cin>>vt;
			//cho nguoi dung nhap thu tu nhu danh sach hien thi :)) con lai Giang lo
			for(int i=0;i<n;i++)
			{
				if(i==(vt-1))
				{
					n=n+1;
					li.insert(li.begin() + (vt-1), new Person());
					//them vt-1 vao mang cua vector
				}
			}
			
			for(int i=0;i<n;i++)
			{
				cout<<"Nhap thong tin Student can them: "<<endl;
				Student* s = new Student();
				s->Nhap();
				li[vt-1] = s;
				cout<<endl;
				break;
			}
		}
		
		else if(chose==2)
		{
			int index;
			cout<<"Nhap vi tri Lecture can them: ";
			cin>>index;
			for(int i=0;i<n;i++)
			{
				if(i==(index-1))
				{
					n=n+1;
					li.insert(li.begin() + (index-1), new Person());
	
				}
			}
			
			for(int i=0;i<n;i++)
			{
				cout<<"Nhap thong tin Lecture can them: "<<endl;
				Lecture* l = new Lecture();
                l->Nhap();
                li[index - 1] = l;
                cout<<endl;
				break;
			}
		}

	}
	
	void Xoa()
	{
		int cc;
		cout<<"Nhap lua chon xoa 1<Student> 2<Lecture>: "; cin>>cc;
		if(cc==1)
		{
			int x; 
			cout<<"Nhap vi tri Student can xoa: "; cin>>x;
			for(int i=0;i<n;i++)
			{
				if(i==(x-1))
				{
					for(int j=i;j<n-1;j++)
					{
						li[j]=li[j+1];
					}
				}
			}
			n=n-1;
			li.resize(n);
	    }
	    
	    else if(cc==2)
	    {
	    	int y; 
			cout<<"Nhap vi tri Lecture can xoa: "; cin>>y;
			for(int i=0;i<n;i++)
			{
				if(i==(y-1))
				{
					for(int j=i;j<n-1;j++)
					{
						li[j]=li[j+1];
					}
				}
			}
			n=n-1;
			l.resize(n);
		}
	}
	
	void Sort()
	{
	    for(int i=0;i<n;i++)
	    {
	        for(int j=i+1;j<n;j++)
	        {
	           Student *si = new Student();
	           Student *sj = new Student();
	           if(si->DiemTB()>sj->DiemTB())
	           {
	           		li[i] = si;
	           		li[j] = sj;
			   		swap(li[i],li[j]);
			   }
	        }
	    }
	    cout << endl;
	}

		
};
int main()
{
	Student s("Dinh Vinh Giang", "3107", "Da Nang", 7, 8, 9, 2);
	Lecture l("Vinh Giang Dinh", "7013", "Nang Da", 3,2);
	
	s.Xuat();
	l.Xuat();
	
	List lt;
	
	lt.Nhap();
	cout<<"\n-------------------\n";
	lt.Xuat();
	
	cout<<"\n-------------------\n";
	lt.Them();
	cout<<"\nThong tin sau khi them: "<<endl;
	lt.Xuat();
	
	cout<<"\n-------------------\n";
	lt.Xoa();
	cout<<"\nThong tin sau khi xoa: "<<endl;
	lt.Xuat();
	
	cout<<"\n-------------------\n";
	lt.Sort();
	cout<<"\nThong tin sau khi sort: "<<endl;
	lt.Xuat();
	
	cout<<"\nSee you!\n";
	return 0;
}















