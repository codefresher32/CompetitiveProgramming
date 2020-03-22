#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pii pair<int,int>
#define F first
#define S second
#define pb push_back
#define pp pop_back

unordered_map<int,int>mp;
int l,pi,s1[10005],s2[10005],mn;


class BSTnode
{
    public:
        int data;
        BSTnode *left,*right;
        BSTnode(int x)
        {
           data=x;
           left=right=NULL;
        }
};

BSTnode* BuildTree(int str,int ed)
{
    int in,ch;
    if(str>ed){
        return NULL;
    }
    ch=s2[pi--];
    BSTnode* root=new BSTnode(ch);
    if(str==ed){
        return root;
    }
    in=mp[ch];
    root->right=BuildTree(in+1,ed);
    root->left=BuildTree(str,in-1);

    return root;
}

void PreOrder(BSTnode* root)
{
    if(root==NULL){
        return ;
    }
    if(root->left==NULL&&root->right==NULL){
        mn=min(mn,root->data);
    }
    printf("%d ",root->data);
    PreOrder(root->left);
    PreOrder(root->right);

}




int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int k=0;
    string s;
    stringstream sin;
    BSTnode *root;
    while(getline(cin,s)){
        sin.clear();
        sin<<s;
        k=0;
        while(sin>>s1[k]){
            k++;
        }
        k=0;
        getline(cin,s);
        sin.clear();
        sin<<s;
        while(sin>>s2[k]){
            k++;
        }
        root=NULL;
        l=pi=k;
        pi--;
        for(int i=0;i<l;i++){
           mp[s1[i]]=i;
        }
        mn=INT_MAX;
        root=BuildTree(0,l-1);
        PreOrder(root);
        printf("\n%d\n",mn);
        mp.clear();
    }
    return 0;
}




