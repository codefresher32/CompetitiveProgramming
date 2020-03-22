#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define pii pair<int,int>
#define pi pair<char,char>
#define F first
#define S second
#define pb push_back
#define pp pop_back

int id;
char s[50000];


int main ()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
    int t;
    scanf("%d",&t);
    while(t--){
        ll n,l,m=0;
        scanf("%s %lld",s,&n);
        if(n<0) n*=-1;
        l=strlen(s);
        for(int i=0;i<l;i++){
            if(s[i]=='-'){
                continue;
            }
            m=(m*10)+(s[i]-'0');
            m%=n;
        }
        printf("Case %d: ",++id);
        if(!m){
            printf("divisible\n");
        }
        else{
            printf("not divisible\n");
        }
    }
    return 0;
}
