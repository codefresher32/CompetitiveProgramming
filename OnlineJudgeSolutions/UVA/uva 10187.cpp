#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define pii pair<int,int>
#define F first
#define S second
#define pb push_back
#define pp pop_back

struct pr
{
    int v,st,du;
    pr(int a,int b,int c){
        v=a,st=b,du=c;
    }
};


vector<pr>G[20005];
map<string,int>mp;
int d[20005];

int cmp(int x,int y)
{
	if(x==-1){
        return 0;
	}
	if(x==y){
        return 0;
	}
	if(x>=18&&x<=24){
        return !((y>=x&&y<=24)||y<6);
	}
	if(x>=1&&x<=6){
		return !(y>=x&&y<6);
	}
}

int bfs(int s,int des,int n)
{
    if(s==0||des==0){
        return -1;
    }
    for(int i=1;i<=n;i++){
        d[i]=1e9;
    }
    int x,y,prev,a,b;
    queue<pii>pq;
    d[s]=0;
    int w;
    pq.push({s,-1});
    while(!pq.empty()){
        pii tp=pq.front();
        pq.pop();
        x=tp.F,prev=tp.S;
        for(pr v:G[x]){
            y=v.v,a=v.st,b=v.du;
            if(d[x]+cmp(prev,a)<d[y]){
                d[y]=d[x]+cmp(prev,a);
                pq.push({y,b});
            }
        }
    }
    return d[des]==1e9?-1:d[des];
}

void clr(int n)
{
    mp.clear();
    for(int i=0;i<=n;i++){
        G[i].clear();
    }
    return ;
}


int main ()
{
//  ios_base::sync_with_stdio(false);
//  cin.tie(NULL);
    int T,n,u,v,id,st,du,tt=0,x,y,z;
    string s1,s2;
    scanf("%d",&T);
    while(T--){
        id=0;
        scanf("%d",&n);
        for(int i=1;i<=n;i++){
            cin>>s1>>s2>>x>>y;
            z=x+y;
            if(z>24){
                z-=24;
            }
            if((x>=6&&x<18)||(z>6&&z<=18)||y>12){
                continue;
            }
            if(!mp[s1]){
                mp[s1]=++id;
            }
            if(!mp[s2]){
                mp[s2]=++id;
            }
            G[mp[s1]].pb(pr(mp[s2],x,z));
        }
        cin>>s1>>s2;
        int ans=bfs(mp[s1],mp[s2],id);
        printf("Test Case %d.\n",++tt);
        if(s1==s2){
            printf("Vladimir needs 0 litre(s) of blood.\n");
        }
        else if(ans==-1){
            printf("There is no route Vladimir can take.\n");
        }
        else{
            printf("Vladimir needs %d litre(s) of blood.\n",ans);
        }
        clr(id);
    }

    return 0;
}

