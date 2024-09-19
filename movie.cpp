//thiet ke lop film gom ten films, dao dien, nam phat hanh
//nhap vao 2 bo film, in thong tin film so sanh 2 film co cung dao dien hay khong
//dinh nghia toan tu vao, toan tu ra, toan tu so sanh, ham tao, ham tao sao chep, doi ten dao dien cua film thanh ten t
#include<bits/stdc++.h>
using namespace std;
class Movie{
	private:
		string tenf, daodien;
		float namsx;
	public:
		void Nhap()
		{
			cout<<"Nhap ten film: ";
			fflush(stdin);
			getline(cin, tenf);
			cout<<"Nhap ten dao dien: ";
			fflush(stdin);
			getline(cin, daodien);
			cout<<"Nhap nam san xuat: "; cin>>namsx;
			cout<<endl;
		}
		void In()
		{
			cout<<"Ten film: "<<tenf<<endl;
			cout<<"Ten dao dien: "<<daodien<<endl;
			cout<<"Nam san xuat: "<<namsx<<endl;
		}
        friend istream &operator>>(istream &is, Movie &film2)
        {
			cout<<"Nhap ten film: ";
			fflush(stdin);
			getline(cin, film2.tenf);
			cout<<"Nhap ten dao dien: ";
			fflush(stdin);
			getline(cin, film2.daodien);
			cout<<"Nhap nam san xuat: "; cin>>film2.namsx;      
			return is;  	
		}
		friend ostream &operator<<(ostream &os, Movie film2)
		{
			cout<<"Ten film: "<<film2.tenf<<endl;
			cout<<"Ten dao dien: "<<film2.daodien<<endl;
			cout<<"Nam san xuat: "<<film2.namsx<<endl;
			return os;
		}
		void set_daodien(string T) {
            this->daodien =T;
       }
       bool cung_daodien(Movie film2)
	   { 
       return (this->daodien == film2.daodien);
       }
        Movie()
		{
            tenf = "";
            daodien = "";
            namsx = 0;
        }
        movie(string tenf, string daodien, int namsx){
        this->tenf = tenf;
        this->daodien = daodien;
        this->namsx = namsx;
       }
       movie(const Movie& other){
       tenf = other.tenf ;
       daodien = other.daodien ;
       namsx = other.namsx;
       }
};

int main()
{
	Movie film1, film2;
	film1.Nhap();
	film2.Nhap();
	cout<<"Noi dung film 1!"<<endl;
	cout<<endl;
	film1.In();
	cout<<endl;
	cout<<"Noi dung film 2"<<endl;;
	film2.In();
	if(film1.cung_daodien(film2))
	{
    cout<<"\nHai phim co cung dao dien:";
    }
	else 
	{
    cout<<"\nHai phim khong cung dao dien:";
    }
    Movie film3(film2);
    cout<<"\nSao chep tu phim film1:"<<endl;
    film3.In();
    string T = "T";
    film1.set_daodien(T);
    cout<<"\nSau khi doi dao dien:"<<endl;
    film1.In();
}
