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

void preOrderIterative(BSTNode *t)
{
if(t==NULL) return;
BSTNode *m=t;
stack<BSTNode *> s;
while(1)
{
while(m)
{
printf("%d\n",m->data);
s.push(m);
m=m->left;
}
if(s.empty()) break;
m=s.top();
s.pop();
m=m->right;
}
return;
}