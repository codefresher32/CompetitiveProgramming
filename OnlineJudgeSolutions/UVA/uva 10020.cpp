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


bool com(pii A,pii B)
{
    if(A.F==B.F){
        return A.S>B.S;
    }
    return A.F<B.F;
}

int main ()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);

    int t,l,r,m,flag;
    bool f=0;
    scanf("%d",&t);
    while(t--){
        vector<pii>vc;
        deque<pii>ans;
        if(f) printf("\n");
        f=1;
        scanf("%d",&m);
        while(scanf("%d %d",&l,&r)!=EOF){
            if(l==0&&r==0) break;
            vc.pb({l,r});
        }
        sort(vc.begin(),vc.end(),com);
        int mx,up,p,i;
        l=vc.size();
        up=i=0;
        if(l){
            while(up<m){
                mx=up;
                while(i<l&&vc[i].F<=up){
                    if(vc[i].S>mx){
                        mx=vc[i].S;
                        p=i;
                    }
                    i++;
                }
                if(up==mx) break;
                ans.pb(vc[p]);
                up=mx;
            }
        }
        if(up>=m){
            printf("%d\n",ans.size());
            for(auto x:ans){
                printf("%d %d\n",x.F,x.S);
            }
        }
        else{
            printf("0\n");
        }
    }

    return 0;
}

