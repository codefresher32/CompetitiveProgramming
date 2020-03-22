#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define pii pair<int,int>
#define pi pair<char,char>
#define F first
#define S second
#define pb push_back
#define pp pop_back
#define mod 100000007
#define eps 1e-6
#define on(x) (marked[x/64]&(1<<((x%64)/2)))
#define mark(x) marked[x/64]|=(1<<((x%64)/2))

int l[205],r[205];

int main ()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
    int t,n,id=0;
    while(scanf("%d",&n),n){
        map<pii,bool>mp;
        for(int i=1;i<=n;i++){
            scanf("%d %d",&l[i],&r[i]);
        }
        int mx,my,ans=0,gc;
        for(int i=1;i<=n;i++){
            for(int j=i+1;j<=n;j++){
                my=r[j]-r[i];
                mx=l[j]-l[i];
                if(my==0) mx=0;
                else if(mx==0) my=1;
                else if((mx<0&&my<0)||mx<0) mx=-mx,my=-my;
                gc=__gcd(mx,my);
                gc=(gc<0)?-gc:gc;
                if(gc!=0) mx/=gc,my/=gc;
                if(!mp[{mx,my}]){
                    ans++,mp[{mx,my}]=1;
                    //cout<<my<<"/"<<mx<<endl;
                }
            }
        }
        printf("%d\n",ans);
    }
    return 0;
}
