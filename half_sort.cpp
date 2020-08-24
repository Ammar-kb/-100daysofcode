#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int f(int x,int y)
{
    if(x>y)
    return x>y;
}
int main()
{
    int n,t;
    cin>>n>>t;
    vector<int>v(n),a(t);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    int j=0;
    for(int i=t;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(v[i]<v[j])
            swap(v[i],v[j]);
        }
    }
    for(int i : v)
    cout<<i<<" ";
}