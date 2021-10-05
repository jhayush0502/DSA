int compareTrees(BSTNode *t1,BSTNode *t2)
{
if(t1==t2) return 1;
if(t1==NULL || t2==NULL) return 0;
if(t1->data!=t2->data) return 1;
if(!compareTrees(t1->left,t2->left)) return 0;
if(!comparTrees(t1->right,t2->right)) return 0;
return 1;
}