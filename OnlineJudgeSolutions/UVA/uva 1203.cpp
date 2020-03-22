#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pii pair<int,int>
#define F first
#define S second
#define pb push_back
#define pp pop_back

struct node
{
    int id,v;
    node(int a,int b){
        id=a;
        v=b;
    }
    bool operator<(const node &p)const{
        if(p.v==v){
            return id>p.id;
        }
        else{
            return v>p.v;
        }
    }
};




int main()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
    int id,a,k,v;
    char s[50],ch[20];
    priority_queue<node>pq;
    vector<pii>vc;
    while(gets(s)&&strlen(s)){
        if(s[0]=='#'){
            scanf("%d",&k);
            for(pii x:vc){
                for(int j=1;j<=k;j++){
                    pq.push(node(x.F,x.S*j));
                }
            }
            break;
        }
        else{
            sscanf(s,"%s %d %d",&ch,&id,&v);
            vc.pb({id,v});
        }
    }
    int c=0;
    while(c<k){
        node tp=pq.top();
        pq.pop();
        printf("%d\n",tp.id);
        c++;
    }
    return 0;
}

