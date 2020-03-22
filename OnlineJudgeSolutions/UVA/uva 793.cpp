#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int parrent[100000];
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
    int u,v,x,y,a,b,n,su,us;
    char c;
    scanf("%d",&T);
    for(int t=1;t<=T;t++){
       scanf("\n%d\n",&n);
       for(int i=1;i<=n;i++){
            parrent[i]=i;
       }
       su=us=0;
       while(true){
            if(!getline(cin,s)||s.empty()){
                 break;
            }
            stringstream ss(s);
            ss>>c>>u>>v;
            if(c=='c'){
                Union(u,v);
            }
            else{
               FindParrent(u)==FindParrent(v)?su++:us++;
            }
       }
       if(t!=1){
            printf("\n");
       }
       printf("%d,%d\n",su,us);
       memset(parrent,0,sizeof(parrent));

    }
    return 0;
}


