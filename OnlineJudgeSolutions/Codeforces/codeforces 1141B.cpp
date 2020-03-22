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
    int n,a[200005]={0};
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    int l=1,r=1,mx=0;
    bool fx=0;
    while(r<=n&&!fx){
        int cnt=0;
        bool f=0;
        while(a[l]==1){
            cnt++;
            l++;
            f=1;
            if(l>n){
                l=1;
                fx=1;
            }
        }
        if(!f){
            l++;

        }
        mx=max(mx,cnt);
        r=l;
    }
    cout<<mx<<endl;
    return 0;
}

