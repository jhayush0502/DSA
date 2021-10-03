vector <int> leftView(BSTNode *root)
{
vector<int> v;
if(!root) return v;
queue <Node *> q;
q.push(root);
int x,i;
Node *t;
while(!q.empty())
{
x=q.size();
for(int i=0;i<x;i++)
{
t=q.front();
q.pop();
if(i==0) v.push_back(t->data);
if(t->left) q.push(t->left);
if(t->right) q.push(t->right);
}
}
return v;
}