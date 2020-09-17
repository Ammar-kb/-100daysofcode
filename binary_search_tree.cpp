#include<iostream>
#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node *left,*right;
};

struct node *create(int data)
{
    struct node *node = (struct node *)malloc(sizeof(struct node));
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return(node);
}
void preorder(struct node *node)
{
    if(node==NULL)
    return;
    cout<<node->data<<endl;
    preorder(node->left);
    preorder(node->right);
}
struct node* insert(struct node *node,int key)
{
    if(node==NULL)
    return create(key);
    if(node->data>key)
    node->left = insert(node->left,key);
    else if(node->data<key)
    node->right = insert(node->right,key);
}
int main()
{
    struct node *head = (struct node *)malloc(sizeof(struct node));
    head->data = 50;
    insert(head,40);
    insert(head,60);
    insert(head,70);
    insert(head,20);
    preorder(head);
}
