#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i=5,j=5;
    int x;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            cin>>x;
            if(x)
            {
                cout<<abs(i-3)+abs(j-3);
                break;
            }
        }
    }
    
}
