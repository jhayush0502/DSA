#include<stdio.h>
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
typedef struct _BSTNode
{
int data;
int flag=1;
struct _BSTNode *left,*right;
}BSTNode;

BSTNode *root=NULL;
BSTNode *createNode(int data)
{
BSTNode *t;
t=(BSTNode *)malloc(sizeof(BSTNode));
t->data=data;
t->left=NULL;
t->right=NULL;
return t;
}


void insert(int data)
{
BSTNode *t,*j;
t=createNode(data);
if(root==NULL)
{
root=t;
return;
}
j=root;
while(1)
{
if(t->data<j->data)
{
if(j->left==NULL)
{
j->left=t;
break;
}
else
{
j=j->left;
}
}
else
{
if(j->right==NULL)
{
j->right=t;
break;
}
else
{
j=j->right;
}
}
}
}


void inOrder(BSTNode *t)
{
if(t==NULL) return;
inOrder(t->left);
printf("%d\n",t->data);
inOrder(t->right);
}


int main()
{
int ch,a;
while(1)
{
printf("1)Insert\n");
printf("2)Inorder traversal \n");
printf("3)Exit");
if(ch==1)
{
printf("Enter the data : ");
scanf("%d",&a);
insert(a);
}
if(ch==2)
{
inOrder();
}
else break;
}
return 0;
}