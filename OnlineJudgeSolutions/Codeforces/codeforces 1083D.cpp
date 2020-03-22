#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pii pair<int,int>
#define F first
#define S second
#define pb push_back
#define pp pop_back



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int q,n,k,a,b,x,y;
    cin>>q;
    while(q--){
        cin>>n;
        map<int,int>mp;
        for(int i=1;i<=n;i++){
            cin>>a;
            mp[a]++;
        }
        int sum=0;
        priority_queue<int>pq;
        for(auto xx:mp){
            //cout<<xx.F<<" "<<xx.S<<endl;
            pq.push(xx.S);
        }
        map<int,bool>vis;
        while(!pq.empty()){
            x=pq.top();
            pq.pop();
            if(!vis[x]){
                vis[x]=1;
                sum+=x;
                y=x;
            }
            else{
                vis[y-1]=1;
                sum+=(y-1);
                y--;
            }
            if(y==1){
                break;
            }
        }
        cout<<sum<<endl;

    }
    return 0;
}



