#include <iostream>

using namespace std;
int rev(int n)
{
    int rem,r;
    while(n!=0)
    {
    rem = n%10;
    r = r*10+rem;
    n = n/10;
    }
    return r;
}
int ispalindrome(int n)
{
    if(n == rev(n))
    return 1;
    else 
    return 0;
}
int main()
{
    int n;
    int rem,r;
    cin>>n;
    int n1;
    while(1)
    {
        n1 = rev(n);
        cout<<n;
        cout<<n1;
        if(ispalindrome(n+n1))
        {
            break;
        }
        else
        {
            n = n+n1; 
        }
    }
}
