#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define pii pair<int,int>
#define pi pair<char,char>
#define F first
#define S second
#define pb push_back
#define pp pop_back

int ar[100005],cnt[100005],d[100005];


int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m,c=0,x;
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        cin>>ar[i];
        if(!cnt[ar[i]]){
           c++;
        }
        cnt[ar[i]]++;
    }
    d[1]=c;
    for(int i=2;i<=n;i++){
        cnt[ar[i-1]]--;
        if(!cnt[ar[i-1]]){
            c--;
        }
        d[i]=c;
    }
    while(m--){
        cin>>x;
        cout<<d[x]<<endl;
    }
    return 0;
}


