#include <iostream>

using namespace std;
long long gcd(long long a,long long b)
{
    if(b==0)
    return a;
    long long a1 = a%b;
    gcd(b,a1);
}
int main()
{
long long a,b;
cin>>a>>b;
long long c = gcd(a,b);
cout<<((a*b)/c);
}