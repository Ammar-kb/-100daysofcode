#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{   
    int n,m,count=0;
    cin>>n>>m;
    do
    {
        n=n*3;
        m=m*2;
        count++;
    }while(n<=m);
    cout<<count;
}
