#include<bits/stdc++.h>
using namespace std;
//
//int main()
//{
//    int n;
//    cin>>n;
//    int *a=new int[n];
//    int j=0, d=0;
//    for(int i=0;i<n;i++)
//    {
//        cin>>a[i];
//    }
//	for(int i=0;i<n-1;i++)
//	{
//		for(int j=i+1;j<n;j++)
//		{
//			if(a[i]==a[j])
//			{
//				int	tam=a[j];
//				a[j]=a[i+1];
//				a[i+1]=tam;	
//				break;
//				
//			}
//		}
//	}
//cout<<endl;
//    int k=0;
//    while(j<(n-1))
//    {
//    	cout<<a[j]<<" ";
//    	for(int i=0;i<n;i++)
//	    {
//	        if(a[i]==a[j])
//	        {
//	        	d++;
//	        }
//	    } 
//		j++; 
//	    for(int i=j+1;i<n;i++)
//	    {
//	    	if(a[i]!=a[j])
//	    	{
//	    		j=i;
//	    		break;
//			}
//		}
//	    cout<<" "<<d<<endl;
//	    d=0;
//	}
//}
//#include<bits/stdc++.h>
//using namespace std;
//
//int main()
//{
//	int n; cin>>n;
//	int s=0;
//	int tam;
//	for(;n;)
//	{
//		tam = n%10;
//		s = s*10 + tam;
//		n = n/10;
//	}
//	cout<<s;
//}

int main()
{
	string s;
	fflush(stdin);
	getline(cin,s);
	cout<<s[1];
	return 0;	
}































