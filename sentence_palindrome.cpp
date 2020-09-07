#include <iostream>
#include<string.h>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string name;
    getline(cin,name);
    int n = name.size();
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(name[i]==' ')
        count++;
    }
    int j=0;
    char name1[n-count];
    for(int i=0;i<n;i++)
    {
        if(isalpha(name[i])){
        name1[j]=name[i];
        j++;}
    }
    int n1 = strlen(name1);
    int flag=0;
    for(int i=0;i<n1;i++)
    {
        if(name1[i]!=name1[n1-1-i]){
        flag=1;
        break;
        }
    }
    if(flag)
    cout<<"Not a Palindrome";
    else if(flag==0)
    cout<<"palindrome";
    return 0;
}