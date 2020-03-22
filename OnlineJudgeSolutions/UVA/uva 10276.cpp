#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define pii pair<int,int>
#define pi pair<char,char>
#define F first
#define S second
#define pb push_back
#define pp pop_back
#define pfb push_front
#define pfp pop_front
#define eps 10E-7
#define mod 1000000007

bool sq[5050];
int ar[5050];
map<int,int>mp;

void sieve()
{
    for(int i=2;i*i<=3000;i++){
        sq[i*i]=1;
    }
    return ;
}

int main ()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
    sieve();
    int p,n;
    p=0;
    bool f;
    for(int n=1;n<=3000;n++){
        f=0;
        for(int i=1;i<=p;i++){
            if(sq[n+ar[i]]){
                 f=1,ar[i]=n;
                 break;
            }
        }
        if(!f){
            mp[p]=n-1;
            //cout<<p<<" "<<mp[p]<<endl;
            p++,ar[p]=n;
        }
    }
    int t,a,id=0;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&a);
        printf("%d\n",mp[a]);
    }
    return 0;
}

