#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

#define pii pair<int,int>
#define pi pair<string,int>
#define F first
#define S second
#define pb push_back
#define pp pop_back
#define mod 10
#define ex 1e-7



int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m,a1,a2,k1,k2,mn,mx,x,y;
    cin>>a1>>a2>>k1>>k2>>n;
    mn=max(0,n-(a1*(k1-1)+a2*(k2-1)));
    mx=0;
    if(k1==k2){}
    if(k1>k2){
        swap()
    }
    if(k1<k2){
        x=n/k1;
        n-=(x*k1);
        mx+=x;
    }
    return 0;
}

