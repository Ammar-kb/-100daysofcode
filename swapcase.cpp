#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string name;
    getline(cin,name);
    for(int i=0;i<name.size();i++)
    {
        if(name[i]==toupper(name[i]))
        name[i]=tolower(name[i]);
        else
        name[i]=toupper(name[i]);
    }
    cout<<name;
}
