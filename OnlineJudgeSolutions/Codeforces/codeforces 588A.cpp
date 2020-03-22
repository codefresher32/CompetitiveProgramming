#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

struct point
{
    int x,y;
}p[100005];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>p[i].x>>p[i].y;
    }
    int mn=105,ans=0;
    for(int i=0;i<n;i++){
        if(p[i].y<mn){
            mn=p[i].y;
        }
        ans+=(mn*p[i].x);
    }
    cout<<ans<<endl;
    return 0;
}

