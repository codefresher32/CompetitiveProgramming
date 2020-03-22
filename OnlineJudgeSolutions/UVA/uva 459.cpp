#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int parrent[100];
set<int>st;

int FindParrent(int node)
{
    if(node==parrent[node]){
        return node;
    }
    return parrent[node]=FindParrent(parrent[node]);
}

void Union(int x,int y)
{
    x=FindParrent(x);
    y=FindParrent(y);
    if(x!=y){
        parrent[x]=y;
    }
    return ;
}

void clr()
{
    memset(parrent,0,sizeof(parrent));
    st.clear();
    return ;
}


int main()
{
    int t,T;
    string s;
    int u,v,x,y,a,b,n;
    scanf("%d\n\n",&T);
    for(int t=1;t<=T;t++){
       getline(cin,s);
       n=s[0]-'A'+1;
       for(int i=1;i<=n;i++){
            parrent[i]=i;
       }
       while(true){
            if(!getline(cin,s)||s.empty()){
                 break;
            }
            Union(s[0]-'A'+1,s[1]-'A'+1);
       }
        for(int i=1;i<=n;i++){
            u=FindParrent(i);
            st.insert(u);
        }
        if(t!=1){
            printf("\n");
        }
        printf("%d\n",st.size());
        clr();
    }
    return 0;
}

