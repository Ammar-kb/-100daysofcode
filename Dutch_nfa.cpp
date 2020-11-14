#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    
    int arr[n];
    memset(arr,0,3);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int low=0;
    int mid=0;
    int high = n-1;
    while(mid<=high)
    {
        switch(arr[mid])
        {
            case 0:
            swap(arr[low],arr[mid]);
            low++;
            mid++;
            break;
               
            case 1:
            mid++;
            break;
            
            case 2:
            swap(arr[mid],arr[high]);
            high--;
            break;
        }
    }
    for(int i : arr)
    cout<<i<<" ";
}
