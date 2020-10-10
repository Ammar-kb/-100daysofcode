#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int isprime(int n)
{
    int flag=0;
    if(n<=3)
    return 1;
    for(int i=2;i<n;i++)
    {
        if(n%i==0){
        flag=0;
        return flag;}
        else
        flag=1;
    }
    return flag;
}
int main()
{
    int n;
    for(;;){
        cin>>n;
        if(n==0)
        break;
        if(isprime(n))
        {
            cout<<"no";
        }
        else
        {
            cout<<"yes";
        }
    }
}
