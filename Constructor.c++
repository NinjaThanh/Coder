#include<bits/stdc++.h>
using namespace std;
class Car{
    public:
    
    Car(){
        cout<<"Day la default constructor!"<<endl;
    }
    Car(string brandCar)
    {
        brand = brandCar;
        cout<<"Day la constructor 1!"<<endl;
    }

    Car(string brandCar, string colorCar)
    {
        brand = brandCar;
        color = colorCar;
        cout<<"Day la constructor 2!"<<endl;
    }
    string brand;
    string color;
    void ShowInf()
    {
        cout<<"Brand: "<<brand<<endl;
        cout<<"Color: "<<color<<endl;
    }
};
 
int main()
{
    Car n1("Giang ne!","Ghe hong!") ;
    n1.ShowInf();
}