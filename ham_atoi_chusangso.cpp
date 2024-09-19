//viet chuong trinh tim so lon nhat tu n so theo dang tham so ham
#include<bits/stdc++.h>
using namespace std;
int main(int argc, char **argv)
{
	if(argc<2)
	cout<<"\nKhong tim so lon nhat!\n";
	else
	{
	    int max=0;
	    for(int i=1; i<argc; i++)
		{
			int t=atoi(argv[i]); cout<<" "<<argv[i];
	     	if(i>max)
		    max=i;
	    }
	    cout<<"\nSo lon nhat: "<<max<<endl;
    }
}
