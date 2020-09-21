using namespace std;
#include<iostream>
int func(int n)
{
    int array[3]={10,5,1};
    int count;
    for(int i=0;n>0;i++)
    {
        count = count + n/array[i];
        n = n % array[i];
    }
    return count;
}
int main()
{
    int n;
    cin>>n;
    cout<<func(n);
    return 0;
}