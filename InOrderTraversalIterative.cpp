#include<stdio.h>
#include<stdlib.h>
#include<bits/stdc++.h>
#include<iostream>
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

void inOrderIterative(BSTNode *t)
{
if(t==NULL) return; 
stack<BSTNode *> s;
BSTNode *m=t;
while(1)
{
if(m)
{
s.push(m);
m=m->left;
}
else
{
if(s.empty()) break;
m=s.top();
s.pop();
cout<<m->data<<endl;
m=m->right;
}
}
return;
}

int main()
{
int num,ch,p;
set<int>s;
while(1)
{
printf("1. Insert Data\n");
printf("2. Inorder Traversal Iterative\n");
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
inOrder(root);
}
if(ch==3) break;
}
return 0;
}