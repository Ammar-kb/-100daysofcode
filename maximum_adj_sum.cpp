#include<iostream>
#include<bits/stdc++.h> 
using namespace std;
int main()
{
int n;
cin>>n;
int arr[n];
int sum=0,sum1=0;
for(int i=0;i<n;i++)
{
cin>>arr[i];
}
for(int i=0;i<n;i++){
sum+=arr[i];
i++;
}
for(int i=1;i<n;i++){
sum1+=arr[i];
    i++;
}
cout<<max(sum,sum1);
}