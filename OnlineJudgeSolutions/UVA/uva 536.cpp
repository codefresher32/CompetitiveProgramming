#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pii pair<int,int>
#define F first
#define S second
#define pb push_back
#define pp pop_back

unordered_map<char,int>mp;
string s1,s2;
int l,pi=0;


class BSTnode
{
    public:
        char data;
        BSTnode *left,*right;
        BSTnode(char x)
        {
           data=x;
           left=right=NULL;
        }
};

BSTnode* BuildTree(int str,int ed)
{
    char ch;
    int in;
    if(str>ed){
        return NULL;
    }
    ch=s1[pi++];
    BSTnode* root=new BSTnode(ch);
    if(str==ed){
        return root;
    }
    in=mp[ch];
    root->left=BuildTree(str,in-1);
    root->right=BuildTree(in+1,ed);

    return root;
}

void PostOrder(BSTnode* root)
{
    if(root==NULL){
        return ;
    }
    PostOrder(root->left);
    PostOrder(root->right);
    printf("%c",root->data);
}




int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    BSTnode *root;
    while(cin>>s1>>s2){
        root=NULL;
        l=s1.size();
        for(int i=0;i<l;i++){
           mp[s2[i]]=i;
        }
        root=BuildTree(0,l-1);
        PostOrder(root);
        printf("\n");
        mp.clear();
    }
    return 0;
}



