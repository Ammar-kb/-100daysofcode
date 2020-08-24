#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int isprime(int n)
{
    if(n<=1)
    return 0;
    for(int i=2;i<=n/2;i++)
    {
        if(n%i==0)
        return 0;
    }
    return 1;
}
int main()
{
    int n;
    cin>>n;
    int flag=0;
    for(int i=0;i<n/2;i++)
    {
        if(isprime(n-i) && isprime(i)){
        cout<<n-i<<" + "<<i<<"\n";
        flag++;}
    }
    if(flag==0)
    cout<<"Not possible";
}