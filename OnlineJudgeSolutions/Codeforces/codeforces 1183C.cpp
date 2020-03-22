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
    int q,n,k,a,b,x,y;
    cin>>q;
    while(q--){
        cin>>k>>n>>a>>b;
        x=(k-1)/b;
        k--;
        if(x<n){
            cout<<-1<<endl;
        }
        else{
            x=k/a;
            int l,lo,hi,mid,ans;
            lo=0,hi=x;
            ans=0;
            while(lo<=hi){
                mid=(lo+hi)/2;
                l=k-(mid*a);
                if(mid+(l/b)>=n){
                    ans=max(ans,mid);
                    lo=mid+1;
                }
                else{
                    hi=mid-1;
                }
            }
            cout<<min(ans,n)<<endl;
        }
    }

    return 0;
}


