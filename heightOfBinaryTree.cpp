#include<stdio.h>
#include<stdlib.h>
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int c;
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

int l,r;
int HeightOfBinaryTree(BSTNode *t)
{
if(t==NULL) return 0;
r=HeightOfBinaryTree(t->right);
l=HeightOfBinaryTree(t->left);
if(l>r) c=l+1;
else c=r+1;
return c;
}

int main()
{
int num,ch,p;
set<int>s;
while(1)
{
printf("1. Insert Data\n");
printf("2. Height Of Binary Tree\n");
printf("10.Exit\n");
printf("Enter your choice :");
scanf("%d",&ch);
fflush(stdin);
if(ch==1)
{
printf("Enter data to insert : ");
scanf("%d",&num);
p=s.size();
s.insert(num);
if(s.size()==p) 
{
printf("Duplicate Elements can not be added\n");
continue;
}
fflush(stdin);
insert(num);
}
if(ch==2)
{
int x=HeightOfBinaryTree(root);
printf("%d\n",x);
c=0;
}
if(ch==10) return 0;
}
return 0;
}