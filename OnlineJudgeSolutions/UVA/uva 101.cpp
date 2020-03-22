#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
#define pii pair<int,int>
#define pi pair<int,string>
#define F first
#define S second
#define pb push_back
#define pp pop_back

int n;
int mp[30];
vector<int>vc[30];


int main()
{
    int m,v1,v2,u,v;
    string sf,ss;
    scanf("%d",&n);
    for(int i=0;i<=n;i++){
        vc[i].pb(i);
        mp[i]=i;
    }
    while(cin>>sf){
        if(sf=="quit") break;
        cin>>v1>>ss>>v2;
        u=mp[v1],v=mp[v2];
        if(u==v) continue;
        auto it=find(vc[u].begin(),vc[u].end(),v1);
        if(sf=="move"){
            mp[v1]=v;
            if(it+1!=vc[u].end()){
                for(auto x=it+1;x!=vc[u].end();x++){
                    vc[*x].pb(*x);
                    mp[*x]=*x;
                }
            }
            if(ss=="onto"){
                auto it1=find(vc[v].begin(),vc[v].end(),v2);
                if(it1+1!=vc[v].end()){
                    for(auto x=it1+1;x!=vc[v].end();x++){
                        vc[*x].pb(*x);
                        mp[*x]=*x;
                    }
                    vc[v].erase(it1+1,vc[v].end());
                }
            }
            vc[v].insert(vc[v].end(),it,it+1);
            vc[u].erase(it,vc[u].end());
        }
        else{
            for(auto f=it;f!=vc[u].end();f++){
                mp[*f]=v;
            }
            if(ss=="onto"){
                auto it1=find(vc[v].begin(),vc[v].end(),v2);
                if(it1+1!=vc[v].end()){
                    for(auto x=it1+1;x!=vc[v].end();x++){
                        vc[*x].pb(*x);
                        mp[*x]=*x;
                    }
                    vc[v].erase(it1+1,vc[v].end());
                }
            }
            vc[v].insert(vc[v].end(),it,vc[u].end());
            vc[u].erase(it,vc[u].end());
        }
    }
    for(int i=0;i<n;i++){
        cout<<i<<":";
        for(int x:vc[i]){
            cout<<" "<<x;
        }
        cout<<"\n";
    }

    return 0;
}

/*

8
move 2 onto 1
move 5 over 1
move 3 onto 2
move 7 over 0
move 4 onto 3
move 5 over 1
move 7 onto 3
quit

*/
