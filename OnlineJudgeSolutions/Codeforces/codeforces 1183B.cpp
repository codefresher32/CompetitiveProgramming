#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pii pair<int,int>
#define F first
#define S second
#define pb push_back
#define pp pop_back

int a[105];
int n,k;



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int q,x,y;
    cin>>q;
    while(q--){
        cin>>n>>k;
        y=INT_MAX;
        for(int i=1;i<=n;i++){
            cin>>a[i];
            y=min(a[i],y);
        }
        int ans,cnt;
        ans=-1;
            x=y+k;
            cnt=0;
            for(int j=1;j<=n;j++){
                if(abs(a[j]-x)<=k){
                    cnt++;
                }
            }
            if(cnt==n&&ans<x){
                ans=x;
            }

        cout<<ans<<endl;
    }

    return 0;
}
