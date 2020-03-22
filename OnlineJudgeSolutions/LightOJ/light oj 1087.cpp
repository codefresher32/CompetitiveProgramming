#include<bits/stdc++.h>

using namespace std;

typedef long long ll;


#define pii pair<ll,ll>
#define pi pair<int,int>
#define F first
#define S second
#define pb push_back
#define pp pop_back
#define eps 10E-10
#define mod 10000019



int main ()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
    int t,n,m,q,l,r,id=0,ar;
    scanf("%d",&t);
    while(t--){
        deque<int>dq;
        scanf("%d %d",&n,&q);
        for(int i=1;i<=n;i++){
            scanf("%d",&ar);
            dq.pb(ar);
        }
        char ch;
        printf("Case %d:\n",++id);
        int l=dq.size();
        while(q--){
            scanf(" %c %d",&ch,&m);
            if(ch=='c'){
                if(m>l) printf("none\n");
                else{
                    printf("%d\n",dq[m-1]);
                    l--,dq.erase(dq.begin()+(m-1));
                }
            }
            else dq.pb(m),l++;
        }
    }
    return 0;
}

