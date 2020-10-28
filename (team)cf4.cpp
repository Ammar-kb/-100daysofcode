#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n][3],count=0,count1=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>arr[i][j];     
        }
    }
    for(int i=0;i<n;i++)
    {
        count=0;
        for(int j=0;j<3;j++)
        {
            if(arr[i][j])
            count++;
        }
        if(count>=2)
        count1++;
    }
    cout<<count1;
}
   
