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

void preOrder(BSTNode *t)
{
if(t==NULL) return;
printf("%d\n",t->data);
preOrder(t->left);
preOrder(t->right);
}
