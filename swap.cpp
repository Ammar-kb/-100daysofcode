#include<iostream>
using namespace std;
int main()
{
int a=10,b=5;
cout<<"before"<<a<<" "<<b;
a = a+b;
b = a-b;
a = a-b;
cout<<"after"<<a<<" "<<b;
}
