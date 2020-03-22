#include<bits/stdc++.h>
using namespace std;

struct price
{
    int x;
    int y;
}v[200005];

bool com(price a,price b)
{
    return (a.x-a.y)<(b.x-b.y);
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,k;
    cin>>n>>k;
    for(int i=0;i<n;i++){
        cin>>v[i].x;
    }
    for(int i=0;i<n;i++){
        cin>>v[i].y;
    }
    sort(v,v+n,com);

    int cost=0;
    for(int i=0;i<n;i++){
        if(k){
            cost+=v[i].x;
            k--;
        }
        else{
            cost+=min(v[i].x,v[i].y);
        }
    }
    cout<<cost<<endl;
    return 0;
}
