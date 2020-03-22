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

ll F(string s)
{
    int l;
    ll ans=0;
    l=s.size();
    for(int i=0;i<l;i++){
        ans=ans*10+(s[i]-'0');
    }
    return ans;
}

bool com(pi A,pi B)
{
    if(A.S==B.S){
        return A.F<B.F;
    }
    return A.S<B.S;
}


int main ()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
    ll t,n,m,a,b,q,x,y,p,r;
    char o[25];
    int id=0;
    string s1,s2,s3;
    scanf("%lld",&t);
    while(t--){
        scanf("%lld %lld %lld",&n,&m,&q);
        vector<pi>vc;
        while(q--){
            scanf("%s",o);
            int i=0,l;
            l=strlen(o);
            s1=s2=s3="";
            for(; ;i++){
                if(o[i]==':'){
                    i++;
                    break;
                }
                s1+=o[i];
            }
            for(; ;i++){
                if(o[i]==','){
                    i++;
                    break;
                }
                s2+=o[i];
            }
            for(;i<l;i++){
                s3+=o[i];
            }
            a=F(s2);
            b=F(s3);
            ll ss=0;
            x=n,y=m;
            while(x!=y){
                p=x/2;
                if(p<y){
                    ss+=(x-y)*a,x=y;
                }
                else{
                    ss+=min((x-p)*a,b),x=p;
                }
            }
            vc.pb({s1,ss});
        }
        sort(vc.begin(),vc.end(),com);
        printf("Case %d\n",++id);
        for(pi xx:vc){
            cout<<xx.F<<" "<<xx.S<<endl;
            //printf("%s %d\n",xx.F,xx.S);
        }
    }

    return 0;
}


