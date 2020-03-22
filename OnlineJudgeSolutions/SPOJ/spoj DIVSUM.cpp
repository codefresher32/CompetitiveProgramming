#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define pii pair<int,int>
#define pi pair<char,char>
#define F first
#define S second
#define pb push_back
#define pp pop_back

int a[500005];

int main ()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
    int t,m=500000;
    for(int i=1;i<=m;i++){
        for(int j=i;j<=m;j+=i){
            a[j]+=i;
        }
    }
    int n;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        printf("%d\n",a[n]-n);
    }
    return 0;
}
