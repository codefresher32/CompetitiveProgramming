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
int pi=0;


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
    BSTnode* rt=new BSTnode(ch);
    if(str==ed){
        return rt;
    }
    in=mp[ch];
    rt->left=BuildTree(str,in-1);
    rt->right=BuildTree(in+1,ed);

    return rt;
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
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
    int t,l;
    BSTnode *root;
    scanf("%d",&t);
    while(t--){
        cin>>l>>s1>>s2;
        pi=0;
        root=NULL;
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

