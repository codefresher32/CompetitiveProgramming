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
    int t,n,m,w,u,v,id=0;
    char s[105];
    scanf("%d",&t);
    while(t--){
        scanf("%d %s",&n,s);
        int p,cnt=0;
        for(int i=0;i<n;i++){
            if(s[i]=='#') continue;
            p=0;
            if(i+1<n) i++,p=1;
            if(s[i-p]=='.'){
                s[i-p]=s[i]=s[i+p]='#',cnt++;
            }
        }

        printf("Case %d: %d\n",++id,cnt);

    }
    return 0;
}


