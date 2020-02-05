#include<stdio.h>
#include<conio.h>

int rear = -1;
int front = -1;
int arr[10];

void enqueue(int);
void dequeue();
void display();

void enqueue(int value)
{
if(rear==9)
{
printf("Queue is Full");
}
else
{
if(front==-1)
	front = 0;
rear++;
arr[rear] = value;
printf("\n%d is Inserted in the Queue ",value);
}
 }

void dequeue()
{
if(front==-1)
{
printf("\nQueue is Empty");
}
else
{
front++;
}
if(front>rear)
front = rear = -1;
}
void display()
{
if(rear==-1)
printf("\nQueue is empty");
else
{
int i;
printf("\nThe Elements of the queue are :");
for(i=front;i<=rear;i++)
printf("\n%d\t",arr[i]);
}
}

int main()
{
enqueue(1);
enqueue(2);
display();
return 0;
}
