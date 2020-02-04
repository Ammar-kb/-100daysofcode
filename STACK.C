#include<stdio.h>
#include<conio.h>
int top=-1;
int a[10];
int push(int data)
{
if(!isfull())
{
top++;
a[top] = data;
}
else                    {
printf("The Stack is Full");
}
return 0;
}
int isfull()
{
if(top==10)   {
printf("The Stack is full");
}
return 0;
}
int isempty()
{
if(top==-1)
printf("The Stack is empty");
else
{
return 0;
}
}
int pop()
{
int data;
if(!isempty())
{
data = a[top];
top--;
return data;
}
else
printf("Could not pop it");
return 0;
}

int main(){
push(10);
push(5);
push(7);
push(3);
push(6);

while(!isempty()){
int data = pop();
printf("%d\n",data);
}
return 0;
}