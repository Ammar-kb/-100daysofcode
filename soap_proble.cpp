#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t;
    cin>>n;
    vector<int>A(n);
    cin>>t;
    vector<int>M(t);
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    for(int i=0;i<t;i++)
    {
        cin>>M[i];
    }
    sort(A.begin(),A.end());
    int count=0;
    for(int i=0;i<t;i++)
    {
        count=0;
        for(int j=0;j<n;j++)
        {
            if(A[j]<M[i])
            count++;
        }
        cout<<count<<" ";
    }
}