#include<bits/stdc++.h>
#include <cmath>
using namespace std;

typedef long long ll;

#define pii pair<int,ll>
#define pi pair<char,char>
#define F first
#define S second
#define pb push_back
#define pp pop_back
#define mod 1000003
#define ex 1e-7



int main ()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
    int T,n,a,x1,x2,y1,y2,sum;
    scanf("%d",&T);
    while(T--){
        scanf("%d",&n);
        deque<int>dq;
        for(int i=1;i<=n;i++){
            scanf("%d",&a);
            dq.pb(a);
        }
        sort(dq.begin(),dq.end());
        sum=0;
        vector<pii>vc;
        while(dq.size()){
            if(dq.size()==1){
                sum+=dq[0];
                vc.pb({dq[0],0});
                dq.clear();
            }
            else if(dq.size()==2){
                sum+=dq[1];
                vc.pb({dq[0],dq[1]});
                dq.clear();
            }
            else if(dq.size()==3){
                sum+=dq[0]+dq[1]+dq[2];
                vc.pb({dq[0],dq[1]});
                vc.pb({dq[0],0});
                vc.pb({dq[0],dq[2]});
                dq.clear();
            }
            else{
                x1=dq[0],y1=dq[1];
                x2=dq.back();
                dq.pop_back();
                y2=dq.back();
                dq.pop_back();
                if(x1+y2<2*y1){
                    sum+=2*x1+x2+y2;
                    vc.pb({x1,x2});
                    vc.pb({x1,0});
                    vc.pb({x1,y2});
                    vc.pb({x1,0});
                }
                else{
                    sum+=2*y1+x1+x2;
                    vc.pb({x1,y1});
                    vc.pb({x1,0});
                    vc.pb({y2,x2});
                    vc.pb({y1,0});
                }
            }
        }
        printf("%d\n",sum);
        for(pii tp:vc){
            if(!tp.S){
                printf("%d\n",tp.F);
            }
            else{
                printf("%d %d\n",tp.F,tp.S);
            }

        }
        if(T){
            printf("\n");
        }
    }
    return 0;
}


