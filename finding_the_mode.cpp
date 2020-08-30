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
	    int v[11];
	    memset(v,0,sizeof(v));
	    for(int i=0;i<n;i++){
	    int a;
	    cin>>a;
	    v[a]++;}
	    
	    int v1[10000];
	    memset(v1,0,sizeof(v1));
	    for(int i=1;i<11;i++){
	    if(v[i]==0)continue;
	    v1[v[i]]++;}
	    
	    int ans=0;
	    int final = 10000;
	    for(int i=0;i<10000;i++)
	    {
	      if(v1[i]==ans)
	      continue;
	      if(ans<v1[i]){
	      ans=v1[i];
	      final=i;
	    }
	    }
	    cout<<final<<endl;
	}
	return 0;
}
