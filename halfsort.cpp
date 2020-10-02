#include <iostream>
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
    int l;
    if(n%2==1)
    l = n/2 + 1;
    else
    l = n/2;
    sort(arr,arr+l);
    sort(arr+l,arr+n,greater<int>());
    for(auto i : arr)
    cout<<i<<" ";
}
