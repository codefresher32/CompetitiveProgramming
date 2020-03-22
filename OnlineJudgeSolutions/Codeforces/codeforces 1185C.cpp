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
    int n,m,a[200005]={0};
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    multiset<int,greater<int>>pq;
    ll sum=0,s2;
    for(int i=1;i<=n;i++){
       if(sum+a[i]>m){
           int cnt=0;
           s2=sum+a[i];
           for(auto it=pq.begin();it!=pq.end();it++){
                if(s2<=m){
                    break;
                }
                else{
                    cnt++;
                    s2=s2-*it;
                }
           }
           printf("%d ",cnt);
       }
       else{
            printf("0 ");
       }
       sum+=a[i];
       pq.insert(a[i]);
    }

    return 0;
}
