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
    int t,n,s,a;
    cin>>t;
    while(t--){
        cin>>n>>s>>a;
        cout<<n-min(s,a)+1<<endl;
    }

    return 0;
}

