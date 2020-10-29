#include<iostream>
#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main ()
{
    string str;
    int count = 0, i; 
    getline(cin,str);
    int count1 = str.size();
    for (i = 0; str[i] != '\0';i++)
    {
        if (str[i] == ' ')
            count++;    
    }
    cout<<count1<<endl;
    cout<<count+1;
    return 0;
}
