#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pii pair<int,int>
#define F first
#define S second
#define pb push_back
#define pp pop_back

int bit(int n)
{
    int c=0;
    while(n){
        c++;
        n/=2;
    }
    return c;
}



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,x,y,a[32]={0};
    set<int>st;
    cin>>n;
    a[0]=0;
    st.insert(0);
    x=1;
    for(int i=1;i<=30;i++){
       x*=2;
       a[i]=x-1;
       st.insert(a[i]);
    }
    int c=bit(n);
    //cout<<a[c]<<endl;
    vector<int>vc;
    if(a[c]==n){
        cout<<0<<endl;
    }
    else{
        int ans=0;
        for(int i=1; ;i++){
            if(i&1){
                c=bit(n);
                vc.pb(c);
                n=n^a[c];
            }
            else{
                n++;
            }
            ans++;
            auto it=st.find(n);
            if(it!=st.end()){
                break;
            }
        }
        cout<<ans<<endl;
        for(int v:vc){
            cout<<v<<" ";
        }
    }
    return 0;
}

