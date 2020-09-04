#include<iostream>
using namespace std;
// #define l1 long long;
int main()
{
    long long n;
    long long s=0;
    cin>>n;
    for(int i=1;i<n;++i)
    {
        int a;
        cin>>a;
        s+=a;
    }
    cout<<n*(n+1)/2-s;
    return 0;
}