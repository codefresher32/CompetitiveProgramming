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


int main ()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
    int t,n,q,l,r,x,a,y,id=0;
    scanf("%d",&t);
    while(t--){
        vector<int>vc;
        scanf("%d %d",&n,&q);
        for(int i=0;i<n;i++){
            scanf("%d",&a);
            vc.pb(a);
        }
        sort(vc.begin(),vc.end());
        //scanf("%d",&q);
        int p;
        printf("Case %d:\n",++id);
        while(q--){
            scanf("%d %d",&l,&r);
            if(l>vc[n-1]){
                l=-1,r=-1;
            }
            if(r<vc[0]){
                l=-1,r=-1;
            }

            x=lower_bound(vc.begin(),vc.end(),l)-vc.begin();
            y=upper_bound(vc.begin(),vc.end(),r)-vc.begin();

            if(x==n) x--;
            if(y==n) y--;
            //cout<<x<<" "<<y<<endl;
            if(vc[y]>r) y--;

            printf("%d\n",(l==r&&l==-1)?0:y-x+1);
        }
    }
    return 0;
}

