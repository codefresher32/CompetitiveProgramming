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
    int n,d[200005]={0};
    cin>>n;
    for(int i=1;i<n;i++){
        cin>>d[i];
    }
    bool vis[200005];
    int lo=1,hi=n,mid,x,y,cnt,ans;
    while(lo<=hi){
        bool f=0;
        mid=(lo+hi)/2;
        x=mid;
        memset(vis,0,sizeof(vis));
        vis[x]=1;
        cnt=1;
        for(int i=1;i<n;i++){
            x=x+d[i];
            if(x>n){
                hi=mid-1;
                break;
            }
            else if(x<=0||vis[x]){
                lo=mid+1;
                break;
            }
            if(!vis[x]){
                cnt++;
                vis[x]=1;
            }
            if(cnt==n){
                ans=mid;
                f=1;
                break;
            }
        }
        if(f){
            cout<<ans<<" ";
            for(int i=1;i<n;i++){
            ans=ans+d[i];
            cout<<ans<<" ";
            }
            return 0;
        }

    }
    cout<<-1<<endl;
    return 0;
}
