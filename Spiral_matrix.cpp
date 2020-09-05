#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll x,y,z,z2,ans=0;
        cin>>x>>y;
        z = max(x,y);
        z2 = (z-1)*(z-1);
        if(z%2){
            if(x==z)
            ans = z2+y;
            else
            ans = z2+2*z-x;}
        else
        {
            if(y==z)
            ans = z2+x;
            else
            ans = z2+2*z-y;
        }
        cout<<ans<<endl;
        }
        return 0;
    }