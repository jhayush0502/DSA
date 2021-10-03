vector <int> RightView(BSTNode *root)
{
vector <int> v;
queue <BSTNode *> q;
if(!root) return v;
q.push(root);
int x;
BSTNode *t;
while(!q.empty())
{
x=q.size();
while(x--)
{
t=q.front();
q.pop();
if(t->left) q.push(t->left);
if(t->right) q.push(t->right);
}
v.push_back(t->data);
}
return v;
}