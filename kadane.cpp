#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int sum=0;
    int maxi=INT_MIN;
    for(auto i : arr)
    {
        sum+=i;
        maxi=max(sum,maxi);
        if(sum<0)sum=0;
    }
    cout<<maxi<<endl;
}
