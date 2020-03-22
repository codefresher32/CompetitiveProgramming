#include<iostream>
#include<string>
#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
#define pb push_back
#define pp pop_back

int n,mn,s,a[25];

void rr(int id,int sum)
{
    if(id==n+1){
        if(2*sum<=s){
            mn=min(mn,s-2*sum);
        }
        return ;
    }
    rr(id+1,sum+a[id]);
    rr(id+1,sum);
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        s+=a[i];
    }
    mn=INT_MAX;
    rr(1,0);
    cout<<mn<<endl;
    return 0;
}
