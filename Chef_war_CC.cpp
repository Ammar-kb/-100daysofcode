#include<iostream>
using namespace std;
 int main()
 {
     int t;
     cin>>t;
     int n,p;
     while(t--)
     {
         cin>>n>>p;
         while(p!=0 && n>p)
         {
             n = n-p;
             p=p/2;
         }
         if(p==0)
         cout<<0<<endl;
         else
         cout<<1<<endl;
     }
     return 0;
 }
