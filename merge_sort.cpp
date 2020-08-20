#include <iostream>
using namespace std;
int merge(int *arr,int low,int mid,int high)
{
    int i=low,j=mid+1,k=0;
    int temp[high-low+1];
    while(i<=mid && j<=high)
    {
        if(arr[i]<arr[j])
        {
            temp[k] = arr[i];
            k++;
            i++;
        }
        else
        {
            temp[k] = arr[j];
            k++;
            j++;
        }
    }
        while(i<=mid)
        {
            temp[k]=arr[i];
            k++;
            i++;
        }
        while(j<=high)
        {
            temp[k]=arr[j];
            k++;
            j++;
        }
    
    for (i = low; i <= high; i++)
	{
		arr[i] = temp[i-low];
	}
}
int mergesort(int *arr,int low,int high)
{
    int mid;
    if(low<high)
    {
    mid = (low+high)/2;
    mergesort(arr,low,mid);
    mergesort(arr,mid+1,high);
    merge(arr,low,mid,high);
    }
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    mergesort(arr,0,n-1);
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
}
