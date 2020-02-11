#include<iostream>
#include<stack>
#include<string>
using namespace std;

bool balparanthesis(string str)
{
stack <char> stack;

for(int i = 0; i < str.length(); i++)
{
if (str[i]== '(' || str[i]=='{')
{
 stack.push(str[i]);
}
if(str[i]==')' || str[i]=='}')
{
if(stack.empty())
{
return false;
}
char top = stack.top();
stack.pop();
if((top=='(' && str[i]!=')') || (top=='{' && str[i]!='}'))
{
return false;
}
}
}
return stack.empty();
}
int main()
{
string str1 = "{(())}";
if(balparanthesis(str1))
cout<<"Balanced";
else 
cout<<"Not Balanced";
return 0;
}
