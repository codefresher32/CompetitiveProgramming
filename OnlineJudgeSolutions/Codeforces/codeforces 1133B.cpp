#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pii pair<int,string>
#define F first
#define S second
#define pb push_back
#define pp pop_back



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,k,a[200005]={0},x,cnt[105]={0},y;
    cin>>n>>k;
    for(int i=1;i<=n;i++){
        cin>>x;
        a[i]=x%k;
        cnt[a[i]]++;
    }
    sort(a+1,a+1+n);
    int ans=0;
    ans+=(cnt[0])/2;
    cnt[0]=0;
    for(int i=1;i<=k/2;i++){
        x=k-i;
        y=min(cnt[i],cnt[x]);
        if(i==x){
            ans+=y/2;
            y/=2;
             cnt[i]-=y;
            cnt[x]-=y;
        }
        else{
            ans+=y;
             cnt[i]-=y;
            cnt[x]-=y;
        }

    }
    cout<<ans*2<<endl;
    return 0;
}
