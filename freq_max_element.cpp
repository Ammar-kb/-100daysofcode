#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>arr;
    for(int i=0;i<n;i++){
    int a;
    cin>>a;
    arr.push_back(a);}
    sort(arr.begin(),arr.end());
    auto b = *(arr.end()-1);
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==b)
        count++;
    }
    cout<<count;
}
