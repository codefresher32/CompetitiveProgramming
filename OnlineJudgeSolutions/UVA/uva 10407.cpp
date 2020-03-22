#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define pii pair<ll,ll>
#define pi pair<char,char>
#define F first
#define S second
#define pb push_back
#define pp pop_back



int main ()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
    int n1,n2,gc,x;
    while(scanf("%d",&n1),n1){
        gc=0;
        while(scanf("%d",&n2),n2){
            x=n2-n1;
            x=(x<0)?x*-1:x;
            gc=__gcd(gc,x);
            n1=n2;
        }
        printf("%d\n",gc);
    }
    return 0;
}
