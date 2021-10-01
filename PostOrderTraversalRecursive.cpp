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
void postOrder(BSTNode *t)
{
if(t==NULL) return;
postOrder(t->left);
postOrder(t->right);
printf("%d\n",t->data);
}