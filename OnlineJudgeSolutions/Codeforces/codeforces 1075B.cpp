#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m,a[200005]={0},t;
    cin>>n>>m;
    for(int i=0;i<n+m;i++){
        cin>>a[i];
    }
    int d[100005]={0},rd[100005]={0},l=0,r=0;
    vector<int>vd,vr;
    for(int i=0;i<n+m;i++){
        cin>>t;
        if(t==0){
            rd[l++]=a[i];
        }
        else{
            d[r++]=a[i];
        }
    }
    int cnt[100005]={0};
    int pos,p1,p2;
    for(int i=0;i<l;i++){
        pos=lower_bound(d,d+r,rd[i])-d;
       // cout<<pos<<endl;
        if(pos==0){
            pos=0;
        }
        else if(pos==r){
            pos=r-1;
        }
        else{
           p1=pos-1;
           p2=pos;
           if(abs(d[p1]-rd[i])<=abs(d[p2]-rd[i])){
                pos=p1;
           }
           else{
                pos=p2;
           }
        }
        cnt[pos]++;
    }
    for(int i=0;i<r;i++){
        cout<<cnt[i]<<" ";
    }
    return 0;
}


