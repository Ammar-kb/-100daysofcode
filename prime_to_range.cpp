#include<iostream>
#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int isprime(int n)
{
    int flag=1;
     for (int i = 2; i <= n / 2; ++i) {
        if (n % i == 0) {
            flag = 0;
            return flag;
        }
     }
    return flag;
}
int main ()
{
    int n;
    cin>>n;
    for(int i=2;i<n;i++)
    {
        if(isprime(i))
        cout<<i<<" ";
    }
}
