#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    int b;
	    int count=0;
	    for(int i=0;i<n;i++)
	    for(int j=i+1;j<n;j++){
	    b = arr[i]&arr[j];
	    if(b==arr[i])
	    count++;
	    
	    }
	    cout<<count<<endl;
	}
	return 0;
}
