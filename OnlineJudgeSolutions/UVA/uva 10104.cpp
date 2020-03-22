#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define pii pair<ll,ll>
#define pi pair<char,char>
#define F first
#define S second
#define pb push_back
#define pp pop_back
#define eps 10E-10
#define mod 10000019
#define on(x) (marked[x/64]&(1<<((x%64)/2)))
#define mark(x) marked[x/64]|=(1<<((x%64)/2))


ll extended_euclid(ll A,ll B,ll *X,ll *Y)
{
    int a,b,x,y,u,v;
    a=A,b=B,x=0,y=1,u=1,v=0;
    while(a!=0){
        int qtnt,rem,m,n;
        qtnt=b/a;
        rem=b%a;
        m=x-u*qtnt;
        n=y-v*qtnt;
        b=a,a=rem;
        x=u,y=v;
        u=m,v=n;
    }
    *X=x,*Y=y;
    return b;
}


int main ()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
    ll A,B,X,Y,gc;
    while(scanf("%lld %lld",&A,&B)!=EOF){
        gc=extended_euclid(A,B,&X,&Y);
        if(A==B&&X>Y) swap(X,Y);
        printf("%lld %lld %lld\n",X,Y,gc);
    }

    return 0;
}

