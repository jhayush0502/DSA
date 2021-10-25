#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<bits/stdc++.h>
using namespace std;
typedef struct _BSTNode
{
struct _BSTNode *right;
struct _BSTNode *left;
int data;
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

int height(BSTNode *t)
{
if(!t) return 0;
return 1+max(height(t->left),height(t->right));
}

int Diameter(BSTNode *t)
{
if(t==NULL) return 0;
int lh=height(t->left); 
int rh=height(t->right);
int ld=Diameter(t->left);
int rd=Diameter(t->right);
int h=max(lh+rh+1,max(ld,rd));
return h; 
}

int main()
{
int num,ch,p;
BSTNode *t;
set<int>s;
while(1)
{
printf("1. Insert Data\n");
printf("2. Diameter of BST\n");
printf("3. Exit\n");
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
int x=Diameter(root);
printf("Diameter of BST is : %d\n",x);
}
if(ch==3)
{
break;
}
}
return 0;
}