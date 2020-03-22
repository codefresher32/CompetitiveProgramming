#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define pii pair<int,int>
#define pi pair<char,char>
#define F first
#define S second
#define pb push_back
#define pp pop_back


int ar[100005];

bool ck(int n)
{
    int cnt[11]={0};
    set<int>st;
    for(int i=1;i<=n;i++){
        cnt[ar[i]]++;
    }
    int on=-1;
    for(int i=1;i<=10;i++){
        if(cnt[i]>0){
            if(cnt[i]==1){
                on=i;
            }
            st.insert(cnt[i]);
        }
    }
    if(st.size()==2){
        if(on!=-1){
            return true;
        }
    }
    return false;
}



int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>ar[i];
    }
    int lo,hi,mid;
    lo=1,hi=n;
    int mx=0;
    while(lo<=hi){
        mid=(lo+hi)/2;
        if(ck(mid)){
            mx=max(mx,mid);
        }
    }
    cout<<mid<<endl;
    return 0;
}

