#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define pii pair<int,int>
#define pi pair<char,char>
#define F first
#define S second
#define pb push_back
#define pp pop_back
#define mod 1000003




int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T,m,n,c;
    int ar[100005]={0};
    scanf("%d %d",&n,&c);
    for(int i=0;i<n;i++){
        scanf("%d",&ar[i]);
    }
    sort(ar,ar+n);
    int cnt,lw;
    cnt=0;
    for(int i=0;i<n;i++){
        lw=lower_bound(ar,ar+n,ar[i]+c)-ar;
        if(ar[lw]==ar[i]+c){
            cnt++;
        }
    }
    cout<<cnt<<endl;
    return 0;
}


