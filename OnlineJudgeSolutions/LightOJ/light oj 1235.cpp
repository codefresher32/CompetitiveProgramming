#include<bits/stdc++.h>
#include <cmath>
using namespace std;

typedef long long ll;

#define pii pair<int,int>
#define pi pair<string,int>
#define F first
#define S second
#define pb push_back
#define pp pop_back
#define mod 1000003
#define ex 1e-7

int w,a[40];


void subset(int in,int n,int sum,vector<int> &s)
{
    if(in==n+1){
        s.pb(sum);
        return ;
    }
    for(int i=0;i<3;i++){
        if(sum+a[in]*i<=w){
            subset(in+1,n,sum+a[in]*i,s);
        }
    }
}


int main ()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
    int t,n,id=0;
    int v;
    scanf("%d",&t);
    while(t--){
        scanf("%d %lld",&n,&w);
        for(int i=1;i<=n;i++){
            scanf("%lld",&a[i]);
//            a[i+n]=a[i];
        }
        //n*=2;
//        for(int i=1;i<=n;i++){
//            printf("%d ",a[i]);
//        }
        //sort(a+1,a+1+n);
        int k=(n-1)/2+1;
        vector<int>s1,s2;
        subset(1,k,0,s1);
        subset(k+1,n,0,s2);
//        for(int i=0;i<s1.size();i++){
//            printf("%d %d\n",s1[i],s2[i]);
//        }
        int cnt=0;
        sort(s1.begin(),s1.end());
        bool f=0;
        for(ll x:s2){
           v=w-x;
           int id=lower_bound(s1.begin(),s1.end(),v)-s1.begin();
           if(id!=s1.size()&&s1[id]==v){
                f=1;
                break;
           }
        }
        printf("Case %d: ",++id);
        if(f) printf("Yes\n");
        else printf("No\n");
    }
    return 0;
}



