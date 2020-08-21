#include <iostream>

using namespace std;
int gcd(int a,int b)
{
    if(b==0)
    return a;
    int a1 = a%b;
    gcd(b,a1);
}
int main()
{
int a,b;
cin>>a>>b;
int c = gcd(a,b);
cout<<c;
}
