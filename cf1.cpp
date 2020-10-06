#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,h;
    cin>>n>>h;
    int sum=0;
    while(n--)
    {
        int a;
        cin>>a;
        if(a<=h)
        sum++;
        else if(a%h>0)
        sum+=a/h+1;
        else
        sum+=a/h;
    }
    cout<<sum;
}