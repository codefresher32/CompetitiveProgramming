#include<bits/stdc++.h>
using namespace std;

typedef long long ll;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,k;
    cin>>n>>k;
    set<int>st;
    int a[5005]={0},cnt[5005],mx=-1,b[5005],m[5005]={0};
    for(int i=1;i<=n;i++){
        cin>>a[i];
        st.insert(a[i]);
        cnt[a[i]]++;
        mx=max(mx,cnt[a[i]]);
    }
    if(mx>k){
        cout<<"NO\n";
        return 0;
    }
    int x=1;
    mx=-1;
    memset(cnt,0,sizeof(cnt));
    for(int i=1;i<=n;i++){
        b[i]=m[a[i]]+1;
        m[a[i]]++;
        mx=max(m[a[i]],mx);
        cnt[b[i]]++;
    }
    //cout<<mx<<endl;
    int c=0;
    for(int i=1;i<=n&&mx<k;i++){
        if(cnt[b[i]]>1){
            b[i]=mx+1;
            mx++;
            cnt[b[i]]--;
        }
    }
    cout<<"YES\n";
    for(int i=1;i<=n;i++){
        cout<<b[i]<<" ";
    }
    return 0;
}


