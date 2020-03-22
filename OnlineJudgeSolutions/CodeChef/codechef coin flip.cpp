#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define pi pair<char,int>
#define pii pair<int,int>
#define F first
#define S second
#define pb push_back
#define pp pop_back
#define mod 100000007



int main ()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
    int t,q,n,l,r,p;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&p);
        while(p--){
            scanf("%d %d %d",&l,&n,&r);
            if(n%2==0||l==r){
                printf("%d\n",n/2);
            }
            else{
                printf("%d\n",n/2+1);
            }
        }
    }
    return 0;
}


