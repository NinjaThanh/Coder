#include<bits/stdc++.h>
using namespace std;

class Xe{
	public:
	string sohieu, mau, xuatxu;
		virtual void Nhap() {}
		virtual double Tinhgiaban() = 0;
};

class Xemay : public Xe{ 
	public:
	    string hangsx;
	    double giachuaVAT, giacoVAT;
		virtual void Nhap() {}
		virtual double Tinhgiaban()
		{
			if(giachuaVAT <= 2000)
            {
                giacoVAT =  giachuaVAT + giachuaVAT*10/100;
            }
            else
            {
                giacoVAT = giachuaVAT + giachuaVAT*15/100;
            }
            return giacoVAT;
		}
};

class DMXe : public Xemay{
	public:
		Xemay x[10];
		
		void Nhap()
		{
			for(int i=0;i<10;i++)
			{
				cout<<"Nhap thong tin xe so "<<i+1<<": "<<endl;
                cout<<"Nhap so hieu: ";
                fflush(stdin);
                getline(cin,x[i].sohieu);
		        cout<<"Nhap mau: ";
		        fflush(stdin);
		        getline(cin,x[i].mau);
		        cout<<"Nhap xuat xu: ";
		        fflush(stdin);
		        getline(cin,x[i].xuatxu);
		        cout<<"Nhap hang san xuat: ";
		        fflush(stdin);
		        getline(cin,x[i].hangsx);
		        cout<<"Nhap gia chua co VAT: ";
		        cin>>x[i].giachuaVAT;
		        cout<<endl;
			}
		}
		
		void Hienthi()
		{
			for(int i=0;i<10;i++)
            {
            	
            	
            	cout<<"\nThong tin xe "<<i + 1<<":"<<endl;
                cout<<"So hieu: "<<x[i].sohieu<<endl;
                cout<<"Mau: "<<x[i].mau<<endl;
                cout<<"Xuat xu: "<<x[i].xuatxu<<endl;
                cout<<"Hang san xuat: "<<x[i].hangsx<<endl;
                cout<<"Gia chua co VTA: "<<x[i].giachuaVAT<<endl;
                x[i].giacoVAT = x[i].Tinhgiaban();
                cout<<"Gia co VTA: "<<x[i].giacoVAT;
                
                cout<<endl;
            }
            cout<<endl;
		}
		
		double Tinhtongtien()
		{
			double s=0;
			for(int i=0;i<10;i++)
			{
				s += x[i].giacoVAT;
			} 
			cout<<"Tong gia ban: "<<s<<endl;
			cout<<endl;
		}
		
		void Maxmin()
		{
			double max = 0.0, min;
			for(int i=0;i<10;i++)
			{
				if(x[i].giacoVAT > max)
				{
					max = x[i].giacoVAT;
				}
			}
			
			min = max;
			for(int i=0;i<10;i++)
			{
				
				if(x[i].giacoVAT < min)
				{
					min=x[i].giacoVAT;
				}
			}
			
			cout<<"Xe co gia ban cao nhat: "<<endl;
			for(int i=0;i<10;i++)
			{
				if(x[i].giacoVAT==max)
				{
					cout<<"So hieu: "<<x[i].sohieu<<endl;
		        	cout<<"Mau: "<<x[i].mau<<endl;
		        	cout<<"Xuat xu: "<<x[i].xuatxu<<endl;
		        	cout<<"Hang san xuat:"<<x[i].hangsx<<endl;
		        	cout<<"Gia chua VAT: "<<x[i].giachuaVAT<<endl;
		        	cout<<"Gia co VAT: "<<x[i].giacoVAT<<endl;
				}
				cout<<endl;
			}
			
			cout<<"Xe co gia ban thap nhat: "<<endl;
			for(int i=0;i<10;i++)
			{
				if(x[i].giacoVAT==min)
				{
					cout<<"So hieu: "<<x[i].sohieu<<endl;
		        	cout<<"Mau: "<<x[i].mau<<endl;
		        	cout<<"Xuat xu: "<<x[i].xuatxu<<endl;
		        	cout<<"Hang san xuat:"<<x[i].hangsx<<endl;
		        	cout<<"Gia chua VAT: "<<x[i].giachuaVAT<<endl;
		        	cout<<"Gia co VAT: "<<x[i].giacoVAT<<endl;
				}
				cout<<endl;
			}
			cout<<endl;
		}
		
		void Timxe()
	    {
	    	string vt2;
	    	int dem=0;
	    	cout<<"Nhap so hieu xe can tim: ";
	    	fflush(stdin);
	    	getline(cin,vt2);
	    	cout<<"\nThong tin xe can tim: "<<endl;
	    	for(int i=0;i<10;i++)
		    {
		    	if(x[i].sohieu.compare(vt2)==0)
		    	{
		    		cout<<"So hieu: "<<x[i].sohieu<<endl;
		        	cout<<"Mau: "<<x[i].mau<<endl;
		        	cout<<"Xuat xu: "<<x[i].xuatxu<<endl;
		        	cout<<"Hang san xuat:"<<x[i].hangsx<<endl;
		        	cout<<"Gia chua VAT: "<<x[i].giachuaVAT<<endl;
		        	cout<<"Gia co VAT: "<<x[i].giacoVAT<<endl;
		        	dem++;
				}
				cout<<endl;
		    }
		    if(dem==0)
		    {
		    	cout<<"Khong co du lieu! "<<endl;
			}
		}
};

int main()
{
	DMXe d;
	
	d.Nhap();
	
	d.Hienthi();
	
	d.Tinhtongtien();
	
	d.Maxmin();
	
	d.Timxe();
	
	return 0;
}





















