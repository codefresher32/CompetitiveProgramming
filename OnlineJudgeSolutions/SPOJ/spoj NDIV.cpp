#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define pii pair<ll,ll>
#define pi pair<char,char>
#define F first
#define S second
#define pb push_back
#define pp pop_back
#define mod 100000007
#define eps 1e-6
#define on(x) (marked[x/64]&(1<<((x%64)/2)))
#define mark(x) marked[x/64]|=(1<<((x%64)/2))


vector<int>prime;
int marked[100005/64+10];

bool isPrime(int num)
{
    return num>1&&(num==2||((num&1)&&!on(num)));
}

void sieve()
{
    int n=100004;
    prime.pb(2);
    for(int i=3;i*i<=n;i+=2){
        if(!on(i)){
            for(int j=i*i;j<=n;j+=2*i){
                mark(j);
            }
        }
    }
    for(int i=3;i<=n;i+=2){
        if(isPrime(i)) prime.pb(i);
    }
    return ;
}



void fac(int a,int b,int d)
{
    int c=0,ans,cnt,n;
    for(int j=a;j<=b;j++){
        n=j,ans=1;
        for(int i=0;i<prime.size()&&prime[i]*prime[i]<=n;i++){
            if(n%prime[i]==0){
                cnt=0;
                while(n%prime[i]==0){
                    cnt++,n/=prime[i];
                }
                ans*=(cnt+1);
            }
        }
        if(n>1){
            ans*=2;
        }
        if(ans==d) c++;
    }
    printf("%d\n",c);
    return ;
}

int main ()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
   sieve();
   int a,b,n;
   scanf("%d %d %d",&a,&b,&n);
   fac(a,b,n);
    return 0;
}
