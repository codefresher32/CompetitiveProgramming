#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pii pair<int,int>
#define F first
#define S second
#define pb push_back
#define pp pop_back



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m,l;
    ll a[100005]={0},p,d;
    cin>>n>>m>>l;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    int c=0;
    for(int i=1;i<=n;i++){
        if(a[i]>l&&a[i+1]<=l){
            c++;
        }
    }
    for(int i=1;i<=m;i++){
        cin>>p;
        if(p==0){
            cout<<c<<endl;
        }
        else{
            cin>>d;
            a[p]+=d;
            if(a[p]-d<=l){
                if(a[p+1]<=l&&a[p-1]<=l&&a[p]>l){
                    c++;
                }
                else if(a[p+1]>l&&a[p-1]>l&&a[p]>l){
                    c--;
                }
            }
        }
    }

    return 0;
}


