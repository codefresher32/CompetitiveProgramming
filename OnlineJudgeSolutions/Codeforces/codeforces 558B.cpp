#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

struct pr
{
    int fi,da,la;
}a[1000005];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,x,y,l,r;
    cin>>n;
    int mx=-1;
    for(int i=0;i<n;i++){
        cin>>x;;
        if(!a[x].da){
            a[x].fi=i;
        }
        a[x].la=i;
        a[x].da++;
        mx=max(mx,a[x].da);
    }
    int mn=INT_MAX;
    for(int i=1;i<=1e6;i++){
        if(a[i].da==mx){
            if(mn>a[i].la-a[i].fi){
                mn=a[i].la-a[i].fi;
                l=a[i].la;
                r=a[i].fi;
            }
        }
    }
    cout<<r+1<<" "<<l+1<<endl;
    return 0;
}
