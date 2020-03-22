#include<bits/stdc++.h>
#include <cmath>
using namespace std;

typedef long long ll;

#define pii pair<int,int>
#define pi pair<string,int>
#define F first
#define S second
#define pb push_back
#define pp pop_back
#define mod 1000003
#define ex 1e-7


int a[1000005];


int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t,n,k,cnt,c;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    cin>>k;
    cnt=0;
    c=-k+1;
    int kk=k;
    deque<pii>dq;
    for(int i=1;i<=n;){
        while(cnt<kk){
            while(!dq.empty()&&dq.back().F<=a[i]){
                dq.pp();
            }
            dq.pb({a[i],i});
            i++,cnt++;
            c++;
        }
        cnt=0;
        kk=1;
        while(!dq.empty()&&dq.front().S<c){
            dq.pop_front();
        }
        cout<<dq.front().F;
        if(i<=n){
            cout<<" ";
        }
    }
    //cout<<endl;
    return 0;
}


