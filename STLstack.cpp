#include<iostream>
#include<stack>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    stack<int> s1;
    s1.push(5);
    s1.push(3);
    s1.push(2);
    cout<<"Choose one of the options displayed below :\n 1.Push into the stack : \n 2.Pop from the stack : \n 3.Display the top pointer : ";
    cin>>n;
    switch(n)
    {
    case 1:
    int t;
    cout<<"Enter the number you want to push in the stack";
    cin>>t;
    s1.push(t);
    break;
    
    case 2:
    cout<<"The element popped is :";
    cout<<s1.top();
    s1.pop();
    break;
    
    case 3:
    cout<<"The element at the top is : "<<s1.top();
    break;
    
    default:
    cout<<"Invalid option";
}

    return 0;
}
