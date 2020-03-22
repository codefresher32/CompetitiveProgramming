#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pii pair<int,int>
#define F first
#define S second
#define pb push_back
#define pp pop_back


class BSTnode
{
    public:
        int data;
        BSTnode *left;
        BSTnode *right;
        BSTnode(int x)
        {
            data=x;
            left=right=NULL;
        }
};


BSTnode* Insert(BSTnode* root,int x)
{
    if(root==NULL){
        root=new BSTnode(x);
    }
    else if(root->data>=x){
        root->left=Insert(root->left,x);
    }
    else{
        root->right=Insert(root->right,x);
    }
    return root;
}

void PostOrder(BSTnode* root)
{
    if(root==NULL){
        return ;
    }
    PostOrder(root->right);
    PostOrder(root->left);
    printf("%d\n",root->data);
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    BSTnode *root=NULL;
    cin>>n;
    int a[3005]={0};
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    for(int i=n;i>=1;i--){
        root=Insert(root,a[i]);
    }
    PostOrder(root);
    return 0;
}


